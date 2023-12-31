`timescale 1ns/1ps
//////////////////////////////////////////////////////////////////////////////////
//
// Module Name: soc
// Description: This is the top level module for the System on Chip, (SoC)
//              created by the Computer Architecture Research Project (CARP) at
//              California Polytechnic State University, San Luis Obispo.
//
//              The SoC contains a 5-stage pipelined RV32I core created by the
//              CARP team and a generous set of peripherals. The SoC was designed
//              to be manufactured as part of the chipIgnite program.
// 
// SPDX-License-Identifier: Apache-2.0
//
//////////////////////////////////////////////////////////////////////////////////

`include "clam-defs.svh"


`ifdef RISCV_FORMAL
    `define RVFI
`endif


module soc (
`ifdef USE_POWER_PINS
    inout vccd1,	// 1.8V supply
    inout vssd1,	// 1 digital ground
`endif
    input logic               clk_i,

    // Caravel Wishbone Interface
    input logic               caravel_wb_clk_i,
    input logic               caravel_wb_rst_i,
    input logic               caravel_wbs_stb_i,
    input logic               caravel_wbs_cyc_i,
    input logic               caravel_wbs_we_i,
    input logic [3:0]         caravel_wbs_sel_i,
    input logic [31:0]        caravel_wbs_dat_i,
    input logic [31:0]        caravel_wbs_adr_i,
    output logic              caravel_wbs_ack_o,
    output logic [31:0]       caravel_wbs_dat_o,

    // Logic Analyzer Signals
    input  logic [127:0]      la_data_i,
    output logic [127:0]      la_data_o,

    // GPIO Pins
    input  logic [37:0]       gpio_i,      // GPIO input pins, if configured as input
    output logic [37:0]       gpio_o,      // GPIO output pins, if configured as output
    output logic [37:0]       gpio_oeb_no, // Drive low to enable output pin

    // Other Caravel Signals
    output logic [2:0]        caravel_interrupt_o
    
    // RVFI
`ifdef RVFI
    ,
    // RVFI - RISCV-Formal Interface
    output logic              rvfi_valid,
    output logic [63:0]       rvfi_order,
    output logic [31:0]       rvfi_insn,
    output logic              rvfi_trap,
    output logic              rvfi_halt,
    output logic              rvfi_intr,
    output logic [1:0]        rvfi_mode,
    output logic [1:0]        rvfi_ixl,

    // Register File
    output logic [4:0]        rvfi_rs1_addr,
    output logic [4:0]        rvfi_rs2_addr,
    output logic [31:0]       rvfi_rs1_rdata,
    output logic [31:0]       rvfi_rs2_rdata,
    output logic [4:0]        rvfi_rd_addr,
    output logic [31:0]       rvfi_rd_wdata,

    // Program Counter
    output logic [31:0]       rvfi_pc_rdata,
    output logic [31:0]       rvfi_pc_wdata,

    // Memory Access      
    output logic [31:0]       rvfi_mem_addr,
    output logic [3:0]        rvfi_mem_rmask,
    output logic [3:0]        rvfi_mem_wmask,
    output logic [31:0]       rvfi_mem_rdata,
    output logic [31:0]       rvfi_mem_wdata
