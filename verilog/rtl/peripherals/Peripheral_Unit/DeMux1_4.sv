`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01/10/2022 07:32:19 PM
// Design Name: 
// Module Name: Mux4_1
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module DeMux1_4 #(parameter WIDTH = 1)(
    input [1:0] sel,
    input [WIDTH - 1:0] DEMUX_IN,
    output logic [WIDTH - 1:0] A,
    output logic [WIDTH - 1:0] B,
    output logic [WIDTH - 1:0] C,
    output logic [WIDTH - 1:0] D
    );
    always_comb 
    begin 
        case (sel)
            2'b00: begin
                A = DEMUX_IN;
                B = 0;
                C = 0;
                D = 0;
            end
            2'b01: begin
                A = 0;
                B = DEMUX_IN;
                C = 0;
                D = 0;
            end
            2'b10: begin
                A = 0;
                B = 0;
                C = DEMUX_IN;
                D = 0;
            end
            2'b11: begin
                A = 0;
                B = 0;
                C = 0;
                D = DEMUX_IN;
            end
            default: begin
                A = DEMUX_IN;
                B = 0;
                C = 0;
                D = 0;
            end
        endcase 
    end
        
endmodule
