<!-- omit in toc -->
# Cal Poly CARP SOC
[![CI](https://github.com/Cal-Poly-RAMP/tapeout-ci-2311/actions/workflows/user_project_ci.yml/badge.svg)](https://github.com/Cal-Poly-RAMP/tapeout-ci-2311/actions/workflows/user_project_ci.yml)

- [Architecture Overview](#architecture-overview)
- [OBI Bus And Peripherals](#obi-bus-and-peripherals)
  - [Memory Map](#memory-map)
    - [Boot ROM and Boot Configs](#boot-rom-and-boot-configs)
    - [XIP QSPI Flash Controller (QSPI\_1)](#xip-qspi-flash-controller-qspi_1)
    - [Monitor Interrupt Generator](#monitor-interrupt-generator)
  - [Wishbone-OBI Bridge](#wishbone-obi-bridge)
  - [OBI Bus Protocol](#obi-bus-protocol)
- [IO Assignment](#io-assignment)
  - [GPIO Pins](#gpio-pins)
  - [Logic Analyzer Pins](#logic-analyzer-pins)
    - [Logic Analyzer Sample Channels](#logic-analyzer-sample-channels)
  - [Pin Descriptions (QFN64 9x9 0.5)](#pin-descriptions-qfn64-9x9-05)

# Architecture Overview

![CARP drawio](https://github.com/Cal-Poly-RAMP/tapeout-ci-2311/assets/114958111/da811b77-7d82-4069-ad05-54c06919866c)

The CARP SOC is composed of 2 RISC-V RV32I processors, a primary processor (the "CARP Core") and a processor that manages and monitors the CARP Core (the "Monitor Core"). The processors each have their own address space, volatile and (off-chip) non-volatile memory, clocks, resets, and peripherals. The Monitor Core and its peripherals have their documentation [here](https://caravel-harness.readthedocs.io/en/latest/getting-started.html), while the CARP Core and its peripherals are documented below.

# OBI Bus And Peripherals

## Memory Map

The main memory interconnect used on the SoC is a subset of OpenHW Group's Open Bus Interface (OBI). The subset we are using is the same subset used by OpenHW Groups's RI5CY Core, and its behavior is fully described in the OBI-1 specification. 

| Start Address | End Address | Section |
| :--- | :--- | :---:|
| 0x0000_0000 | 0x0000_0FFF | Bootloader |
| 0x0000_1000 | 0x0FFF_FFFF | -- |
| 0x1000_0000 | 0x1000_1FFF | Peripheral Register File |
| 0x1000_1000 | 0x1FFF_FFFF | -- |
| 0x2000_0000 | 0x3FFF_FFFF | 512Mb Flash |
| 0x4000_0000 | 0x7FFF_FFFF | -- |
| 0x8000_0000 | 0x8000_4FFF | 20 kB SRAM |
| 0x8000_5000 | 0xEFFF_FFFF | -- |
| 0xF000_0000 | 0xF000_0003 | Monitor Interrupt Generator |
| 0xF000_0004 | 0xFFFF_FFFF | -- |

### Boot ROM and Boot Configs

On boot, the core resets the program counter to an address based on the boot_sel input.

| `boot_sel` | `copy_boot_sel` | Program Counter Reset Address | Function |
| :---: | :---: | :---: | :--- |
| `0` | `0` | `0x0000_0000` | Copies 512 words from QSPI (starting from `0x2000_0000` into SRAM), then jumps to SRAM at `0x8000_0000`. |
| `0` | `1` | `0x0000_0000` | Jumps to QSPI at `0x2000_0000` and begins executing in place. |
| `1` | x | `0x8000_0000` | Starts execution from the internal SRAM. <br> This assumes that the caravel has loaded a program into the SRAM prior to startup. | 

### XIP QSPI Flash Controller (QSPI_1)

The QSPI controller at `0x2000_0000` can support up to 512MB external QSPI memory. This flash can be programmed via the housekeeping SPI (SPI_0) in pass-thru mode. There is a 32 bit control register located at address `0x3FFF_FFFF`, described below.

| Bit(s) | Description                                               |
| -----: | --------------------------------------------------------- |
|     31 | MEMIO Enable (reset=1, set to 0 to bit bang SPI commands) |
|  30:23 | Reserved (read 0)                                         |
|     22 | DDR Enable bit (reset=0)                                  |
|     21 | QSPI Enable bit (reset=0)                                 |
|     20 | CRM Enable bit (reset=0)                                  |
|  19:16 | Read latency (dummy) cycles (reset=8)                     |
|  15:12 | Reserved (read 0)                                         |
|   11:8 | IO Output enable bits in bit bang mode                    |
|    7:6 | Reserved (read 0)                                         |
|      5 | Chip select (CS) line in bit bang mode                    |
|      4 | Serial clock line in bit bang mode                        |
|    3:0 | IO data bits in bit bang mode                             |

The following settings for CRM/DDR/QSPI modes are valid:

| CRM | QSPI | DDR | Read Command Byte     | Mode Byte |
| :-: | :--: | :-: | :-------------------- | :-------: |
|   0 |    0 |   0 | 03h Read              | N/A       |
|   0 |    0 |   1 | BBh Dual I/O Read     | `0xFF`       |
|   1 |    0 |   1 | BBh Dual I/O Read     | `0xA5`       |
|   0 |    1 |   0 | EBh Quad I/O Read     | `0xFF`       |
|   1 |    1 |   0 | EBh Quad I/O Read     | `0xA5`       |
|   0 |    1 |   1 | EDh DDR Quad I/O Read | `0xFF`       |
|   1 |    1 |   1 | EDh DDR Quad I/O Read | `0xA5`       |

### Monitor Interrupt Generator

There is a 3 bit interrupt vector for the Monitor Core that can be generated by the CARP SOC by writing to address `0xF000_0000`. The two least significant bits are generated by the two least significant bits of the write data, and the third bit of the interrupt vector is reserved for hardware-generated interrupts

| irq[2] | irq[1] | irq[0] |
| :--- | :--- | :--- |
| Hardware Error | Write Data bit 1 | Write Data bit 0 |

## Wishbone-OBI Bridge

The wishbone port on the SOC allows the Monitor Core to read and write to the CARP Core's SRAM, as long as the `wishbone enable` control is set (see Logic Analyzer). The SRAM is located at address `0x3000_0000` in the wishbone address space. The Wishbone-OBI bridge handles clock domain crossing, protocol conversion, and address translation.

## OBI Bus Protocol

The specific signals are enumerated below:

| Pin Name  | Pin Count | Direction               | Description                                                    |
|-----------|:---------:|-------------------------|----------------------------------------------------------------|
| req     | 1  | Controller -> Memory    | Asserted by the controller to request a memory transaction. The controller is responsible to keep all address signals valid while req is high.     |
| gnt     | 1  | Memory -> Controller    | Asserted by the memory system when new transactions can be accepted. A transaction is accepted on the rising edge of the clock if req and gnt are both high.   |
| addr    | 32 | Controller -> Memory    | Address output from the controller to access memory location   |
| we      | 1  | Controller -> Memory    | Asserted by the controller to indicate a write operation         |
| be      | 4  | Controller -> Memory    | Byte enable output (strobe), to specify which bytes should be accessed  |
| wdata   | 32 | Controller -> Memory    | Write data output from the controller to be written to memory  |
| rvalid  | 1  | Memory -> Controller    | Asserted by the memory system to signal valid read data. The read response is completed on the first rising clock edge when rvalid is asserted. rdata must be valid as long as rvalid is high.       |
| rdata   | 32 | Memory -> Controller    | Read data input to the controller from the memory system       |


# IO Assignment

## GPIO Pins

There are 38 user-programmable IO pins:

| Pin # | Input Pin | Output Pin | Output Enable | Description |
| --- | --- | --- | --- | --- |
| 0 | JTAG | x | x | reserved |
| 1 | x | SPI_0_SDO | 1 | SPI 0 (Housekeeping SPI) |
| 2 | SPI_0_SDI | x | 0 | SPI 0 (Housekeeping SPI) |
| 3 | SPI_0_CSB | x | 0 | SPI 0 (Housekeeping SPI) |
| 4 | SPI_0_SCK | x | 0 | SPI 0 (Housekeeping SPI) |
| 5 | `copy_boot_sel` | x | x | 1 = copy 512 words from flash to SRAM and jump to SRAM. 0 = jump to flash. |
| 6 | `boot_sel` | x | x | Hard select for the bootloader. (see Boot ROMs) |
| 7 | `rst_hard_n` | x | x | Hard reset input, such as for a reset button (active low) |
| 8 | x | `o_qspi_cs_n` | 0 | QSPI chip select (active low) |
| 9 | x | `o_qspi_sck` | 0 | QSPI clock |
| 10 | `i_qspi_dat[0]` | `o_qspi_dat[0]` | Determined by `o_qspi_mod` | QSPI data bit 0 |
| 11 | `i_qspi_dat[1]` | `o_qspi_dat[1]` | Determined by `o_qspi_mod` | QSPI data bit 1 |
| 12 | `i_qspi_dat[2`] | `o_qspi_dat[2]` | Determined by `o_qspi_mod` | QSPI data bit 2 |
| 13 | `i_qspi_dat[3]` | `o_qspi_dat[3]` | Determined by `o_qspi_mod` | QSPI data bit 3 |
| 14 |  |  |  | (Peripherals) |
| 15 |  |  |  | (Peripherals) |
| 16 |  |  |  | (Peripherals) |
| 17 |  |  |  | (Peripherals) |
| 18 |  |  |  | (Peripherals) |
| 19 |  |  |  | (Peripherals) |
| 20 |  |  |  | (Peripherals) |
| 21 |  |  |  | (Peripherals) |
| 22 |  |  |  | (Peripherals) |
| 23 |  |  |  | (Peripherals) |
| 24 |  |  |  | (Peripherals) |
| 25 |  |  |  | (Peripherals) |
| 26 |  |  |  | (Peripherals) |
| 27 |  |  |  | (Peripherals) |
| 28 |  |  |  | (Peripherals) |
| 29 |  |  |  | (Peripherals) |
| 30 |  |  |  | (Peripherals) |
| 31 |  |  |  | (Peripherals) |
| 32 |  |  |  | (Peripherals) |
| 33 |  |  |  | (Peripherals) |
| 34 |  |  |  | (Peripherals) |
| 35 |  |  |  | (Peripherals) |
| 36 |  |  |  | (Peripherals) |
| 37 |  |  |  | (Peripherals) |

## Logic Analyzer Pins

There are 128 logic analyzer io pins controllable from the caravel.

| Pin #'s | Signal Name         | Description |
| :---:   | :---:               | :---        |
| 3:0     | `reset_soft_n`      | As long as the value `0xA` is written to this nibble, the user area will reset |
| 7:4     | `wishbone_enable`   | As long as the value `0xA` is written to this nibble, the data port of the onboard RAM will be given to the wishbone bus. The CARP core will not have access to the RAM. |
| 11:8    | `halt_clock`        | As long as a `0xA` is written to this nibble, the clock will be held in its current position (high or low). |
| 14:12   | `la_mux`            | Logic Analyzer sample channel MUX select. The channels (see "Sample Channels" below) can be selected between using these bits. |
| 15      | `clk_masked`        | System On Chip Clock |
| 127:16  | Sample Channels     | 112 Bit digital sample channels. These can be selected between using `la_mux`. | 

### Logic Analyzer Sample Channels

| Pin # | CH 0               | CH 1               | CH 2                       | CH 3                 | CH 4                     | CH 5                | CH 6                | CH 7                 |
| ----- | ------------------ | ------------------ | -------------------------- | -------------------- | ------------------------ | ------------------- | ------------------- | -------------------- |
| 16    | `dmem_addr[0]`   | `imem_addr[0]`   | `sram_d_muxed_addr[0]`   | `sram_i_addr[0]`   | `peripheral_addr[0]`   | `rf_port1_reg[0]` | `gpio_i[5]`       | `p_interrupts[0]`  |
| 17    | `dmem_addr[1]`   | `imem_addr[1]`   | `sram_d_muxed_addr[1]`   | `sram_i_addr[1]`   | `peripheral_addr[1]`   | `rf_port1_reg[1]` | `gpio_i[6]`       | `p_interrupts[1]`  |
| 18    | `dmem_addr[2]`   | `imem_addr[2]`   | `sram_d_muxed_addr[2]`   | `sram_i_addr[2]`   | `peripheral_addr[2]`   | `rf_port1_reg[2]` | `gpio_i[7]`       | `p_interrupts[2]`  |
| ...   | ...                | ...                | ...                        | ...                  | ...                      | ...                 | ...                 | ...                  |
| 20    | `dmem_addr[4]`   | `imem_addr[4]`   | `sram_d_muxed_addr[4]`   | `sram_i_addr[4]`   | `peripheral_addr[4]`   | `rf_port1_reg[4]` | `gpio_i[9]`       | `p_interrupts[4]`  |
| 21    | `dmem_addr[5]`   | `imem_addr[5]`   | `sram_d_muxed_addr[5]`   | `sram_i_addr[5]`   | `peripheral_addr[5]`   | `rf_rs1[0]`       | `gpio_i[10]`      | `p_interrupts[5]`  |
| ...   | ...                | ...                | ...                        | ...                  | ...                      | ...                 | ...                 | ...                  |
| 47    | `dmem_addr[31]`  | `imem_addr[31]`  | `sram_d_muxed_addr[31]`  | `sram_i_addr[31]`  | `peripheral_addr[31]`  | `rf_rs1[26]`      | `gpio_i[36]`      | `p_interrupts[31]` |
| 48    | `dmem_req`       | `imem_req`       | `sram_d_muxed_req`       | `sram_i_req`       | `peripheral_req`       | `rf_rs1[27]`      | `gpio_i[37]`      | `p_interrupts[32]` |
| 49    | `dmem_gnt`       | `imem_gnt`       | `sram_d_muxed_gnt`       | `sram_i_gnt`       | `peripheral_gnt`       | `rf_rs1[28]`      | `gpio_o[5]`       | `p_interrupts[33]` |
| 50    | `dmem_we`        | `imem_we`        | `sram_d_muxed_we`        | `sram_i_we`        | `peripheral_we`        | `rf_rs1[29]`      | `gpio_o[6]`       | `p_interrupts[34]` |
| 51    | `dmem_be[0]`     | `imem_be[0]`     | `sram_d_muxed_be[0]`     | `sram_i_be[0]`     | `peripheral_be[0]`     | `rf_rs1[30]`      | `gpio_o[7]`       | `p_interrupts[35]` |
| 52    | `dmem_be[1]`     | `imem_be[1]`     | `sram_d_muxed_be[1]`     | `sram_i_be[1]`     | `peripheral_be[1]`     | `rf_rs1[31]`      | `gpio_o[8]`       | `p_interrupts[36]` |
| 53    | `dmem_be[2]`     | `imem_be[2]`     | `sram_d_muxed_be[2]`     | `sram_i_be[2]`     | `peripheral_be[2]`     | `rf_port2_reg[0]` | `gpio_o[9]`       | `p_interrupts[37]` |
| 54    | `dmem_be[3]`     | `imem_be[3]`     | `sram_d_muxed_be[3]`     | `sram_i_be[3]`     | `peripheral_be[3]`     | `rf_port2_reg[1]` | `gpio_o[10]`      | `p_interrupts[38]` |
| 55    | `dmem_rvalid`    | `imem_rvalid`    | `sram_d_muxed_rvalid`    | `sram_i_rvalid`    | `peripheral_rvalid`    | `rf_port2_reg[2]` | `gpio_o[11]`      | `p_interrupts[39]` |
| 56    | `dmem_rdata[0]`  | `imem_rdata[0]`  | `sram_d_muxed_rdata[0]`  | `sram_i_rdata[0]`  | `peripheral_rdata[0]`  | `rf_port2_reg[4]` | `gpio_o[12]`      | `p_interrupts[40]` |
| 57    | `dmem_rdata[1]`  | `imem_rdata[1]`  | `sram_d_muxed_rdata[1]`  | `sram_i_rdata[1]`  | `peripheral_rdata[1]`  | `rf_port2_reg[5]` | `gpio_o[13]`      | `p_interrupts[41]` |
| 58    | `dmem_rdata[2]`  | `imem_rdata[2]`  | `sram_d_muxed_rdata[2]`  | `sram_i_rdata[2]`  | `peripheral_rdata[2]`  | `rf_rs2[0]`       | `gpio_o[14]`      | `p_interrupts[42]` |
| ...   | ...                | ...                | ...                        | ...                  | ...                      | ...                 | ...                 | ...                  |
| 67    | `dmem_rdata[11]` | `imem_rdata[11]` | `sram_d_muxed_rdata[11]` | `sram_i_rdata[11]` | `peripheral_rdata[11]` | `rf_rs2[9]`       | `gpio_o[23]`      | `p_interrupts[51]` |
| 68    | `dmem_rdata[12]` | `imem_rdata[12]` | `sram_d_muxed_rdata[12]` | `sram_i_rdata[12]` | `peripheral_rdata[12]` | `rf_rs2[10]`      | `gpio_o[24]`      | `p_i_enable[0]`    |
| ...   | ...                | ...                | ...                        | ...                  | ...                      | ...                 | ...                 | ...                  |
| 81    | `dmem_rdata[25]` | `imem_rdata[25]` | `sram_d_muxed_rdata[25]` | `sram_i_rdata[25]` | `peripheral_rdata[25]` | `rf_rs2[23]`      | `gpio_o[37]`      | `p_i_enable[13]`   |
| 82    | `dmem_rdata[26]` | `imem_rdata[26]` | `sram_d_muxed_rdata[26]` | `sram_i_rdata[26]` | `peripheral_rdata[26]` | `rf_rs2[24]`      | `gpio_oeb_no[5]`  | `p_i_enable[14]`   |
| ...   | ...                | ...                | ...                        | ...                  | ...                      | ...                 | ...                 | ...                  |
| 87    | `dmem_rdata[31]` | `imem_rdata[31]` | `sram_d_muxed_rdata[31]` | `sram_i_rdata[31]` | `peripheral_rdata[31]` | `rf_rs2[29]`      | `gpio_oeb_no[10]` | `p_i_enable[19]`   |
| 88    | `dmem_wdata[0]`  | `imem_wdata[0]`  | `sram_d_muxed_wdata[0]`  | `sram_i_wdata[0]`  | `peripheral_wdata[0]`  | `rf_rs2[30]`      | `gpio_oeb_no[11]` | `p_i_enable[20]`   |
| 89    | `dmem_wdata[1]`  | `imem_wdata[1]`  | `sram_d_muxed_wdata[1]`  | `sram_i_wdata[1]`  | `peripheral_wdata[1]`  | `rf_rs2[31]`      | `gpio_oeb_no[12]` | `p_i_enable[21]`   |
| 90    | `dmem_wdata[2]`  | `imem_wdata[2]`  | `sram_d_muxed_wdata[2]`  | `sram_i_wdata[2]`  | `peripheral_wdata[2]`  | `rf_wr_reg[0]`    | `gpio_oeb_no[13]` | `p_i_enable[22]`   |
| ...   | ...                | ...                | ...                        | ...                  | ...                      | ...                 | ...                 | ...                  |
| 94    | `dmem_wdata[6]`  | `imem_wdata[6]`  | `sram_d_muxed_wdata[6]`  | `sram_i_wdata[6]`  | `peripheral_wdata[6]`  | `rf_wr_reg[5]`    | `gpio_oeb_no[17]` | `p_i_enable[26]`   |
| 95    | `dmem_wdata[7]`  | `imem_wdata[7]`  | `sram_d_muxed_wdata[7]`  | `sram_i_wdata[7]`  | `peripheral_wdata[7]`  | `rf_wr_data[0]`   | `gpio_oeb_no[18]` | `p_i_enable[27]`   |
| ...   | ...                | ...                | ...                        | ...                  | ...                      | ...                 | ...                 | ...                  |
| 114   | `dmem_wdata[26]` | `imem_wdata[26]` | `sram_d_muxed_wdata[26]` | `sram_i_wdata[26]` | `peripheral_wdata[26]` | `rf_wr_data[19]`  | `gpio_oeb_no[37]` | `p_i_enable[46]`   |
| 115   | `dmem_wdata[27]` | `imem_wdata[27]` | `sram_d_muxed_wdata[27]` | `sram_i_wdata[27]` | `peripheral_wdata[27]` | `rf_wr_data[20]`  | `timer_intr`      | `p_i_enable[47]`   |
| 116   | `dmem_wdata[28]` | `imem_wdata[28]` | `sram_d_muxed_wdata[28]` | `sram_i_wdata[28]` | `peripheral_wdata[28]` | `rf_wr_data[21]`  | `m_ext_intr`      | `p_i_enable[48]`   |
| 117   | `dmem_wdata[29]` | `imem_wdata[29]` | `sram_d_muxed_wdata[29]` | `sram_i_wdata[29]` | `peripheral_wdata[29]` | `rf_wr_data[22]`  | `p_int_read`      | `p_i_enable[49]`   |
| 118   | `dmem_wdata[30]` | `imem_wdata[30]` | `sram_d_muxed_wdata[30]` | `sram_i_wdata[30]` | `peripheral_wdata[30]` | `rf_wr_data[23]`  | `csr_busy`        | `p_i_enable[50]`   |
| 119   | `dmem_wdata[31]` | `imem_wdata[31]` | `sram_d_muxed_wdata[31]` | `sram_i_wdata[31]` | `peripheral_wdata[31]` | `rf_wr_data[24]`  | `me_i_en`         | `p_i_enable[51]`   |
| 120   | `miu_illegal`    | `mcause[0]`      | `mcause[8]`              | `mcause[16]`       | `mcause[24]`           | `rf_wr_data[25]`  | -                  | -                   |
| 121   | `sram_illegal`       | `mcause[1]`      | `mcause[9]`              | `mcause[17]`       | `mcause[25]`           | `rf_wr_data[26]`  | -                  | -                   |
| 122   | `flash_illegal`      | `mcause[2]`      | `mcause[10]`             | `mcause[18]`       | `mcause[26]`           | `rf_wr_data[27]`  | -                  | -                   |
| 123   | `caravel_illegal`    | `mcause[3]`      | `mcause[11]`             | `mcause[19]`       | `mcause[27]`           | `rf_wr_data[28]`  | -                  | -                   |
| 124   | `illegal_access`     | `mcause[4]`      | `mcause[12]`             | `mcause[20]`       | `mcause[28]`           | `rf_wr_data[29]`  | -                  | -                   |
| 125   | `mem_err_int`        | `mcause[5]`      | `mcause[13]`             | `mcause[21]`       | `mcause[29]`           | `rf_wr_data[30]`  | -                  | -                   |
| 126   | `boot_sel`           | `mcause[6]`      | `mcause[14]`             | `mcause[22]`       | `mcause[30]`           | `rf_wr_data[31]`  | -                  | -                   |
| 127   | `copy_boot_sel`  | `mcause[7]`      | `mcause[15]`             | `mcause[23]`       | `mcause[31]`           | `rf_wr_en`        | -                  | -                   |

## Pin Descriptions (QFN64 9x9 0.5)

| Pin | Name      | Description                | Voltage min | Voltage nom           | Voltage max |
| --- | --------- | -------------------------- | ----------- | --------------------- | ----------- |
| 1   | vssa2     | Analog Ground              |             | 0                     |             |
| 2   | io25      | IO 25                      | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 3   | io26      | IO 26                      | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 4   | io27      | IO 27                      | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 5   | io28      | IO 28                      | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 6   | io29      | IO 29                      | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 7   | io30      | IO 30                      | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 8   | io31      | IO 31                      | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 9   | vdda2     | Analog Supply Voltage      |             | 3.3                   |             |
| 10  | vssd2     | Digital Ground             |             | 0                     |             |
| 11  | io32      | IO 32                      | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 12  | io33      | IO 33                      | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 13  | io34      | IO 34                      | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 14  | io35      | IO 35                      | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 15  | io36      | IO 36                      | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 16  | io37      | IO 37                      | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 17  | vddio1    | IO Pad Supply Voltage      | 1.8         | 3.3                   | 5           |
| 18  | vccd      | Core Voltage               | 1.62        | 1.8                   | 1.98        |
| 19  | N/C       | No connect                 |             | \-                    |             |
| 20  | vssa      | Analog Ground              |             | 0                     |             |
| 21  | resetb    | Digital Reset (Active Low) | 0           | \> 0.8 \* vddio       | vddio       |
| 22  | clock     | 10 MHz clock               | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 23  | vssd      | Digital Ground             |             | 0                     |             |
| 24  | flash_csb | QSPI_0 Chip Select         | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 25  | flash_clk | QSPI_0 Clock               | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 26  | flash_io0 | QSPI_0 D0                  | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 27  | flash_io1 | QSPI_0 D1                  | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 28  | gpio      | Single pin management GPIO | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 29  | vssio     | IO Pad Ground              |             | 0                     |             |
| 30  | vdda      | Analog Supply Voltage      |             | 3.3                   |             |
| 31  | io0       | JTAG                       | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 32  | io1       | SPI_0_SD0                  | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 33  | io2       | SPI_0_SDI                  | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 34  | io3       | SPI_0_CSB                  | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 35  | io4       | SPI_0_SCK                  | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 36  | io5       | CARP Core Copy Boot Select | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 37  | io6       | CARP Core Boot Select      | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 38  | vssa1     | Analog Ground              |             | 0                     |             |
| 39  | vssd1     | Digital Ground             |             | 0                     |             |
| 40  | vdda1     | Analog Supply Voltage      |             | 3.3                   |             |
| 41  | io7       | CARP Core Hard reset       | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 42  | io8       | QSPI_1 Clock               | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 43  | io9       | QSPI_1 Chip Select         | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 44  | io10      | QSPI_1 D0                  | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 45  | io11      | QSPI_1 D1                  | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 46  | io12      | QSPI_1 D2                  | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 47  | vdda1     | Analog Supply Voltage      |             | 3.3                   |             |
| 48  | io13      | QSPI_1 D3                  | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 49  | vccd1     | Core Voltage               | 1.8         | 3.3                   | 5           |
| 50  | io14      | IO 14                      | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 51  | io15      | IO 15                      | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 52  | vssa1     | Analog Ground              |             | 0                     |             |
| 53  | io16      | IO 16                      | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 54  | io17      | IO 17                      | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 55  | io18      | IO 18                      | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 56  | vssio     | IO Pad Ground              |             | 0                     |             |
| 57  | io19      | IO 19                      | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 58  | io20      | IO 20                      | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 59  | io21      | IO 21                      | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 60  | io22      | IO 22                      | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 61  | io23      | IO 23                      | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 62  | io24      | IO 24                      | 0           | 0.4 or (0.8 \* vddio) | vddio       |
| 63  | vccd2     | Core Voltage               | 1.62        | 1.8                   | 1.98        |
| 64  | vddio2    | IO Pad Supply Voltage      | 1.8         | 3.3                   | 5           |