`endif
);

    logic rst_n, rst_hard_n, rst_soft_n;
    logic wishbone_enable;
    logic halt_clock, clk_masked;

    //////////////////////////////
    // Clock Halting and Resets //
    //////////////////////////////

    assign rst_n = rst_hard_n && rst_soft_n;
    
    always_ff @( posedge clk_i ) begin : clock_mask
        if (halt_clock && ~clk_masked)
            clk_masked <= 0;
        else 
            clk_masked <= ~clk_masked;
    end

    ////////////////////////////////
    // OBI Bus Signal Definitions //
    ////////////////////////////////

    // dmem bus
    logic        dmem_req, dmem_gnt, dmem_we, dmem_rvalid;
    logic [31:0] dmem_addr, dmem_wdata, dmem_rdata;
    logic [3:0]  dmem_be;

    // imem bus
    logic        imem_req, imem_gnt, imem_we, imem_rvalid;
    logic [31:0] imem_addr, imem_wdata, imem_rdata;
    logic [3:0]  imem_be;

    // sram_d bus
    logic        sram_d_req, sram_d_gnt, sram_d_we, sram_d_rvalid;
    logic [31:0] sram_d_addr, sram_d_wdata, sram_d_rdata;
    logic [3:0]  sram_d_be;

    // sram_i bus
    logic        sram_i_req, sram_i_gnt, sram_i_we, sram_i_rvalid;
    logic [31:0] sram_i_addr, sram_i_wdata, sram_i_rdata;
    logic [3:0]  sram_i_be;

    // peripheral bus
    logic        peripheral_req, peripheral_gnt, peripheral_we, peripheral_rvalid;
    logic [31:0] peripheral_addr, peripheral_wdata, peripheral_rdata;
    logic [3:0]  peripheral_be;

    // flash bus
    logic        flash_req, flash_gnt, flash_we, flash_rvalid;
    logic [31:0] flash_addr, flash_wdata, flash_rdata;
    logic [3:0]  flash_be;

    // caravel bus
    logic        caravel_req, caravel_gnt, caravel_we, caravel_rvalid;
    logic [31:0] caravel_addr, caravel_wdata, caravel_rdata;
    logic [3:0]  caravel_be;

    // caravel bus
    logic        caravel_fast_req, caravel_fast_gnt, caravel_fast_we, caravel_fast_rvalid;
    logic [31:0] caravel_fast_addr, caravel_fast_wdata, caravel_fast_rdata;
    logic [3:0]  caravel_fast_be;

    // sram_d_muxed bus
    logic        sram_d_muxed_req, sram_d_muxed_gnt, sram_d_muxed_we, sram_d_muxed_rvalid;
    logic [31:0] sram_d_muxed_addr, sram_d_muxed_wdata, sram_d_muxed_rdata;
    logic [3:0]  sram_d_muxed_be;


    //////////
    // Core //
    //////////


    // Register File Signals
    logic [4:0] rf_port1_reg, rf_port2_reg, rf_wr_reg;
    logic [31:0] rf_rs1, rf_rs2, rf_wr_data;
    logic rf_wr_en;
    
    // Interrupt Signals
    logic timer_intr, m_ext_intr, p_int_read, csr_busy;
    logic [31:0] mcause; 

    core i_core(
        .clk_i          (clk_masked),
        .rst_ni         (rst_n),

        // Interrupt Interface
        .timer_intr_i   (timer_intr), 
        .m_ext_intr_i   (m_ext_intr),
        .mcause_i       (mcause[30:0]),
        .p_int_read_o   (p_int_read),
        .csr_busy_o     (csr_busy),
        
        .boot_sel_i     (boot_sel),

        // Instruction Memory Interface
        .imem_gnt_i     (imem_gnt),
        .imem_rdata_i   (imem_rdata),
        .imem_rvalid_i  (imem_rvalid),
        .imem_addr_o    (imem_addr),
        .imem_we_o      (imem_we),
        .imem_req_o     (imem_req),
        .imem_be_o      (imem_be),
        .imem_wdata_o   (imem_wdata),

        // Data Memory Interface
        .dmem_gnt_i     (dmem_gnt),
        .dmem_rdata_i   (dmem_rdata),
        .dmem_rvalid_i  (dmem_rvalid),
        .dmem_addr_o    (dmem_addr),
        .dmem_we_o      (dmem_we),
        .dmem_req_o     (dmem_req),
        .dmem_be_o      (dmem_be),
        .dmem_wdata_o   (dmem_wdata),

        // Register File Interface
        .rf_port1_reg_o (rf_port1_reg),
        .rf_port2_reg_o (rf_port2_reg),
        .rf_wr_en_o     (rf_wr_en),
        .rf_wr_reg_o    (rf_wr_reg),
        .rf_wr_data_o   (rf_wr_data),
        .rf_rs1_i       (rf_rs1),
        .rf_rs2_i       (rf_rs2)

`ifdef RVFI
        ,
        .rvfi_valid     (rvfi_valid),
        .rvfi_order     (rvfi_order),
        .rvfi_insn      (rvfi_insn),
        .rvfi_trap      (rvfi_trap),
        .rvfi_halt      (rvfi_halt),
        .rvfi_intr      (rvfi_intr),
        .rvfi_mode      (rvfi_mode),
        .rvfi_ixl       (rvfi_ixl),

        .rvfi_rs1_addr  (rvfi_rs1_addr),
        .rvfi_rs2_addr  (rvfi_rs2_addr),
        .rvfi_rs1_rdata (rvfi_rs1_rdata),
        .rvfi_rs2_rdata (rvfi_rs2_rdata),
        .rvfi_rd_addr   (rvfi_rd_addr),
        .rvfi_rd_wdata  (rvfi_rd_wdata),

        .rvfi_pc_rdata  (rvfi_pc_rdata),
        .rvfi_pc_wdata  (rvfi_pc_wdata),

        .rvfi_mem_addr  (rvfi_mem_addr),
        .rvfi_mem_rmask (rvfi_mem_rmask),
        .rvfi_mem_wmask (rvfi_mem_wmask),
        .rvfi_mem_rdata (rvfi_mem_rdata),
        .rvfi_mem_wdata (rvfi_mem_wdata)
