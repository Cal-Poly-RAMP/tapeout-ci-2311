`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
// Module Name: clk_div_gen
// 
// SPDX-License-Identifier: Apache-2.0
//
//////////////////////////////////////////////////////////////////////////////////

module clk_div_gen (input clk,
		input [15:0] count,
		output logic sclk=0);

   logic [15:0] div_cnt = 0;
   always @ (posedge clk)              
   begin
         if (div_cnt == count) 
         begin 
            sclk <= ~sclk;
            div_cnt <= 0;
         end else
            div_cnt <= div_cnt + 1;  
   end 
endmodule
