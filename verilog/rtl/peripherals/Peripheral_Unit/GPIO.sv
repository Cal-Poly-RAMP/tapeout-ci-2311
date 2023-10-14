`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Nikita Klimov
// 
// Create Date: 03/19/2023 06:12:16 PM
// Design Name: 
// Module Name: GPIO
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

/*
    Mode:
        00 - Input
        01 - Output
        10 - Bidirectional
        11 - N/A (Input)
    
    IRQPOL:
        0 - GPIO interrupt triggered on negedge
        1 - GPIO interrupt triggered on posedge
*/


module GPIO (CLK, MOD, SEL, IRQEN, IRQPOL, IRQRES, MUX_IN, MUX_OUT, INTR, IN, OUT, OEB);
    input CLK;
    input [1:0] MOD;
    input [1:0] SEL;
    input IRQEN;
    input IRQPOL;
    input IRQRES;
    output [3:0] MUX_IN;
    input [3:0] MUX_OUT;
    output logic INTR = 0;
    input IN;
    output OUT;
    output OEB;
    
    logic irqres_reg1, irqres_reg2;
    logic irqres;
    
    Mux4_1 out_mux (
        .sel(SEL),
        .A(MUX_OUT[0]),
        .B(MUX_OUT[1]),
        .C(MUX_OUT[2]),
        .D(MUX_OUT[3]),
        .MUX_OUT(OUT)
    );
    
    Mux4_1 oeb_mux (
        .sel(MOD),
        .A(1'b0),
        .B(1'b1),
        .C(~OUT),
        .D(1'b0),
        .MUX_OUT(OEB)
    );
    
    DeMux1_4 in_demux (
        .sel(SEL),
        .DEMUX_IN(IN & ~OEB),
        .A(MUX_IN[0]),
        .B(MUX_IN[1]),
        .C(MUX_IN[2]),
        .D(MUX_IN[3])
    );
    
    always_ff @ (posedge CLK) begin
        irqres_reg1 <= IRQRES;
        irqres_reg2 <= irqres_reg1;
    end
    
    assign irqres = irqres_reg1 & ~irqres_reg2;

    logic IN_last = '0;

    always_ff @(posedge CLK) begin
        if (irqres) begin
            INTR <= 1'b0;
        end else if (IRQEN) begin
            if (IRQPOL && IN_last == '0 && IN == '1)
                INTR <= '1; // posedge
            else if (!IRQPOL && IN_last == '1 && IN == '0)
                INTR <= '1; // negedge
        end
        IN_last <= IN;
    end

endmodule
