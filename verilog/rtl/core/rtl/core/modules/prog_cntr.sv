`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
// Module Name: prog_cntr
// Description: A program counter for use in a pipelined CPU. On reset, the PC is
//              pointed to an address, which can be configurarable base on a 
//              boot_sel_i pin if desired. During normal operation, the PC loads
//              in the next target every rising clock edge. On stalls, however,
//              the PC outputs the last PC value from before the stall, which
//              prevents instructions from being skipped.
//
//    prog_cntr i_prog_cntr (
//                .clk_i      ( ),
//                .rst_ni     ( ),
//                .boot_sel_i ( ),
//                .stall_i    ( ),
//                .next_pc_i  ( ),
//                .pc_o       ( ) );
// 
// SPDX-License-Identifier: Apache-2.0
//
//////////////////////////////////////////////////////////////////////////////////

module prog_cntr (
    input               clk_i,      
    input               rst_ni,    
    input               boot_sel_i, // 1=Failsafe, 0=Normal Bootloader
    input               stall_i,    // Stall siganl for fetch stage
    input [31:0]        next_pc_i,  // Next PC target (jump or next instruction)

    output logic [31:0] pc_o        // PC output
);

    /////////////////////////////
    // Reset Address Selection //
    /////////////////////////////

    localparam BOOTLOADER_ADDR = 32'h00000000;
    localparam FAILSAFE_ADDR   = 32'h80000000;

    logic [31:0] reset_addr;

    assign reset_addr = boot_sel_i ? FAILSAFE_ADDR : BOOTLOADER_ADDR;

    //////////////////////////////////
    // Last PC and PC out registers //
    //////////////////////////////////

    logic [31:0] last_pc, pc_raw;

    always_ff @(posedge clk_i) begin
        if (!rst_ni) begin
            last_pc <= reset_addr;
            pc_raw <= reset_addr;
        end else if (!stall_i) begin
            // Normal operation: update PC and record last PC
            last_pc <= pc_raw; 
            pc_raw <= next_pc_i;
        end
    end

    assign pc_o = stall_i ? last_pc : pc_raw;

endmodule