`endif
    );

    // Register File
    reg_file i_reg_file (
        .clk_i        (clk_masked),

        .read1_i      (rf_port1_reg),
        .read2_i      (rf_port2_reg),

        .wr_reg_i     (rf_wr_reg),
        .wr_data_i    (rf_wr_data),
        .wr_en_i      (rf_wr_en),

        .data1_ao     (rf_rs1),
        .data2_ao     (rf_rs2) );


    ///////////////////////////
    // Memory Interface Unit //
    ///////////////////////////


    logic illegal_access, miu_illegal, sram_illegal, caravel_illegal, flash_illegal;
    boot_sel_e boot_sel;
    logic copy_boot_sel;

    assign illegal_access = miu_illegal || sram_illegal || caravel_illegal || flash_illegal;

    memory_interface_unit i_memory_interface_unit (
        .clk_i              (clk_masked),
        .rst_ni             (rst_n),

        // dmem interface
        .dmem_req_i          (dmem_req),
        .dmem_gnt_o          (dmem_gnt),
        .dmem_addr_i         (dmem_addr),
        .dmem_we_i           (dmem_we),
        .dmem_be_i           (dmem_be),
        .dmem_wdata_i        (dmem_wdata),
        .dmem_rvalid_o       (dmem_rvalid),
        .dmem_rdata_o        (dmem_rdata),

        // imem interface
        .imem_req_i          (imem_req),
        .imem_gnt_o          (imem_gnt),
        .imem_addr_i         (imem_addr),
        .imem_we_i           (imem_we),
        .imem_be_i           (imem_be),
        .imem_wdata_i        (imem_wdata),
        .imem_rvalid_o       (imem_rvalid),
        .imem_rdata_o        (imem_rdata),

        // sram_d interface
        .sram_d_req_o        (sram_d_req),
        .sram_d_gnt_i        (sram_d_gnt),
        .sram_d_addr_o       (sram_d_addr),
        .sram_d_we_o         (sram_d_we),
        .sram_d_be_o         (sram_d_be),
        .sram_d_wdata_o      (sram_d_wdata),
        .sram_d_rvalid_i     (sram_d_rvalid),
        .sram_d_rdata_i      (sram_d_rdata),

        // sram_i interface
        .sram_i_req_o        (sram_i_req),
        .sram_i_gnt_i        (sram_i_gnt),
        .sram_i_addr_o       (sram_i_addr),
        .sram_i_we_o         (sram_i_we),
        .sram_i_be_o         (sram_i_be),
        .sram_i_wdata_o      (sram_i_wdata),
        .sram_i_rvalid_i     (sram_i_rvalid),
        .sram_i_rdata_i      (sram_i_rdata),

        // peripheral interface
        .peripheral_req_o    (peripheral_req),
        .peripheral_gnt_i    (peripheral_gnt),
        .peripheral_addr_o   (peripheral_addr),
        .peripheral_we_o     (peripheral_we),
        .peripheral_be_o     (peripheral_be),
        .peripheral_wdata_o  (peripheral_wdata),
        .peripheral_rvalid_i (peripheral_rvalid),
        .peripheral_rdata_i  (peripheral_rdata),

        // flash interface
        .flash_req_o         (flash_req),
        .flash_gnt_i         (flash_gnt),
        .flash_addr_o        (flash_addr),
        .flash_we_o          (flash_we),
        .flash_be_o          (flash_be),
        .flash_wdata_o       (flash_wdata),
        .flash_rvalid_i      (flash_rvalid),
        .flash_rdata_i       (flash_rdata),

        .copy_flash_i        (copy_boot_sel),
        .illegal_access_o    (miu_illegal)
    );   

    ///////////////////////////////
    // SRAM and Wishbone Adpater //
    ///////////////////////////////


    wb_to_obi i_SRAM_adapter (
        .clk_i     (caravel_wb_clk_i),
        // WishBone Master Ports
        .wb_rst_i  (caravel_wb_rst_i),
        .wbs_stb_i (caravel_wbs_stb_i),
        .wbs_cyc_i (caravel_wbs_cyc_i),
        .wbs_we_i  (caravel_wbs_we_i),
        .wbs_sel_i (caravel_wbs_sel_i),
        .wbs_dat_i (caravel_wbs_dat_i),
        .wbs_adr_i (caravel_wbs_adr_i),
        .wbs_ack_o (caravel_wbs_ack_o),
        .wbs_dat_o (caravel_wbs_dat_o),

        // OBI Slave Ports
        .req_o    (caravel_fast_req),
        .gnt_i    (caravel_fast_gnt),
        .addr_o   (caravel_fast_addr),
        .we_o     (caravel_fast_we),
        .be_o     (caravel_fast_be),
        .wdata_o  (caravel_fast_wdata),
        .rvalid_i (caravel_fast_rvalid),
        .rdata_i  (caravel_fast_rdata)
    );

    obi_cdc_fast_primary i_clock_domain_crossing_obi (
        .rst_ni             (rst_n),

        // Controller (Primary) OBI interface
        .ctrl_clk_i         (caravel_wb_clk_i),
        .ctrl_req_i         (caravel_fast_req),
        .ctrl_gnt_o         (caravel_fast_gnt),
        .ctrl_addr_i        (caravel_fast_addr),
        .ctrl_we_i          (caravel_fast_we),
        .ctrl_be_i          (caravel_fast_be),
        .ctrl_wdata_i       (caravel_fast_wdata),
        .ctrl_rvalid_o      (caravel_fast_rvalid),
        .ctrl_rdata_o       (caravel_fast_rdata),

        // Peripheral (Secondary) OBI interface
        .secondary_clk_i    (clk_masked),
        .secondary_req_o    (caravel_req),
        .secondary_gnt_i    (caravel_gnt && wishbone_enable),
        .secondary_addr_o   (caravel_addr),
        .secondary_we_o     (caravel_we),
        .secondary_be_o     (caravel_be),
        .secondary_wdata_o  (caravel_wdata),
        .secondary_rvalid_i (caravel_rvalid && wishbone_enable),
        .secondary_rdata_i  (caravel_rdata)
    );

    logic [31:0] caravel_addr_updated;
    always_comb
    begin
        if (caravel_addr >= 32'h30000000 && caravel_addr < 32'h80000000)
        begin
            caravel_addr_updated = {4'h8, caravel_addr[27:0]};
        end
        else
        begin
            caravel_addr_updated = caravel_addr;
        end
    end

    obi_mux_2_to_1 i_caravel_obi_mux (
        .clk_i        (clk_masked),
        .rst_ni       (rst_n),

        .pri_req_i    (caravel_req && wishbone_enable),
        .pri_gnt_o    (caravel_gnt),
        .pri_addr_i   (caravel_addr_updated),
        .pri_we_i     (caravel_we),
        .pri_be_i     (caravel_be),
        .pri_wdata_i  (caravel_wdata),
        .pri_rvalid_o (caravel_rvalid),
        .pri_rdata_o  (caravel_rdata),

        .sec_req_i    (sram_d_req),
        .sec_gnt_o    (sram_d_gnt),
        .sec_addr_i   (sram_d_addr),
        .sec_we_i     (sram_d_we),
        .sec_be_i     (sram_d_be),
        .sec_wdata_i  (sram_d_wdata),
        .sec_rvalid_o (sram_d_rvalid),
        .sec_rdata_o  (sram_d_rdata),

        .shr_req_o    (sram_d_muxed_req),
        .shr_gnt_i    (sram_d_muxed_gnt),
        .shr_addr_o   (sram_d_muxed_addr),
        .shr_we_o     (sram_d_muxed_we),
        .shr_be_o     (sram_d_muxed_be),
        .shr_wdata_o  (sram_d_muxed_wdata),
        .shr_rvalid_i (sram_d_muxed_rvalid),
        .shr_rdata_i  (sram_d_muxed_rdata),

        .bad_state_o  (caravel_illegal)
);



    // SRAM Module 
    sram_wrap sram 
    (
    `ifdef USE_POWER_PINS
        .vccd1(vccd1),
        .vssd1(vssd1),
    `endif
        .clk_i          (clk_masked),

        // sram_d OBI interface from muxed output
        .sram_d_req_i   (sram_d_muxed_req),
        .sram_d_gnt_o   (sram_d_muxed_gnt),
        .sram_d_addr_i  (sram_d_muxed_addr),
        .sram_d_we_i    (sram_d_muxed_we),
        .sram_d_be_i    (sram_d_muxed_be),
        .sram_d_wdata_i (sram_d_muxed_wdata),
        .sram_d_rvalid_o(sram_d_muxed_rvalid),
        .sram_d_rdata_o (sram_d_muxed_rdata),
        
        // sram_i OBI interface from and to Mem Interface
        .sram_i_req_i   (sram_i_req),
        .sram_i_gnt_o   (sram_i_gnt),
        .sram_i_addr_i  (sram_i_addr),
        .sram_i_we_i    (sram_i_we),
        .sram_i_be_i    (sram_i_be),
        .sram_i_wdata_i (sram_i_wdata),
        .sram_i_rvalid_o(sram_i_rvalid),
        .sram_i_rdata_o (sram_i_rdata),

        //illegal out
        .illegal_memory_o(sram_illegal)                       
    );

    //////////////////////
    // Flash Controller //
    //////////////////////

    // QSPI Signals
    logic qspi_sck, qspi_cs_n;
    logic [3:0] qspi_dat_out, qspi_dat_in, qspi_oe;

    obi_qspi_controller obi_qspi_controller_inst (
        .clk_i          (clk_masked),
        .rst_ni         (rst_n),

        .obi_req_i      (flash_req),
        .obi_gnt_o      (flash_gnt),
        .obi_addr_i     (flash_addr),
        .obi_we_i       (flash_we),
        .obi_be_i       (flash_be),
        .obi_wdata_i    (flash_wdata),
        .obi_rvalid_o   (flash_rvalid),
        .obi_rdata_o    (flash_rdata),

        .flash_csb_o    (qspi_cs_n),
        .flash_clk_o    (qspi_sck),

        .flash_io0_oe_o (qspi_oe[0]),
        .flash_io1_oe_o (qspi_oe[1]),
        .flash_io2_oe_o (qspi_oe[2]),
        .flash_io3_oe_o (qspi_oe[3]),

        .flash_io0_data_o (qspi_dat_out[0]),
        .flash_io1_data_o (qspi_dat_out[1]),
        .flash_io2_data_o (qspi_dat_out[2]),
        .flash_io3_data_o (qspi_dat_out[3]),

        .flash_io0_data_i (qspi_dat_in[0]),
        .flash_io1_data_i (qspi_dat_in[1]),
        .flash_io2_data_i (qspi_dat_in[2]),
        .flash_io3_data_i (qspi_dat_in[3]),

        .illegal_write_o  (flash_illegal)
    );


    ////////////////////////////////
    // Peripherals and Interrupts //
    ////////////////////////////////

    // Peripheral Unit to Peripheral Interrupt Queue signals
    logic mem_err_int;
    logic me_i_en;
    logic [`SOC_NUM_INTER - 1:0] p_interrupts;
    wire [`SOC_NUM_INTER - 1:0] p_i_enable;
    logic [23:0] periph_gpio_o;
    logic [23:0] periph_gpio_oeb_no;

    // Peripheral Unit
    peripheral_unit i_peripheral_unit (
        //Core interface
	    .clk               (clk_masked),
        .reset_n           (rst_n),
        .peripheral_req    (peripheral_req),
        .peripheral_gnt    (peripheral_gnt),
        .peripheral_we     (peripheral_we),
        .peripheral_rvalid (peripheral_rvalid),
        .peripheral_addr   (peripheral_addr),
        .peripheral_wdata  (peripheral_wdata),
        .peripheral_rdata  (peripheral_rdata),
        .peripheral_be     (peripheral_be),
        .timer_intr        (timer_intr),

        //Memory interface
        .mem_access_err    (illegal_access),

        //Interrupt controller interface
        .mem_err_int       (mem_err_int),
        .me_i_en           (me_i_en),
        .p_interrupts      (p_interrupts),
        .p_i_enable        (p_i_enable),

        //I/O interface
        .io_in             (gpio_i[37:14]),
        .io_out            (periph_gpio_o),
        .io_oeb_no         (periph_gpio_oeb_no)
    );

    peripheral_interrupt_queue #(.NUM_INTER(`SOC_NUM_INTER))
    i_peripheral_interrupt_queue 
    (
        .clk         (clk_masked),
        .reset_n     (rst_n),
        .mem_err_int (mem_err_int),
        .me_i_en     (me_i_en),
        .interrupts  (p_interrupts),
        .i_enable    (p_i_enable),
        .p_int_read  (p_int_read),
        .csr_busy    (csr_busy),
        .p_int       (m_ext_intr),
        .p_mcause    (mcause)
    );


    ////////////////////////
    // IO Pin Assignments //
    ////////////////////////

    always_comb begin : gpio_assignment
        // Default assignments
        gpio_oeb_no = {38{1'b1}};
        gpio_o      = '0;

        // Boot Program Select (1 = copy flash to SRAM, 0 = jump to SRAM)
        copy_boot_sel  = gpio_i[5];
        gpio_oeb_no[5] = '1;

        // Boot Select Pin
        boot_sel       = gpio_i[6] ? BOOT_FAILSAFE : BOOT_NORMAL;
        gpio_oeb_no[6] = '1;

        // Reset pin (active low)
        rst_hard_n     = gpio_i[7];
        gpio_oeb_no[7] = '1;

        // QSPI Pins
        gpio_o[8]          = qspi_cs_n;
        gpio_o[9]          = qspi_sck;
        gpio_o[13:10]      = qspi_dat_out;
        qspi_dat_in        = gpio_i[13:10];
        gpio_oeb_no[9:8]   = 'b00;
        gpio_oeb_no[13:10] = qspi_oe;

        // Peripheral Pins
        gpio_o[37:14]      = periph_gpio_o;
        gpio_oeb_no[37:14] = periph_gpio_oeb_no;
    end


    ////////////////////////////////
    // Logic Analyzer Assignments //
    ////////////////////////////////

    logic [2:0] la_mux;

    always_comb begin : logic_analyzer_assignment
        la_data_o = {128{1'b1}};

        // Control Fields 
        rst_soft_n      = (la_data_i[3:0]  == 4'hA) ? 1'b0 : 1'b1;
        wishbone_enable = (la_data_i[7:4]  == 4'hA) ? 1'b1 : 1'b0;
        halt_clock      = (la_data_i[11:8] == 4'hA) ? 1'b1 : 1'b0;
        la_mux          = la_data_i[14:12];

        // Constant Clock Sample
        la_data_o[15] = clk_masked;

        // Sample Channels
        case (la_mux)
            3'd0: begin 
                // Data OBI port on core
                la_data_o[47:16]  = dmem_addr;
                la_data_o[48]     = dmem_req;
                la_data_o[49]     = dmem_gnt;
                la_data_o[50]     = dmem_we;
                la_data_o[54:51]  = dmem_be;
                la_data_o[55]     = dmem_rvalid;
                la_data_o[87:56]  = dmem_rdata;
                la_data_o[119:88] = dmem_wdata;
                // Illegal Memory Signals
                la_data_o[120]    = miu_illegal;
                la_data_o[121]    = sram_illegal;
                la_data_o[122]    = flash_illegal;
                la_data_o[123]    = caravel_illegal;
                la_data_o[124]    = illegal_access;
                la_data_o[125]    = mem_err_int;
                // Boot Select Signals
                la_data_o[126]    = boot_sel;
                la_data_o[127]    = copy_boot_sel;
            end

            3'd1: begin 
                // Instruction OBI port on core
                la_data_o[47:16]  = imem_addr;
                la_data_o[48]     = imem_req;
                la_data_o[49]     = imem_gnt;
                la_data_o[50]     = imem_we;
                la_data_o[54:51]  = imem_be;
                la_data_o[55]     = imem_rvalid;
                la_data_o[87:56]  = imem_rdata;
                la_data_o[119:88] = imem_wdata;
                // Byte 0 of mcause
                la_data_o[127:120] = mcause[7:0];
            end

            3'd2: begin 
                // Data OBI Port on RAM
                la_data_o[47:16]  = sram_d_muxed_addr;
                la_data_o[48]     = sram_d_muxed_req;
                la_data_o[49]     = sram_d_muxed_gnt;
                la_data_o[50]     = sram_d_muxed_we;
                la_data_o[54:51]  = sram_d_muxed_be;
                la_data_o[55]     = sram_d_muxed_rvalid;
                la_data_o[87:56]  = sram_d_muxed_rdata;
                la_data_o[119:88] = sram_d_muxed_wdata;
                // Byte 1 of mcause
                la_data_o[127:120] = mcause[15:8];
            end

            3'd3: begin 
                // Instruction OBI port on RAM
                la_data_o[47:16]  = sram_i_addr;
                la_data_o[48]     = sram_i_req;
                la_data_o[49]     = sram_i_gnt;
                la_data_o[50]     = sram_i_we;
                la_data_o[54:51]  = sram_i_be;
                la_data_o[55]     = sram_i_rvalid;
                la_data_o[87:56]  = sram_i_rdata;
                la_data_o[119:88] = sram_i_wdata;
                // Byte 2 of mcause
                la_data_o[127:120] = mcause[23:16];
            end

            3'd4: begin 
                // OBI Port on Peripheral Unit
                la_data_o[47:16]  = peripheral_addr;
                la_data_o[48]     = peripheral_req;
                la_data_o[49]     = peripheral_gnt;
                la_data_o[50]     = peripheral_we;
                la_data_o[54:51]  = peripheral_be;
                la_data_o[55]     = peripheral_rvalid;
                la_data_o[87:56]  = peripheral_rdata;
                la_data_o[119:88] = peripheral_wdata;
                // Byte 3 of mcause
                la_data_o[127:120] = mcause[31:24];
            end

            3'd5: begin 
                // Register File Signals
                la_data_o[20:16]  = rf_port1_reg;
                la_data_o[52:21]  = rf_rs1;
                la_data_o[57:53]  = rf_port2_reg;
                la_data_o[89:58]  = rf_rs2;
                la_data_o[94:90]  = rf_wr_reg;
                la_data_o[126:95] = rf_wr_data;
                la_data_o[127]    = rf_wr_en;
            end

            3'd6: begin 
                // GPIO Signals
                la_data_o[48:16]  = gpio_i[37:5];
                la_data_o[81:49]  = gpio_o[37:5];
                la_data_o[114:82] = gpio_oeb_no[37:5];
                la_data_o[115]    = timer_intr;
                la_data_o[116]    = m_ext_intr;
                la_data_o[117]    = p_int_read;
                la_data_o[118]    = csr_busy;
                la_data_o[119]    = me_i_en;
                // 8 bits remaining
            end

            3'd7: begin 
                // Interrupt Signals
                la_data_o[67:16]  = p_interrupts;
                la_data_o[119:68] = p_i_enable;
                // 8 bits remaining
            end

            default: begin
                la_data_o[127:16] = 'b0;
            end
        endcase

    end

    always_comb begin: caravel_interrupt_assignment
        caravel_interrupt_o = ((dmem_addr == `CARAVEL_INTR_ADDR) & dmem_we) ? {1'b0, dmem_wdata[1:0]} : {illegal_access, 2'b0};
    end
    ////////////////////////////////
    // Unused Signal Terminations //
    ////////////////////////////////


`ifdef VERILATOR
    logic [127:0] _unused;
    
    always_comb begin : terminations
        _unused[37:0] = gpio_i;
        _unused = la_data_i;
    end

`endif

endmodule
