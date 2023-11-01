`timescale 1ns/1ps
//////////////////////////////////////////////////////////////////////////////////
//
// Module Name: fetch_stage
// 
// SPDX-License-Identifier: Apache-2.0
//
//////////////////////////////////////////////////////////////////////////////////
`include "defs.svh"
`include "pipe_regs.svh"
`include "rvfi.svh"

module fetch_stage (

`ifdef RVFI
    output rvfi_reg_t rvfi_o,
`endif

    input clk_i,
    input rst_ni,

    // Branch Controls
    input               boot_sel_i,
    input               target_sel_i,
    input               intr_sel_i,
    input [31:0]        target_addr_i,
    input [31:0]        intr_addr_i,
    input               branch_desync_i,
    output logic        branch_taken_o,

    // Stage Control
    input stage_ctrl_t stage_ctrl_i,

    // Basic Memory Interface (Read-only)
    output logic [31:0] mem_addr_o,
    
    // To Decode
    output logic         valid_o, 
    output fetch_state_t fetch_state_o,

    // To CSR
    output logic [31:0] pre_intr_pc_o
);

    //PC Signals
    logic [31:0] pc_next, pc_out, pc_plus_4, target_saved, target_addr;
    logic branch_ctrl_saved, target_sel_saved, target_sel;
    
    assign pc_plus_4 = pc_out + 4;
    assign target_sel = branch_ctrl_saved ? target_sel_saved : target_sel_i;
    assign target_addr = branch_ctrl_saved ? target_saved : target_addr_i;
    assign branch_taken_o = target_sel || intr_sel_i; // Should intr_sel be included?

    // PC Data MUX
    always_comb begin
        unique case (target_sel)
            PLUS_4:  pre_intr_pc_o = pc_plus_4;
            TARGET:  pre_intr_pc_o = target_addr;
            default: pre_intr_pc_o = pc_plus_4;
        endcase
    end

    // CSR PC MUX
    always_comb begin
        unique case (intr_sel_i)
            PLUS_4:  pc_next = pre_intr_pc_o;
            TARGET:  pc_next = intr_addr_i;
            default: pc_next = pre_intr_pc_o;
        endcase
    end

    // Branch Control Syncronizer
    always_ff @(posedge clk_i) begin
        if (!rst_ni) begin
            target_saved        <= '0;
            target_sel_saved    <= '0;
            branch_ctrl_saved   <= '0;
        end else if (!stage_ctrl_i.stall) begin
            branch_ctrl_saved <= '0;
        end else if (branch_desync_i && !branch_ctrl_saved) begin
            target_saved        <= target_addr_i;
            target_sel_saved    <= target_sel_i;
            branch_ctrl_saved   <= '1;
        end
    end

    prog_cntr i_prog_cntr (
        .clk_i,
        .rst_ni,

        .boot_sel_i,
        .stall_i    (stage_ctrl_i.stall),
        .next_pc_i  (pc_next),

        .pc_o       (pc_out)
    );

    // Memory Interface
    assign mem_addr_o = pc_out;
    

    /////////////////
    // Fetch State //
    /////////////////
    always_ff @(posedge clk_i) begin
        if (!rst_ni) begin
            valid_o                 <= '0;
            fetch_state_o.pc        <= '0;
            fetch_state_o.next_pc   <= '0;
        end else if (!stage_ctrl_i.stall) begin
            valid_o                 <= ~stage_ctrl_i.squash;
            fetch_state_o.pc        <= pc_out;
            fetch_state_o.next_pc   <= pc_plus_4;
        end
    end

`ifdef RVFI
    // rvfi_intr support:
    // Register when next PC is an interrupt vector, 
    // Next PC is MTVEC  --> dff --> dff --> rvfi_o.intr
    always_ff @(posedge clk_i) begin
        if (!rst_ni) begin
            rvfi_o <= '0;
        end else if (!stage_ctrl_i.stall) begin
            rvfi_o.pc_rdata <= pc_out;
            rvfi_o.pc_wdata <= pc_next;
            rvfi_o.intr     <= '0; // TODO: interrupts
        end
    end
`endif

endmodule
