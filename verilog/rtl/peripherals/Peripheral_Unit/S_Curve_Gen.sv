`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
// Module Name: S_Curve_Gen
// 
// SPDX-License-Identifier: Apache-2.0
//
//////////////////////////////////////////////////////////////////////////////////

module S_Curve_Gen #(                   // 1.5 MHz operating frequency - supports running motors up to 20000 rpm
    parameter PULSE_WIDTH_COUNT = 1,
    parameter HAS_ENABLE_ZERO = 0,      // Set this to enable "use_zero" control
    parameter DUAL_ZERO = 0,            // Set this for push head with two zero switches
    parameter SPD_SHIFT = 24,           // bit shift for speed before step accum
    parameter JERK_WIDTH = 32,           // width of jerk register
    parameter ACC_WIDTH = 47,           // width of accel counter
    parameter SPD_WIDTH = 47,           // width of speed counter
    parameter STEP_WIDTH = 22,          // width of step accumulator
    parameter STEP_THRESH = 'h200000)   // Step accum needed to trigger a step
(
    input   clk_i,
    input   reset_n,
    input   estop_i,  // Emergency stop button
    input   swstop_i, // Software controlled abort-move
    input   [DUAL_ZERO:0] zero,   // Hardware endstop
    output logic done = 0,
    output logic busy = 0,

    input wr_cr,
    input wr_start,
    input wr_stop,
    input wr_total_steps,
    input wr_jerk,
    input wr_c_jerk_dur,
    input wr_c_accel_dur,
    input wr_raddr,
    input [15:0] clk_div_i,
    input start_i,
    input dir_i,
    input bypass_i,                   //Step and dir bypass configuration bit for stepper driver
    input [31:0] total_steps_i,
    input [31:0] jerk_i,
    input [31:0] c_jerk_dur_i,        // Phases 1, 3, 5 and 7
    input [31:0] c_accel_dur_i,       // Phases 2 and 6
    input [3:0] raddr_i,
    output logic [31:0] rdata = 0,

    output logic drv_bypass = 0,
    output logic drv_dir = 0,
    output logic drv_step = 0
);
logic clk;
logic [15:0] clk_div = 16'd2;
logic zero_clear = 0;               // Move until zero is deasserted (only in +ve dir)
logic zero_stop = 0;                // Enable stop at zero (only used if HAS_ENABLE_ZERO)
logic do_move = 0;

// Allow movement away from endstop zero. Optional "stop when clear" mode.
// For head rotate and push steppers, allow moves to ignore zero markers.
// For the push stepper, the active stop depends on which direction the
// rotation is in and whether you're trying to clear the stop.
logic stop = 0;
logic did_last_step = 0;
logic zero_sel;
logic dir;
logic bypass;
logic start = 0;
logic estop = 0;
logic swstop = 0;
logic [31:0] total_steps;
logic [31:0] jerk;
logic [31:0] c_jerk_dur;        // Phases 1, 3, 5 and 7
logic [31:0] c_accel_dur;
logic [3:0] raddr;
logic [31:0] steps_left = 0;

generate
    if (DUAL_ZERO)
    begin : g_zsel
        assign zero_sel = (dir ^ zero_clear) ? zero[0] : zero[1];
    end
    else
    begin : g_zsel
        assign zero_sel = zero[0];
    end
endgenerate

generate
    if (HAS_ENABLE_ZERO)
    begin : stops
        always @(posedge clk)
            stop <= ~reset_n | estop | swstop | did_last_step |
                (zero_stop & (zero_sel ^ zero_clear));
    end
    else
    begin : stops
        always @(posedge clk)
            stop <= ~reset_n | estop | swstop | did_last_step |
                (dir ? ~zero_sel & zero_clear : zero_sel);
    end
endgenerate

logic wr_cr_r1 = 0, wr_cr_r2 = 0, wr_cr_r;
logic wr_start_r1 = 0, wr_start_r2 = 0, wr_start_r;
logic wr_stop_r1 = 0, wr_stop_r2 = 0, wr_stop_r;
logic wr_total_steps_r1 = 0, wr_total_steps_r2 = 0, wr_total_steps_r;
logic wr_jerk_r1 = 0, wr_jerk_r2 = 0, wr_jerk_r;
logic wr_c_jerk_dur_r1 = 0, wr_c_jerk_dur_r2 = 0, wr_c_jerk_dur_r;
logic wr_c_accel_dur_r1 = 0, wr_c_accel_dur_r2 = 0, wr_c_accel_dur_r;
logic wr_raddr_r1 = 0, wr_raddr_r2 = 0, wr_raddr_r;

logic [ACC_WIDTH-1:0] cur_accel = 0;
logic [SPD_WIDTH-1:0] cur_speed = 0;

wire steps_done = ~|steps_left;
logic [31:0] phase_count = 0;
logic phase_done;
logic move_done = 0;

/*
 * To figure out how many coast steps we need:
 * s_steps = total - left   (at the end of phase 3)
 * coast = total - 2 * s_steps  (we'll do the same number while decelerating)
 *       = total - 2 * total + 2 * left
 *       = 2*left - total
 * Add one to round up and ensure we don't stop moving with one step left
 */
wire [32:0] coast_steps_needed = {steps_left, 1'b1} - {1'b0, total_steps};
wire [31:0] coast_steps = {32{~coast_steps_needed[32]}} & coast_steps_needed[31:0];

logic motor_stopped = 0;
wire [STEP_WIDTH-1:0] step_thresh = STEP_THRESH;
wire [STEP_WIDTH-1:0] full_step_thresh = step_thresh[STEP_WIDTH-1:0];
wire [STEP_WIDTH-1:0] half_step_thresh = {1'b0, step_thresh[STEP_WIDTH-1:1]};

logic [STEP_WIDTH-1:0] step_accum = 0;
wire do_step = (step_accum >= full_step_thresh) & ~stop & ~steps_done;

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

    if (~reset_n) begin
	clk_div <= 16'd2;
	dir <= 1'b0;
	bypass <= 1'b0;
	start <= 1'b0;
	estop <= 1'b0;
	swstop <= 1'b0;
	total_steps <= 0;
	jerk <= 0;
	c_jerk_dur <= 0;
	c_accel_dur <= 0;
        raddr <= 0;
    end
    else begin
    if (wr_cr_r) begin
        clk_div <= (clk_div_i >= 2)?clk_div_i:16'd2;
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
end

clk_div_gen op_clk(
    .clk(clk_i),
    .sclk(clk),
    .count((clk_div >> 1) - 16'd1));

localparam
    st_Idle = 4'h0,
    st_Phase1 = 4'h1,
    st_Phase2 = 4'h2,
    st_Phase3 = 4'h3,
    st_Phase4 = 4'h4,
    st_Phase5 = 4'h5,
    st_Phase6 = 4'h6,
    st_Phase7 = 4'h7,
    st_Done   = 4'hf;
logic [3:0] state = st_Idle;

always @(posedge clk) begin
    do_move <= start;
    if (move_done)
        done <= 1'b1;
    else if ((state == st_Idle) & start)
        done <= 1'b0;
end

always @(posedge clk)
begin
    case (raddr)
    4'h0:   rdata <= {29'b0, zero_stop, zero_clear, dir};
    4'h1:   rdata <= total_steps;
    4'h2:   rdata <= steps_left;
    4'h3:   rdata <= jerk;
    4'h4:   rdata <= c_jerk_dur;
    4'h5:   rdata <= c_accel_dur;
    4'h6:   rdata <= phase_count;
    4'h7:   rdata <= cur_accel[(ACC_WIDTH - 2):(ACC_WIDTH - 2 - 31)];
    4'h8:   rdata <= cur_speed[(SPD_WIDTH - 2):(SPD_WIDTH - 2 - 31)];
    4'h9:   rdata <= coast_steps;
    4'hA:   rdata <= {16'b0, busy, 3'b0, state, 8'b0};
    default:rdata <= 0;
    endcase
end

logic was_busy = 0;
always @(posedge clk)
begin
    if (do_move)
        busy <= 1'b1;
    else
    if (stop | (state == st_Done))
        busy <= 1'b0;

    did_last_step <= reset_n & (state != st_Idle) & steps_done;

    was_busy <= busy;

    // Flag move done even if it's immediately stopped
    move_done <= reset_n & (was_busy & ~busy);
end

// Main S-curve phase state machine
always @(posedge clk)
    if (stop)
    begin
        state <= st_Idle;
        phase_count <= 0;
    end
    else
    case (state)
    st_Idle:
        if (do_move)
        begin
            state <= st_Phase1;
            phase_count <= c_jerk_dur;
        end

    st_Phase1:
        begin
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
        end

    st_Phase2:
        begin
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
        end

    st_Phase3:
        begin
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
        end

    st_Phase4:
        begin
            // Hack to prevent HW bug from locking up state - abort with all steps remaining
            if (motor_stopped)
                state <= st_Done;
            else if (phase_done)
            begin
                state <= st_Phase5;
                phase_count <= c_jerk_dur;
            end
            else if (do_step)
                phase_count <= phase_count - 1'b1;
        end

    st_Phase5:
        begin
            if (phase_done)
                state <= st_Phase6;

            if (phase_done)
                phase_count <= c_accel_dur;
            else
                phase_count <= phase_count - 1'b1;
        end

    st_Phase6:
        begin
            if (phase_done)
                state <= st_Phase7;

            if (phase_done)
                phase_count <= c_jerk_dur;
            else
                phase_count <= phase_count - 1'b1;
        end

    st_Phase7:
        begin
            /*
             * If the speed drops to zero and we have steps left, that's a fault.
             * Return to idle and leave the remaining count visible.
             */
            if (motor_stopped)
                state <= st_Done;
            else
            if (phase_done)
                state <= st_Done;

            if (~phase_done)
                phase_count <= phase_count - 1'b1;
        end

    // st_Done:
    default:
        state <= st_Idle;

    endcase

always @(posedge clk)
    if (stop)
        cur_accel <= 0;
    else
    case (state)
    st_Idle:   cur_accel <= 0;
    st_Phase1,
    st_Phase5:  // cur_accel +ve for both accel and decel
        if (~phase_done)
            cur_accel <= cur_accel + {{ACC_WIDTH - JERK_WIDTH{1'b0}}, jerk};
    st_Phase3,
    st_Phase7:
        if ({{ACC_WIDTH - JERK_WIDTH{1'b0}}, jerk} > cur_accel)
            cur_accel <= 0;
        else
        if (~phase_done)
            cur_accel <= cur_accel - {{ACC_WIDTH - JERK_WIDTH{1'b0}}, jerk};
        else
        if (cur_accel[ACC_WIDTH-1])  // Prevent accel from going negative
            cur_accel <= 0;
    default:	cur_accel <= 0;
    endcase

always @(posedge clk)
    if (stop)
    begin
        cur_speed <= 0;
        motor_stopped <= 0;
    end
    else
    case (state)
    st_Idle:
        if (do_move)
        begin
            cur_speed <= 0;
            motor_stopped <= 0;
        end

    st_Phase1,
    st_Phase2,
    st_Phase3:
        if (~phase_done)
            cur_speed <= cur_speed + cur_accel;

    st_Phase4:
        motor_stopped <= ~|cur_speed;

    st_Phase5,
    st_Phase6,
    st_Phase7:
        if (cur_accel > cur_speed)
            cur_speed <= 0;
        else
        if (cur_speed[SPD_WIDTH-1] | (~|cur_speed[SPD_WIDTH-2:0]))
        begin
            cur_speed <= 0;
            motor_stopped <= 1'b1;
        end
        else
            cur_speed <= cur_speed - cur_accel;

    st_Done:
        cur_speed <= 0;

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
    st_Idle:
        step_accum <= half_step_thresh;

    st_Phase1,
    st_Phase2,
    st_Phase3,
    st_Phase4,
    st_Phase5,
    st_Phase6,
    st_Phase7: begin
        if (do_step)
            step_accum <= step_accum - full_step_thresh;
        else
            step_accum <= step_accum + cur_speed[SPD_WIDTH-2:SPD_SHIFT];
    end
    default: step_accum <= half_step_thresh;
    endcase

// Don't clear this on stop so SW can see how many were left
always @(posedge clk)
    if (~reset_n)
        steps_left <= 0;
    else
    if ((state == st_Idle) & do_move)
        steps_left <= total_steps;
    else
    if (do_step)
        steps_left <= steps_left - 1'b1;

logic [8:0] step_timer = 0;
wire step_timer_nonzero = |step_timer;

// Don't clear this on stop to avoid narrow pulses. Rising edge will have triggered a step anyway.
always @(posedge clk)
    if (~reset_n)
        step_timer <= 0;
    else
    if (do_step)
        step_timer <= PULSE_WIDTH_COUNT;
    else
    if (step_timer_nonzero)
        step_timer <= step_timer - 1'b1;

always @(posedge clk)
    drv_step <= step_timer_nonzero;

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
