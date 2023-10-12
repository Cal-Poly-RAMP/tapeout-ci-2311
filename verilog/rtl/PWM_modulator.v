module PWM_modulator (
	clk,
	nrst,
	en,
	wr_en,
	wr_pwm_period_div,
	wr_mod_setpoint,
	pwm_period_div,
	mod_setpoint,
	pwm_out,
	start_strobe,
	busy
);
	parameter CLK_HZ = 100000000;
	parameter MOD_WIDTH = 8;
	input clk;
	input nrst;
	input en;
	input wr_en;
	input wr_pwm_period_div;
	input wr_mod_setpoint;
	input [7:0] pwm_period_div;
	input [MOD_WIDTH - 1:0] mod_setpoint;
	output wire pwm_out;
	output wire start_strobe;
	output wire busy;
	reg [7:0] pwm_period_div_r = 0;
	reg [MOD_WIDTH - 1:0] mod_setpoint_r = 0;
	reg en_r;
	reg wr_en_r1 = 0;
	reg wr_en_r2 = 0;
	wire wr_en_r;
	reg wr_pwm_period_div_r1 = 0;
	reg wr_pwm_period_div_r2 = 0;
	wire wr_pwm_period_div_r;
	reg wr_mod_setpoint_r1 = 0;
	reg wr_mod_setpoint_r2 = 0;
	wire wr_mod_setpoint_r;
	assign wr_en_r = wr_en_r1 & ~wr_en_r2;
	assign wr_pwm_period_div_r = wr_pwm_period_div_r1 & ~wr_pwm_period_div_r2;
	assign wr_mod_setpoint_r = wr_mod_setpoint_r1 & ~wr_mod_setpoint_r2;
	wire [31:0] div_clk;
	clk_divider #(.WIDTH(32)) cd1(
		.clk(clk),
		.nrst(nrst),
		.ena(1'b1),
		.out(div_clk[31:0])
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
	wire [MOD_WIDTH - 1:0] mod_setpoint_inv;
	assign mod_setpoint_inv[MOD_WIDTH - 1:0] = {MOD_WIDTH {1'b1}} - mod_setpoint_r[MOD_WIDTH - 1:0];
	pulse_gen #(.CNTR_WIDTH(MOD_WIDTH + 1)) pg1(
		.clk(div_clk[(pwm_period_div_r - 1) - MOD_WIDTH]),
		.nrst(nrst),
		.en(en_r),
		.start(1'b1),
		.cntr_max({1'b0, {MOD_WIDTH {1'b1}}}),
		.cntr_low({1'b0, mod_setpoint_inv[MOD_WIDTH - 1:0]}),
		.pulse_out(pwm_out),
		.start_strobe(start_strobe),
		.busy(busy)
	);
endmodule
