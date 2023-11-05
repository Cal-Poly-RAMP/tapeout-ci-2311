# Cal Poly CARP SoC


# Memory Map

| Address Range | Section |
| :--- | :---:|
| 0x0000_0000<br>0x0000_0FFF | Bootloader |
| 0x0000_1000<br>0x0FFF_FFFF | -- |
| 0x1000_0000<br>0x1000_1FFF | Peripheral Register File |
| 0x1000_1000<br>0x1FFF_FFFF | -- |
| 0x2000_0000<br>0x3FFF_FFFF | 512Mb Flash |
| 0x4000_0000<br>0x7FFF_FFFF | -- |
| 0x8000_0000<br>0x8000_FFFF | SRAM |
| 0x8001_0000<br>0xFFFF_FFFF | -- |

# Memory Interconnects

## OBI Subset

The main memory interconnect used on the SoC is a subset of OpenHW Group's Open Bus Interface (OBI). The subset we are using is the same subset used by OpenHW Groups's RI5CY Core, and its behavior is fully described in the OBI-1 specification. The specific signals are enumerated below:

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

## Wishbone

The caravel wrapper for our SoC uses a whishbone bus. 

# Memory Devices

## Boot ROMs

On boot, the core resets the program counter to an address based on the boot_sel input.

| `boot_sel` | Program Counter Reset Address | Function |
| :---: | :---: | :--- |
| `0` | `0x0000_0000` | Runs the default bootloader from ROM |
| `1` | `0x8000_0000` | Starts execution from the internal SRAM. <br> This assumes that the caravel has loaded a program into the SRAM prior to startup. | 

## XIP Flash Controller

In order to run programs off of an external flash, it is ideal that we use an eXecute In Place (XIP) flash controller. This can be done through software in the bootloader, or through hardware by an XIP flash controller. The XIP controllers we have chosen are read-only, however, so this flash interface is essentialy ROM.

# IO Assignment

Understood, here's the template with only the pin numbers filled in:

## GPIO Pins

There are 38 user-programmable IO pins:

| Pin # | Input Pin | Output Pin | Output Enable | Description |
| --- | --- | --- | --- | --- |
| 0 | reserved | reserved | reserved | reserved |
| 1 | reserved | reserved | reserved | reserved |
| 2 | reserved | reserved | reserved | reserved |
| 3 | reserved | reserved | reserved | reserved |
| 4 | reserved | reserved | reserved | reserved |
| 5 | boot_mode | x | x | 1 = copy 512 words from flash to SRAM and jump to SRAM. 0 = jump to flash. |
| 6 | boot_sel_hard | x | x | Hard select for the bootloader. (see Boot ROMs) |
| 7 | rst_btn_n | x | x | Hard reset input, such as for a reset button (active low) |
| 8 | x | o_qspi_sck | 0 | QSPI clock |
| 9 | x | o_qspi_cs_n | 0 | QSPI chip select (active low) |
| 10 | i_qspi_dat[0] | o_qspi_dat[0] | Determined by `o_qspi_mod` | QSPI data bit 0 |
| 11 | i_qspi_dat[1] | o_qspi_dat[1] | Determined by `o_qspi_mod` | QSPI data bit 1 |
| 12 | i_qspi_dat[2] | o_qspi_dat[2] | Determined by `o_qspi_mod` | QSPI data bit 2 |
| 13 | i_qspi_dat[3] | o_qspi_dat[3] | Determined by `o_qspi_mod` | QSPI data bit 3 |
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

| Pin #'s | Signal Name | Description |
| :---: | :---: | :--- |
| 3:0 | `reset_soft_n` | As long as the value `0xA` is written to this nibble, the user area will reset
| 7:4 | `wishbone_enable` | As long as the value `0xA` is written to this nibble, the data port of the onboard RAM will be given to the wishbone bus. The CARP core will not have access to the RAM. |
| 11:8 | `halt_clock` | As long as a `0xA` is written to this nibble, the clock will be held in its current position (high or low). |
| 14:12 | `la_mux` | Logic Analyzer sample channel MUX select. The channels (see "Sample Channels" below) can be selected between using these bits. |
| 15 | N/C | Not used (update to clock?) |
| 127:16 | Sample Channels | 112 Bit digital sample chennels. These can be selected between using `la_mux`. | 

### Logic Analyzer Sample Channels

| Pin # | CH 0 | CH 1 | CH 2 | CH 3 | CH 4 | CH 5 | CH 6 | CH 7 |
| :--: |:-- |:-- |:-- |:-- |:-- |:-- |:-- |:-- |
| 16 | 
| 17 |