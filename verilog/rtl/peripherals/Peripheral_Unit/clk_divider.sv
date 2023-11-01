`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
// Module Name: clk_divider
// Description: Divides the main clock to get derivative slower synchronous clocks
//              published as part of https://github.com/pConst/basic_verilog
//              Konstantin Pavlov, pavlovconst@gmail.com
// 
// SPDX-License-Identifier: CC-BY-SA-4.0
//
//////////////////////////////////////////////////////////////////////////////////


module clk_divider #( parameter
  WIDTH = 32
)(
  input clk,
  input nrst,
  input ena,
  output logic [(WIDTH-1):0] out = '0
);


always_ff @(posedge clk) begin
  if ( ~nrst ) begin
    out[(WIDTH-1):0] <= '0;
  end else if (ena) begin
    out[(WIDTH-1):0] <= out[(WIDTH-1):0] + 1'b1;
  end
end

endmodule
