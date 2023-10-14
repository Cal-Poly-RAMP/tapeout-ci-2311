`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:  
// Engineer: Nikita Klimov
// 
// Design Name: 
// Module Name: Stepper_Driver
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

module Stepper_Driver (input step, 
               input dir,
               input bypass,        //0 - regular operation, 1 - A_P is dir, B_P is step
               output A_P,
               output A_M,
               output B_P,
               output B_M);
  
  logic [1:0] state = 0;
  
  assign A_P = bypass ? dir : ~state[1];
  assign B_P = bypass ? step : (~state[1] && state[0]) || (state[1] && ~state[0]);

  assign A_M = bypass ? 0 : ~A_P;
  assign B_M = bypass ? 0 : ~B_P;

  always @(posedge step) begin
    state <= state + (dir ? 1 : -1);
  end
  
endmodule
