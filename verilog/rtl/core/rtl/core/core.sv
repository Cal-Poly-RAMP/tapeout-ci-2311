`timescale 1ns/1ps
`include "defs.svh"
`include "pipe_regs.svh"
`include "rvfi.svh"

module core (
    input clk_i,
    input rst_ni,

    // Interrupt Interface
    input               timer_intr_i, 
    input               m_ext_intr_i,
    input [30:0]        mcause_i,
    output              p_int_read_o,
    output              csr_busy_o,
    
    input boot_sel_i,

    // Instruction Memory Interface (RI5CY subset of OBI)
    output logic        imem_req_o,
    input  logic        imem_gnt_i,
    output logic [31:0] imem_addr_o,
    output logic        imem_we_o,
    output logic [3:0]  imem_be_o,
    output logic [31:0] imem_wdata_o,
    input  logic        imem_rvalid_i,
    input  logic [31:0] imem_rdata_i,


    // Register File Interface
    output logic [4:0]  rf_port1_reg_o,
    output logic [4:0]  rf_port2_reg_o,
    output logic        rf_wr_en_o,
    output logic [4:0]  rf_wr_reg_o,
    output logic [31:0] rf_wr_data_o,
    input        [31:0] rf_rs1_i,
    input        [31:0] rf_rs2_i,

`ifdef RVFI
    // RVFI - RISCV-Formal Interface
    output logic        rvfi_valid,
    output logic [63:0] rvfi_order,
    output logic [31:0] rvfi_insn,
    output logic        rvfi_trap,
    output logic        rvfi_halt,
    output logic        rvfi_intr,
    output logic [1:0]  rvfi_mode,
    output logic [1:0]  rvfi_ixl,

    // Register File
    output logic [4:0]  rvfi_rs1_addr,
    output logic [4:0]  rvfi_rs2_addr,
    output logic [31:0] rvfi_rs1_rdata,
    output logic [31:0] rvfi_rs2_rdata,
    output logic [4:0]  rvfi_rd_addr,
    output logic [31:0] rvfi_rd_wdata,

    // Program Counter
    output logic [31:0] rvfi_pc_rdata,
    output logic [31:0] rvfi_pc_wdata,

    // Memory Access
    output logic [31:0] rvfi_mem_addr,
    output logic [3:0]  rvfi_mem_rmask,
    output logic [3:0]  rvfi_mem_wmask,
    output logic [31:0] rvfi_mem_rdata,
    output logic [31:0] rvfi_mem_wdata,
`endif

    // Data Memory Interface (RI5CY subset of OBI)
    output logic        dmem_req_o,
    input  logic        dmem_gnt_i,
    output logic [31:0] dmem_addr_o,
    output logic        dmem_we_o,
    output logic [3:0]  dmem_be_o,
    output logic [31:0] dmem_wdata_o,
    input  logic        dmem_rvalid_i,
    input  logic [31:0] dmem_rdata_i
);
    // Stage States
    fetch_state_t  fetch_state;
    decode_state_t decode_state;
    exec_state_t   exec_state;
    mem_state_t    mem_state;

    // Stage Control
    stage_ctrl_t fetch_ctrl, decode_ctrl, exec_ctrl, mem_ctrl, wb_ctrl;

    // Register Metadata
    reg_meta_t decode_reg_meta, decode_reg_meta_updated, exec_reg_meta, mem_reg_meta;

    // Stage Valid Signals
    logic fetch_valid, decode_valid, exec_valid, mem_valid;

    // Hazard signals
    logic load_use_stall, csr_hold, imem_stall, dmem_stall, branch_taken;

    // Forward Data
    data_fwd_t mem_fwd_data, wb_fwd_data;


    // Fetch Stage
    pc_src_e pc_target_sel, pc_intr_sel;
    logic [31:0] pc_target_addr, pc_intr_addr, pre_intr_pc;
    fetch_stage i_fetch_stage (
`ifdef RVFI 
        .rvfi_o         (rvfi_fetch),
`endif
        .clk_i,
        .rst_ni,

        .boot_sel_i,
        .target_sel_i   (pc_target_sel),
        .target_addr_i  (pc_target_addr),
        .intr_sel_i     (pc_intr_sel),
        .intr_addr_i    (pc_intr_addr),
        .stage_ctrl_i   (fetch_ctrl),
        .branch_desync_i(imem_stall),
        .branch_taken_o (branch_taken),

        .mem_addr_o     (imem_addr_o),

        .valid_o        (fetch_valid),
        .fetch_state_o  (fetch_state),
        .pre_intr_pc_o  (pre_intr_pc)
    );

    // Decode Stage
    decode_stage i_decode_stage (
`ifdef RVFI 
        .rvfi_i         (rvfi_fetch),
        .rvfi_o         (rvfi_decode),
`endif
        .clk_i,
        .rst_ni,

        .valid_i        (fetch_valid),
        .fetch_state_i  (fetch_state),
        .inst_i         (imem_rdata_i),
        .stage_ctrl_i   (decode_ctrl),
        
        .rf_port1_reg_o,
        .rf_port2_reg_o,
        .rf_rs1_i,
        .rf_rs2_i,

        .valid_o        (decode_valid),
        .decode_state_o (decode_state),
        .reg_meta_o     (decode_reg_meta)
    );

    // Execute Stage
    logic [31:0] csr_out;
    logic dmem_rd, dmem_wr;
    exec_stage i_exec_stage(
`ifdef RVFI 
        .rvfi_i             (rvfi_decode),
        .rvfi_o             (rvfi_exec),
`endif
        .clk_i,
        .rst_ni,

        .valid_i            (decode_valid),
        .decode_state_i     (decode_state),
        .reg_meta_i         (decode_reg_meta_updated),

        .csr_read_i         (csr_out),

        .stage_ctrl_i       (exec_ctrl),

        .target_sel_o       (pc_target_sel),
        .target_addr_o      (pc_target_addr),

        .valid_o            (exec_valid),
        .exec_state_o       (exec_state),
        .reg_meta_o         (exec_reg_meta),

        .mem_read_ao        (dmem_rd),
        .mem_write_ao       (dmem_wr),
        .mem_strb_ao        (dmem_be_o),
        .mem_addr_ao        (dmem_addr_o),
        .mem_data_ao        (dmem_wdata_o)
    );

    mem_slice_stage i_mem_slice_stage (
    `ifdef RVFI 
        .rvfi_i             (rvfi_exec),
        .rvfi_o             (rvfi_mem),
    `endif

        .clk_i              (clk_i),
        .rst_ni             (rst_ni),

        .valid_i            (exec_valid),
        .exec_state_i       (exec_state),
        .reg_meta_i         (exec_reg_meta),

        .stage_ctrl_i       (mem_ctrl),
        
        .dmem_rdata_i       (dmem_rdata_i),

        .data_fwd_oa        (mem_fwd_data),

        .valid_o            (mem_valid),
        .mem_state_o        (mem_state),
        .reg_meta_o         (mem_reg_meta)
    );

    // Writeback Stage
    wb_stage i_wb_stage (
        .valid_i            (mem_valid),
        .mem_state_i        (mem_state),
        .reg_meta_i         (mem_reg_meta),
        .stage_ctrl_i       (wb_ctrl),
        .data_fwd_oa        (wb_fwd_data),
        .rf_wr_en_oa        (rf_wr_en_o),
        .rf_wr_reg_oa       (rf_wr_reg_o),
        .rf_wr_data_oa      (rf_wr_data_o)
    );

        // Control and Status Registers
    logic csr_flush;
    csr i_csr (
        .clk_i,
        .rst_ni, 
        .csr_wr_i           (decode_state.csr_wr), 
        .addr_i             (decode_state.csr_addr), 
        .mode_sel_i         (decode_state.csr_mode), 
        .immed_i            (decode_state.csr_immed), 
        .immed_sel_i        (decode_state.csr_immed_sel), 
        .mcause_i,
        .rs1                (decode_reg_meta_updated.rs1_data), 
        .csr_data_o         (csr_out), 
        .timer_intr_i, 
        .m_ext_intr_i, 
        .stall_i            (load_use_stall), 
        .mret_i             (decode_state.csr_mret),
        .pcSource           (pc_target_sel), 
        .next_pc            (pre_intr_pc), 
        .pc_intr_addr,
        .pc_intr_sel,
        .csr_flush_o        (csr_flush),
        .csr_hold_i         (csr_hold),
        .p_int_read_o       (p_int_read_o),
        .csr_busy_o         (csr_busy_o)
    );

    // Forwarding Unit
    fwd_unit i_fwd_unit(
        .ex_stage_i         (mem_fwd_data),
        .mem_stage_i        (wb_fwd_data),
        .dest_meta_i        (decode_reg_meta),

        .load_use_stall_ao  (load_use_stall),
        .dest_meta_o        (decode_reg_meta_updated)
    );

    obi_req_driver i_imem_obi_driver (
        .clk_i,
        .rst_ni,

        .rd_i     ('1),
        .wr_i     ('0),

        .gnt_i    (imem_gnt_i),
        .rvalid_i (imem_rvalid_i),

        .stall_o  (imem_stall),
        .req_o    (imem_req_o)
    );

    obi_req_driver i_dmem_obi_driver (
        .clk_i,
        .rst_ni,

        .rd_i     (dmem_rd),
        .wr_i     (dmem_wr),

        .gnt_i    (dmem_gnt_i),
        .rvalid_i (dmem_rvalid_i),

        .stall_o  (dmem_stall),
        .req_o    (dmem_req_o)
    );


    // Hazard Unit
    hazard_unit i_hazard_unit(
        .clk_i,
        .rst_ni,

        .imem_stall_i       (imem_stall),
        .dmem_stall_i       (dmem_stall),
        .branch_taken_i     (branch_taken),
        .csr_mret_i         (decode_state.csr_mret),
        .csr_flush_i        (csr_flush),
        .load_use_stall_i   (load_use_stall),

        .fetch_ctrl_ao      (fetch_ctrl),
        .decode_ctrl_ao     (decode_ctrl),
        .execute_ctrl_ao    (exec_ctrl),
        .memory_ctrl_ao     (mem_ctrl),
        .writeback_ctrl_ao  (wb_ctrl),

        .csr_hold_o         (csr_hold)
    );

    
    assign imem_we_o    = '0;
    assign imem_be_o    = '0;
    assign imem_wdata_o = '0;

    assign dmem_we_o    = dmem_wr;


`ifdef RVFI
    // will WB do any RVFI edits? probably not, use the rvfi_mem signals
    // TODO: drop _o convention for RVFI signals only?

    rvfi_reg_t rvfi_fetch, rvfi_decode, rvfi_exec, rvfi_mem;
    logic inst_retired;

    assign inst_retired = mem_valid && !wb_ctrl.stall && !wb_ctrl.squash;
    assign rvfi_valid   = inst_retired;
    assign rvfi_mode    = 2'b00;
    assign rvfi_ixl     = 2'b01;

    // rvfi_order increments in order of instruction execution
    always_ff @(posedge clk_i) begin
        if      (!rst_ni)      rvfi_order <= '0;
        else if (inst_retired) rvfi_order <= rvfi_order + 1'b1;
    end

    // Zero rd metadata if retired instruction does not write to rd
    assign rvfi_rd_addr  = mem_reg_meta.rd_used ? rf_wr_reg_o  : '0;
    assign rvfi_rd_wdata = (rvfi_rd_addr != '0) ? rf_wr_data_o : '0;

    assign rvfi_insn      = rvfi_mem.insn;
    assign rvfi_trap      = rvfi_mem.trap;
    assign rvfi_halt      = rvfi_mem.halt;
    assign rvfi_intr      = rvfi_mem.intr;
    assign rvfi_rs1_addr  = rvfi_mem.rs1_addr;
    assign rvfi_rs2_addr  = rvfi_mem.rs2_addr;
    assign rvfi_rs1_rdata = rvfi_mem.rs1_rdata;
    assign rvfi_rs2_rdata = rvfi_mem.rs2_rdata;
    assign rvfi_pc_rdata  = rvfi_mem.pc_rdata;
    assign rvfi_pc_wdata  = rvfi_mem.pc_wdata;
    assign rvfi_mem_addr  = rvfi_mem.mem_addr;
    assign rvfi_mem_rmask = rvfi_mem.mem_rmask;
    assign rvfi_mem_wmask = rvfi_mem.mem_wmask;
    assign rvfi_mem_rdata = rvfi_mem.mem_rdata;
    assign rvfi_mem_wdata = rvfi_mem.mem_wdata;
`endif
endmodule
