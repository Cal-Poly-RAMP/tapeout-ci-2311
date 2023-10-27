`timescale 1ns/1ps
//////////////////////////////////////////////////////////////////////////////////
//
// Module Name: soc
// Description: This is the top level module for the CLAM System On Chip, (SoC)
//              created by the Computer Architecture Research Project (CARP) at
//              California Polytechnic State University, San Luis Obispo.
//
//              The SoC contains a 5-stage pipelined RV32I core created by the
//              CARP team and a generous set of peripherals. The SoC was designed
//              to be manufactured as part of the chipIgnite program.
// 
//////////////////////////////////////////////////////////////////////////////////

`include "clam-defs.svh"


// TODO: Add RVFI or riscv_formal macros import
`ifdef RISCV_FORMAL
    `define RVFI
`endif


module soc_sram  #(parameter ADDR_WIDTH=16)(
    input logic               clk_i,
    input logic               rst_ni,

    // Boot Selection Inputs From Caravel or Pins
    input boot_sel_e          boot_sel_soft_i, // From Caravel
    input logic               boot_sel_src_i,  // 1 = caravel, 0 = pins

    // Caravel Wishbone Interface
    input logic               sram_mux_sel_i,  // 1 = caravel, 0 = sram_d
    // input logic               caravel_wb_clk_i,
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
    input  logic [127:0]      la_oe_no,    // Logic analyzer output enable selection pins

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


    ////////////////////////////////
    // OBI Bus Signal Definitions //
    ////////////////////////////////


    /* verilator lint_off UNDRIVEN */
    /* verilator lint_off UNUSEDSIGNAL */

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

    // sram_d_muxed bus
    logic        sram_d_muxed_req, sram_d_muxed_gnt, sram_d_muxed_we, sram_d_muxed_rvalid;
    logic [31:0] sram_d_muxed_addr, sram_d_muxed_wdata, sram_d_muxed_rdata;
    logic [3:0]  sram_d_muxed_be;

    /* verilator lint_on UNDRIVEN */
    /* verilator lint_on UNUSEDSIGNAL */


    //////////
    // Core //
    //////////


    // Register File Signals
    logic [4:0] rf_port1_reg, rf_port2_reg, rf_wr_reg;
    logic [31:0] rf_rs1, rf_rs2, rf_wr_data;
    logic rf_wr_en;
    
    // Interrupt Signals
    logic timer_intr, m_ext_intr, p_int_read, csr_busy;
    logic [30:0] mcause; 

    core i_core(
        .clk_i,
        .rst_ni,

        // Interrupt Interface
        .timer_intr_i   (timer_intr), 
        .m_ext_intr_i   (m_ext_intr),
        .mcause_i       (mcause),
        .p_int_read_o   (p_int_read),
        .csr_busy_o     (csr_busy),
        
        .boot_sel_i     (0),

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
        .clk_i,

        .read1_i      (rf_port1_reg),
        .read2_i      (rf_port2_reg),

        .wr_reg_i     (rf_wr_reg),
        .wr_data_i    (rf_wr_data),
        .wr_en_i      (rf_wr_en),

        .data1_ao     (rf_rs1),
        .data2_ao     (rf_rs2) );


    // SRAM Module 
    // ... 
    logic [31:0] dmem_rdata_1, dmem_rdata_2;
    logic dmem_rvalid_1;
    logic is_sram_wrap, is_sram_wrap_prev;

    logic [7:0] unused;
    logic [3:0][31:0] unused2;

    assign is_sram_wrap = (dmem_addr >= 32'h8000_0000 && dmem_addr <= 32'h800C_0000);
    always_ff @ (posedge clk_i)
    begin
        is_sram_wrap_prev <= is_sram_wrap;
    end
    assign dmem_rdata = (is_sram_wrap_prev == 1) ? dmem_rdata_1 : dmem_rdata_2;

    assign imem_gnt = 1;
    assign dmem_rvalid =  1;
    sram_wrap sram 
(
    .clk_i,
    .rst_ni,

    // sram_d OBI interface from muxed output
    .sram_d_req_i   (dmem_req && is_sram_wrap),
    .sram_d_gnt_o   (dmem_gnt),
    .sram_d_addr_i  (dmem_addr),
    .sram_d_we_i    (dmem_we),
    .sram_d_be_i    (dmem_be),
    .sram_d_wdata_i (dmem_wdata),
    .sram_d_rvalid_o(dmem_rvalid_1),
    .sram_d_rdata_o (dmem_rdata_1),
    
    // sram_i OBI interface from and to Mem Interface
    .sram_i_req_i   (0),
    .sram_i_gnt_o   (unused[0]),
    .sram_i_addr_i  (0),
    .sram_i_we_i    (0),
    .sram_i_be_i    (0),
    .sram_i_wdata_i (0),
    .sram_i_rvalid_o(unused[6]),
    .sram_i_rdata_o (unused2[0]),

    //illegal out
    .illegal_memory_o(unused[2])                       
);

    test_memory #( .NUM_COL(4), .COL_WIDTH(8), .ADDR_WIDTH(ADDR_WIDTH), .DATA_WIDTH(32)
    ) i_memory (
        .clk_i,
        .pA_en_i     (!is_sram_wrap),
        .pA_strobe_i (dmem_be),
        .pA_addr_i   (dmem_addr[ADDR_WIDTH+1:2]),
        .pA_data_i   (dmem_wdata),
        .pA_data_o   (dmem_rdata_2),
        .pB_en_i     ('1),
        .pB_strobe_i ('0),
        .pB_addr_i   (imem_addr[ADDR_WIDTH+1:2]),
        .pB_data_i   ('0),
        .pB_data_o   (imem_rdata)
    );
    assign imem_gnt = 1;
    assign imem_rvalid = 1;



`ifdef VERILATOR
    logic [127:0] _unused;
    
    always_comb begin : terminations
    end

`endif

endmodule
