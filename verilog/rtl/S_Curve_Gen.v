module S_Curve_Gen (
	clk_i,
	reset_n,
	estop_i,
	swstop_i,
	zero,
	done,
	busy,
	wr_cr,
	wr_start,
	wr_stop,
	wr_total_steps,
	wr_jerk,
	wr_c_jerk_dur,
	wr_c_accel_dur,
	wr_raddr,
	clk_div_i,
	start_i,
	dir_i,
	bypass_i,
	total_steps_i,
	jerk_i,
	c_jerk_dur_i,
	c_accel_dur_i,
	raddr_i,
	rdata,
	drv_bypass,
	drv_dir,
	drv_step
);
	parameter PULSE_WIDTH_COUNT = 1;
	parameter HAS_ENABLE_ZERO = 0;
	parameter DUAL_ZERO = 0;
	parameter SPD_SHIFT = 24;
	parameter JERK_WIDTH = 32;
	parameter ACC_WIDTH = 47;
	parameter SPD_WIDTH = 47;
	parameter STEP_WIDTH = 22;
	parameter STEP_THRESH = 'h200000;
	input clk_i;
	input reset_n;
	input estop_i;
	input swstop_i;
	input [DUAL_ZERO:0] zero;
	output reg done = 0;
	output reg busy = 0;
	input wr_cr;
	input wr_start;
	input wr_stop;
	input wr_total_steps;
	input wr_jerk;
	input wr_c_jerk_dur;
	input wr_c_accel_dur;
	input wr_raddr;
	input [15:0] clk_div_i;
	input start_i;
	input dir_i;
	input bypass_i;
	input [31:0] total_steps_i;
	input [31:0] jerk_i;
	input [31:0] c_jerk_dur_i;
	input [31:0] c_accel_dur_i;
	input [3:0] raddr_i;
	output reg [31:0] rdata = 0;
	output reg drv_bypass = 0;
	output reg drv_dir = 0;
	output reg drv_step = 0;
	wire clk;
	reg [15:0] clk_div = 16'd2;
	reg zero_clear = 0;
	reg zero_stop = 0;
	reg do_move = 0;
	reg stop = 0;
	reg did_last_step = 0;
	wire zero_sel;
	reg dir;
	reg bypass;
	reg start = 0;
	reg estop = 0;
	reg swstop = 0;
	reg [31:0] total_steps;
	reg [31:0] jerk;
	reg [31:0] c_jerk_dur;
	reg [31:0] c_accel_dur;
	reg [3:0] raddr;
	reg [31:0] steps_left = 0;
	generate
		if (DUAL_ZERO) begin : g_zsel
			assign zero_sel = (dir ^ zero_clear ? zero[0] : zero[1]);
		end
		else begin : g_zsel
			assign zero_sel = zero[0];
		end
		if (HAS_ENABLE_ZERO) begin : stops
			always @(posedge clk) stop <= (((~reset_n | estop) | swstop) | did_last_step) | (zero_stop & (zero_sel ^ zero_clear));
		end
		else begin : stops
			always @(posedge clk) stop <= (((~reset_n | estop) | swstop) | did_last_step) | (dir ? ~zero_sel & zero_clear : zero_sel);
		end
	endgenerate
	reg wr_cr_r1 = 0;
	reg wr_cr_r2 = 0;
	wire wr_cr_r;
	reg wr_start_r1 = 0;
	reg wr_start_r2 = 0;
	wire wr_start_r;
	reg wr_stop_r1 = 0;
	reg wr_stop_r2 = 0;
	wire wr_stop_r;
	reg wr_total_steps_r1 = 0;
	reg wr_total_steps_r2 = 0;
	wire wr_total_steps_r;
	reg wr_jerk_r1 = 0;
	reg wr_jerk_r2 = 0;
	wire wr_jerk_r;
	reg wr_c_jerk_dur_r1 = 0;
	reg wr_c_jerk_dur_r2 = 0;
	wire wr_c_jerk_dur_r;
	reg wr_c_accel_dur_r1 = 0;
	reg wr_c_accel_dur_r2 = 0;
	wire wr_c_accel_dur_r;
	reg wr_raddr_r1 = 0;
	reg wr_raddr_r2 = 0;
	wire wr_raddr_r;
	reg [ACC_WIDTH - 1:0] cur_accel = 0;
	reg [SPD_WIDTH - 1:0] cur_speed = 0;
	wire steps_done = ~|steps_left;
	reg [31:0] phase_count = 0;
	wire phase_done;
	reg move_done = 0;
	wire [32:0] coast_steps_needed = {steps_left, 1'b1} - {1'b0, total_steps};
	wire [31:0] coast_steps = {32 {~coast_steps_needed[32]}} & coast_steps_needed[31:0];
	reg motor_stopped = 0;
	wire [STEP_WIDTH - 1:0] step_thresh = STEP_THRESH;
	wire [STEP_WIDTH - 1:0] full_step_thresh = step_thresh[STEP_WIDTH - 1:0];
	wire [STEP_WIDTH - 1:0] half_step_thresh = {1'b0, step_thresh[STEP_WIDTH - 1:1]};
	reg [STEP_WIDTH - 1:0] step_accum = 0;
	wire do_step = ((step_accum >= full_step_thresh) & ~stop) & ~steps_done;
	assign phase_done = ~|phase_count;
	assign wr_cr_r = wr_cr_r1 & ~wr_cr_r2;
	assign wr_start_r = wr_start_r1 & ~wr_start_r2;
	assign wr_stop_r = wr_stop_r1 & ~wr_stop_r2;
	assign wr_total_steps_r = wr_total_steps_r1 & ~wr_total_steps_r2;
	assign wr_jerk_r = wr_jerk_r1 & ~wr_jerk_r2;
	assign wr_c_jerk_dur_r = wr_c_jerk_dur_r1 & ~wr_c_jerk_dur_r2;
	assign wr_c_accel_dur_r = wr_c_accel_dur_r1 & ~wr_c_accel_dur_r2;
	assign wr_raddr_r = wr_raddr_r1 & ~wr_raddr_r2;
	always @(posedge clk_i) begin
		wr_cr_r1 <= wr_cr;
		wr_cr_r2 <= wr_cr_r1;
		wr_start_r1 <= wr_start;
		wr_start_r2 <= wr_start_r1;
		wr_stop_r1 <= wr_stop;
		wr_stop_r2 <= wr_stop_r1;
		wr_total_steps_r1 <= wr_total_steps;
		wr_total_steps_r2 <= wr_total_steps_r1;
		wr_jerk_r1 <= wr_jerk;
		wr_jerk_r2 <= wr_jerk_r1;
		wr_c_jerk_dur_r1 <= wr_c_jerk_dur;
		wr_c_jerk_dur_r2 <= wr_c_jerk_dur_r1;
		wr_c_accel_dur_r1 <= wr_c_accel_dur;
		wr_c_accel_dur_r2 <= wr_c_accel_dur_r1;
		wr_raddr_r1 <= wr_raddr;
		wr_raddr_r2 <= wr_raddr_r1;
		if (wr_cr_r) begin
			clk_div <= (clk_div_i >= 2 ? clk_div_i : 16'd2);
			dir <= dir_i;
			bypass <= bypass_i;
		end
		if (wr_start_r)
			start <= start_i;
		if (wr_stop_r) begin
			estop <= estop_i;
			swstop <= swstop_i;
		end
		if (wr_total_steps_r)
			total_steps <= total_steps_i;
		if (wr_jerk_r)
			jerk <= jerk_i;
		if (wr_c_jerk_dur_r)
			c_jerk_dur <= c_jerk_dur_i;
		if (wr_c_accel_dur_r)
			c_accel_dur <= c_accel_dur_i;
		if (wr_raddr_r)
			raddr <= raddr_i;
	end
	clk_div_gen op_clk(
		.clk(clk_i),
		.sclk(clk),
		.count((clk_div >> 1) - 1)
	);
	localparam st_Idle = 4'h0;
	localparam st_Phase1 = 4'h1;
	localparam st_Phase2 = 4'h2;
	localparam st_Phase3 = 4'h3;
	localparam st_Phase4 = 4'h4;
	localparam st_Phase5 = 4'h5;
	localparam st_Phase6 = 4'h6;
	localparam st_Phase7 = 4'h7;
	localparam st_Done = 4'hf;
	reg [3:0] state = st_Idle;
	always @(posedge clk_i)
		if (~reset_n) begin
			dir <= 0;
			bypass <= 0;
			total_steps <= 0;
			jerk <= 0;
			c_jerk_dur <= 0;
			c_accel_dur <= 0;
			zero_clear <= 0;
			zero_stop <= 0;
		end
		else if ((state == st_Idle) & start) begin
			total_steps <= total_steps_i;
			jerk <= jerk_i;
			c_jerk_dur <= c_jerk_dur_i;
			c_accel_dur <= c_accel_dur_i;
		end
	always @(posedge clk) begin
		do_move <= start;
		if (move_done)
			done <= 1'b1;
		else if ((state == st_Idle) & start)
			done <= 1'b0;
	end
	always @(posedge clk)
		case (raddr)
			4'h0: rdata <= {29'b00000000000000000000000000000, zero_stop, zero_clear, dir};
			4'h1: rdata <= total_steps;
			4'h2: rdata <= steps_left;
			4'h3: rdata <= jerk;
			4'h4: rdata <= c_jerk_dur;
			4'h5: rdata <= c_accel_dur;
			4'h6: rdata <= phase_count;
			4'h7: rdata <= cur_accel[ACC_WIDTH - 2:ACC_WIDTH - 33];
			4'h8: rdata <= cur_speed[SPD_WIDTH - 2:SPD_WIDTH - 33];
			4'h9: rdata <= coast_steps;
			4'ha: rdata <= {16'b0000000000000000, busy, 3'b000, state, 8'b00000000};
			default: rdata <= 0;
		endcase
	reg was_busy = 0;
	always @(posedge clk) begin
		if (do_move)
			busy <= 1'b1;
		else if (stop | (state == st_Done))
			busy <= 1'b0;
		did_last_step <= (reset_n & (state != st_Idle)) & steps_done;
		was_busy <= busy;
		move_done <= reset_n & (was_busy & ~busy);
	end
	always @(posedge clk)
		if (stop) begin
			state <= st_Idle;
			phase_count <= 0;
		end
		else
			case (state)
				st_Idle:
					if (do_move) begin
						state <= st_Phase1;
						phase_count <= c_jerk_dur;
					end
				st_Phase1:
					if (steps_left == (total_steps >> 1)) begin
						state <= st_Phase7;
						phase_count <= c_jerk_dur - phase_count;
					end
					else begin
						if (phase_done)
							state <= st_Phase2;
						if (phase_done)
							phase_count <= c_accel_dur;
						else
							phase_count <= phase_count - 1'b1;
					end
				st_Phase2:
					if (steps_left == (total_steps >> 1)) begin
						state <= st_Phase6;
						phase_count <= c_accel_dur - phase_count;
					end
					else begin
						if (phase_done)
							state <= st_Phase3;
						if (phase_done)
							phase_count <= c_jerk_dur;
						else
							phase_count <= phase_count - 1'b1;
					end
				st_Phase3:
					if (steps_left == (total_steps >> 1)) begin
						state <= st_Phase5;
						phase_count <= c_jerk_dur - phase_count;
					end
					else begin
						if (phase_done)
							state <= st_Phase4;
						if (phase_done)
							phase_count <= coast_steps;
						else
							phase_count <= phase_count - 1'b1;
					end
				st_Phase4:
					if (motor_stopped)
						state <= st_Done;
					else if (phase_done) begin
						state <= st_Phase5;
						phase_count <= c_jerk_dur;
					end
					else if (do_step)
						phase_count <= phase_count - 1'b1;
				st_Phase5: begin
					if (phase_done)
						state <= st_Phase6;
					if (phase_done)
						phase_count <= c_accel_dur;
					else
						phase_count <= phase_count - 1'b1;
				end
				st_Phase6: begin
					if (phase_done)
						state <= st_Phase7;
					if (phase_done)
						phase_count <= c_jerk_dur;
					else
						phase_count <= phase_count - 1'b1;
				end
				st_Phase7: begin
					if (motor_stopped)
						state <= st_Done;
					else if (phase_done)
						state <= st_Done;
					if (~phase_done)
						phase_count <= phase_count - 1'b1;
				end
				default: state <= st_Idle;
			endcase
	always @(posedge clk)
		if (stop)
			cur_accel <= 0;
		else
			case (state)
				st_Idle: cur_accel <= 0;
				st_Phase1, st_Phase5:
					if (~phase_done)
						cur_accel <= cur_accel + {{ACC_WIDTH - JERK_WIDTH {1'b0}}, jerk};
				st_Phase3, st_Phase7:
					if ({{ACC_WIDTH - JERK_WIDTH {1'b0}}, jerk} > cur_accel)
						cur_accel <= 0;
					else if (~phase_done)
						cur_accel <= cur_accel - {{ACC_WIDTH - JERK_WIDTH {1'b0}}, jerk};
					else if (cur_accel[ACC_WIDTH - 1])
						cur_accel <= 0;
				default: cur_accel <= 0;
			endcase
	always @(posedge clk)
		if (stop) begin
			cur_speed <= 0;
			motor_stopped <= 0;
		end
		else
			case (state)
				st_Idle:
					if (do_move) begin
						cur_speed <= 0;
						motor_stopped <= 0;
					end
				st_Phase1, st_Phase2, st_Phase3:
					if (~phase_done)
						cur_speed <= cur_speed + cur_accel;
				st_Phase4: motor_stopped <= ~|cur_speed;
				st_Phase5, st_Phase6, st_Phase7:
					if (cur_accel > cur_speed)
						cur_speed <= 0;
					else if (cur_speed[SPD_WIDTH - 1] | ~|cur_speed[SPD_WIDTH - 2:0]) begin
						cur_speed <= 0;
						motor_stopped <= 1'b1;
					end
					else
						cur_speed <= cur_speed - cur_accel;
				st_Done: cur_speed <= 0;
				default: begin
					cur_speed <= 0;
					motor_stopped <= 0;
				end
			endcase
	always @(posedge clk)
		if (stop)
			step_accum <= half_step_thresh;
		else
			case (state)
				st_Idle: step_accum <= half_step_thresh;
				st_Phase1, st_Phase2, st_Phase3, st_Phase4, st_Phase5, st_Phase6, st_Phase7:
					if (do_step)
						step_accum <= step_accum - full_step_thresh;
					else
						step_accum <= step_accum + cur_speed[SPD_WIDTH - 2:SPD_SHIFT];
				default: step_accum <= half_step_thresh;
			endcase
	always @(posedge clk)
		if (~reset_n)
			steps_left <= 0;
		else if ((state == st_Idle) & do_move)
			steps_left <= total_steps;
		else if (do_step)
			steps_left <= steps_left - 1'b1;
	reg [8:0] step_timer = 0;
	wire step_timer_nonzero = |step_timer;
	always @(posedge clk)
		if (~reset_n)
			step_timer <= 0;
		else if (do_step)
			step_timer <= PULSE_WIDTH_COUNT;
		else if (step_timer_nonzero)
			step_timer <= step_timer - 1'b1;
	always @(posedge clk) drv_step <= step_timer_nonzero;
	always @(posedge clk)
		if (~reset_n) begin
			drv_dir <= 0;
			drv_bypass <= 0;
		end
		else begin
			if ((state == st_Idle) & do_move)
				drv_dir <= dir;
			drv_bypass <= bypass;
		end
endmodule
