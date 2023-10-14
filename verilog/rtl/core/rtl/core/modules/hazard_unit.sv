`timescale 1ns/1ps
//////////////////////////////////////////////////////////////////////////////////
//
// Module Name: hazard_unit
// Description: The hazard unit accepts relevant inputs from throughout the
//              pipeline and outputs the stall and squash signals to each
//              stage. The meaning of these signals is defined below.
//              Additionally, the hazard unit tells the CSR to hold while the 
//              pipeline is flushed during an interrupt, and controls imem_req_o.
//
//              STALL:  The stage's state register at its output shall not latch
//                      in any new data as long as the stall signal is asserted.
//
//              SQUASH: The stage shall have all mutator signals (signals that
//                      affect the state of the processor) disabled, and the 
//                      instruction shall be flagged as invalid.
//
//  hazard_unit i_hazard_unit(
//                .clk_i,             (),
//                .rst_ni,            (),
//
//                .imem_gnt_i,        (),
//                .imem_rvalid_i,     (),
//                .dmem_gnt_i,        (),
//                .dmem_rvalid_i      (),
//                .dmem_expected_i    (),
//                .branch_taken_i           (),
//                .csr_flush_i        (),
//                .load_use_stall_i   (),
//
//                .fetch_ctrl_ao      (),
//                .decode_ctrl_ao     (),
//                .execute_ctrl_ao    (),
//                .memory_ctrl_ao     (),
//                .writeback_ctrl_ao  (),
//                .csr_hold_o         (),
//                .imem_req_o );
// 
//////////////////////////////////////////////////////////////////////////////////

`include "pipe_regs.sv"

module hazard_unit (
            input               clk_i,
            input               rst_ni,

            // Hazard signals
            input               imem_stall_i,
            input               dmem_stall_i,
            input pc_src_e      branch_taken_i,
            input               csr_flush_i,
            input               csr_mret_i,
            input               load_use_stall_i,

            // Stage Controls
            output stage_ctrl_t fetch_ctrl_ao,
            output stage_ctrl_t decode_ctrl_ao,
            output stage_ctrl_t execute_ctrl_ao,
            output stage_ctrl_t memory_ctrl_ao,
            output stage_ctrl_t writeback_ctrl_ao,
            // CSR Hold output
            output logic        csr_hold_o
);
    //////////////////////////
    // Intermediate Signals //
    //////////////////////////

    logic flush_in_progess, branch;

    assign branch = (branch_taken_i != PLUS_4 || csr_mret_i);

    ///////////////////////
    // Output Assignment //
    ///////////////////////

    assign fetch_ctrl_ao.squash = branch || flush_in_progess;
    assign fetch_ctrl_ao.stall = imem_stall_i || dmem_stall_i || load_use_stall_i;

    assign decode_ctrl_ao.squash = imem_stall_i || branch;
    assign decode_ctrl_ao.stall = dmem_stall_i || load_use_stall_i;

    assign execute_ctrl_ao.squash = load_use_stall_i;
    assign execute_ctrl_ao.stall = dmem_stall_i;

    assign memory_ctrl_ao.squash = '0;
    assign memory_ctrl_ao.stall = dmem_stall_i;

    assign writeback_ctrl_ao.squash = '0;
    assign writeback_ctrl_ao.stall = dmem_stall_i;

    assign csr_hold_o = flush_in_progess;

    ///////////////////
    // CSR Flush FSM //
    ///////////////////

    logic [2:0] PS, NS;

    // When an interrupt is received, flush for 3 cycles
    always_comb begin : NS_decoder
        NS = '0;
        if (!rst_ni) 
            NS = '0;
        else if (csr_flush_i) 
            NS[1] = '1;
        else
            NS = PS << 1;
    end

    always_ff @(posedge clk_i) begin : PS_reg
        if (!rst_ni)
            PS <= '0;
        else
            PS <= NS;
    end

    always_comb begin : output_decoder
        flush_in_progess = (csr_flush_i || PS != 0);
    end

endmodule // hazard_unit
