`timescale 1ns / 1ps

//------------------------------------------------------------------------------
// pwm_modulator.sv
// Konstantin Pavlov, pavlovconst@gmail.com
//------------------------------------------------------------------------------

// INFO ------------------------------------------------------------------------
// Pulse width modulation (PWM) generator module
//
// - expecting 8-bit control signal input by default
// - system clock is 100 MHz by default
// - PWM clock is 1.5KHz by default
//
// - see also pdm_modulator.sv for pulse density modulation generator


/* --- INSTANTIATION TEMPLATE BEGIN ---
pwm_modulator #(
  .MOD_WIDTH( 8 )                    // from 0 to 255
) pwm1 (
  .clk( clk ),
  .nrst( nrst ),
  .en( en ),
  .pwm_period_div( pwm_period_div ),
  .control(  ),
  .pwm_out(  ),
  .start_strobe(  ),
  .busy(  )
);
--- INSTANTIATION TEMPLATE END ---*/

module PWM_modulator #( parameter
  MOD_WIDTH = 8                       // modulation bitness
)(
  input clk,                          // system clock
  input nrst,                         // negative reset
  input en,                           // enable
  input wr_en,
  input wr_pwm_period_div,
  input wr_mod_setpoint,
  input [7:0] pwm_period_div,         // clock divider for pulse gen (must be > MOD_WIDTH)
  input [MOD_WIDTH-1:0] mod_setpoint, // modulation setpoint
  output pwm_out,                     // active HIGH output

  // status outputs
  output start_strobe,                // period start strobe
  output busy                         // busy output
);

//PWM_PERIOD_HZ = CLK_HZ / (2**pwm_period_div),
logic [7:0] pwm_period_div_r = 0;
logic [MOD_WIDTH-1:0] mod_setpoint_r = 0;
logic en_r;
logic wr_en_r1 = 0, wr_en_r2 = 0, wr_en_r;
logic wr_pwm_period_div_r1 = 0, wr_pwm_period_div_r2 = 0, wr_pwm_period_div_r;
logic wr_mod_setpoint_r1 = 0, wr_mod_setpoint_r2 = 0, wr_mod_setpoint_r;

assign wr_en_r = wr_en_r1 & ~wr_en_r2;
assign wr_pwm_period_div_r = wr_pwm_period_div_r1 & ~wr_pwm_period_div_r2;
assign wr_mod_setpoint_r = wr_mod_setpoint_r1 & ~wr_mod_setpoint_r2;

// period generator
logic [31:0] div_clk;
clk_divider #(
  .WIDTH( 32 )
) cd1 (
  .clk( clk ),
  .nrst( nrst ),
  .ena( 1'b1 ),
  .out( div_clk[31:0] )
);

always @(posedge clk) begin
    wr_en_r1 <= wr_en;
    wr_en_r2 <= wr_en_r1;
    wr_pwm_period_div_r1 <= wr_pwm_period_div;
    wr_pwm_period_div_r2 <= wr_pwm_period_div_r1;
    wr_mod_setpoint_r1 <= wr_mod_setpoint;
    wr_mod_setpoint_r2 <= wr_mod_setpoint_r1;
    if (wr_en_r)
        en_r <= en;
    if (wr_pwm_period_div_r)
        pwm_period_div_r <= pwm_period_div;
    if (wr_mod_setpoint_r)
        mod_setpoint_r <= mod_setpoint;
end

// optional setpoint inversion
logic [MOD_WIDTH-1:0] mod_setpoint_inv;
assign mod_setpoint_inv[MOD_WIDTH-1:0] = {MOD_WIDTH{1'b1}} - mod_setpoint_r[MOD_WIDTH-1:0];


// pulse generator
pulse_gen #(
  .CNTR_WIDTH( MOD_WIDTH+1 )
) pg1 (
  .clk( div_clk[(pwm_period_div_r-1)-MOD_WIDTH] ),
  .nrst( nrst ),
  .en( en_r ),

  .start( 1'b1 ),
  .cntr_max( {1'b0, {MOD_WIDTH{1'b1}} } ),
  .cntr_low( {1'b0, mod_setpoint_inv[MOD_WIDTH-1:0] } ),

  .pulse_out( pwm_out ),

  .start_strobe( start_strobe ),
  .busy( busy )
);


endmodule
