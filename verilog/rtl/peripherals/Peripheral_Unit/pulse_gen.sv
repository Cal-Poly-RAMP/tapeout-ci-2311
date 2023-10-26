`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
// Module Name: pulse_gen
// Description: Pulse generator module, ver.2
//              
//              - generates one or many pulses of given width and period
//              - generates constant HIGH, constant LOW, or impulse output
//              - features buffered inputs, so inputs can change continuously during pulse period
//              - generates LOW when idle
//
//              - Pulse period is (cntr_max[]+1) cycles
//              - If you need to generate constant LOW pulses, then CNTR_WIDTH should allow
//                setting cntr_low[]>cntr_max[]
//
// Author: Konstantin Pavlov, pavlovconst@gmail.com
//
// SPDX-License-Identifier: CC-BY-SA-4.0
//
//////////////////////////////////////////////////////////////////////////////////


module pulse_gen #( parameter
  CNTR_WIDTH = 32
)(
  input clk,                          // system clock
  input nrst,                         // negative reset
  input en,                           // enable

  input start,                        // enables new period start
  input [CNTR_WIDTH-1:0] cntr_max,    // counter initilization value, should be > 0
  input [CNTR_WIDTH-1:0] cntr_low,    // transition to LOW counter value

  output logic pulse_out,                   // active HIGH output

  // status outputs
  output logic start_strobe = 1'b0,
  output busy
);

logic [CNTR_WIDTH-1:0] seq_cntr = '0;

logic seq_cntr_0;
assign seq_cntr_0 = (seq_cntr[CNTR_WIDTH-1:0] == '0);

// delayed one cycle
logic seq_cntr_0_d1;
always_ff @(posedge clk) begin
  if( ~nrst) begin
    seq_cntr_0_d1 <= 0;
  end else begin
    if (en)
        seq_cntr_0_d1 <= seq_cntr_0;
  end
end

// first seq_cntr_0 cycle time belongs to pulse period
// second and further seq_cntr_0 cycles are idle
assign busy = ~(seq_cntr_0 && seq_cntr_0_d1);


// buffering cntr_low untill pulse period is over to allow continiously
//  changing inputs
logic [CNTR_WIDTH-1:0] cntr_low_buf = '0;
always_ff @(posedge clk) begin
  if( ~nrst ) begin
    seq_cntr[CNTR_WIDTH-1:0] <= '0;
    cntr_low_buf[CNTR_WIDTH-1:0] <= '0;
    start_strobe <= 1'b0;
  end if (en) begin
    if( seq_cntr_0 ) begin
      // don`t start if cntr_max[] is illegal value
      if( start && (cntr_max[CNTR_WIDTH-1:0]!='0) ) begin
        seq_cntr[CNTR_WIDTH-1:0] <= cntr_max[CNTR_WIDTH-1:0];
        cntr_low_buf[CNTR_WIDTH-1:0] <= cntr_low[CNTR_WIDTH-1:0];
        start_strobe <= 1'b1;
      end else begin
        start_strobe <= 1'b0;
      end
    end else begin
      seq_cntr[CNTR_WIDTH-1:0] <= seq_cntr[CNTR_WIDTH-1:0] - 1'b1;
      start_strobe <= 1'b0;
    end
  end // ~nrst
end

always_comb begin
  if( ~nrst ) begin
    pulse_out = 1'b0;
  end if (en) begin
    // busy condition guarantees LOW output when idle
    if( busy &&
        (seq_cntr[CNTR_WIDTH-1:0] >= cntr_low_buf[CNTR_WIDTH-1:0]) ) begin
      pulse_out = 1'b1;
    end else begin
      pulse_out = 1'b0;
    end
  end // ~nrst
  else
    pulse_out = 1'b0;
end


endmodule
