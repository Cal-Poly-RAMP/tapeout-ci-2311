`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
// Module Name: alu
// 
// SPDX-License-Identifier: Apache-2.0
//
//////////////////////////////////////////////////////////////////////////////////
`include "defs.svh"

module alu #(
    localparam int Width = 32 
) (
    input alu_op_e op_i,
    input [Width-1:0]  a_i,
    input [Width-1:0]  b_i,
    output logic [Width-1:0] out_o
);
       
    always_comb begin
        unique case (op_i)
            ADD:  out_o = a_i + b_i;
            SUB:  out_o = a_i - b_i;
            OR:   out_o = a_i | b_i;
            AND:  out_o = a_i & b_i;
            XOR:  out_o = a_i ^ b_i;
            SRL:  out_o = a_i >> b_i[4:0];
            SLL:  out_o = a_i << b_i[4:0];
            SRA:  out_o = signed'(a_i) >>> b_i[4:0];
            SLT:  out_o = signed'(a_i) < signed'(b_i) ? 32'd1: '0;
            SLTU: out_o = a_i < b_i ? 32'd1: '0;
            PASS: out_o = a_i;
            default: out_o = '0; 
        endcase
    end
endmodule
