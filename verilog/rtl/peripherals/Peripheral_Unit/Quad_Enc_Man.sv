`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
// Module Name: Quad_Enc_Man
// 
// SPDX-License-Identifier: Apache-2.0
//
//////////////////////////////////////////////////////////////////////////////////

module Quad_Enc_Man (
    //Quadrature encoder interface
    input index_strobe,
    input quadA,
    input quadB,
    // input[7:0] CMD,
    // input[1:0] TEND,
    
    //System interface
    input clk_i,
    input reset_n,
    input count_wr,
    input thresh_wr,
    input cr_wr,
    input [31:0] count_i,
    input [31:0] count_thresh,
    input calib_mode,
    input calib_motor_stopped,
    output logic calib_stop_motor = 0,
    output logic calib_finished = 0, 	//both interrupt and register
    output logic thresh_reached = 0,    //both interrupt and register
    output logic [31:0] latched_count = 0,
    output logic [31:0] count = 0);

//Calibration stages
typedef enum logic [1:0] {
    IDLE = 2'b0,
    FIND_INDEX = 2'b1,
    FIND_DIFF = 2'b10,
    SET_POS = 2'b11
} state_t;

logic quadA_delayed = 0, quadB_delayed = 0;
logic count_enable;
logic count_direction;

assign count_enable = quadA_delayed ^ quadA | quadB_delayed ^ quadB;
assign count_direction = quadA ^ quadB_delayed;

logic count_wr_reg1 = 0;
logic count_wr_reg2 = 0;
logic count_wr_reg;
logic thresh_wr_reg1 = 0;
logic thresh_wr_reg2 = 0;
logic thresh_wr_reg;
logic cr_wr_reg1 = 0;
logic cr_wr_reg2 = 0;
logic cr_wr_reg;
logic calib_mode_reg = 0;
logic calib_motor_stopped_reg = 0;
logic [31:0] count_thresh_reg = -1;
logic [31:0] calib_pos = 0;
logic [1:0] calib_state;

assign count_wr_reg = count_wr_reg1 & ~count_wr_reg2;
assign thresh_wr_reg = thresh_wr_reg1 & ~thresh_wr_reg2;
assign cr_wr_reg = cr_wr_reg1 & ~cr_wr_reg2;

//Latch inputs
always @(posedge clk_i) begin
    cr_wr_reg1 <= cr_wr;
    cr_wr_reg2 <= cr_wr_reg1;
    thresh_wr_reg1 <= thresh_wr;
    thresh_wr_reg2 <= thresh_wr_reg1;
    if (cr_wr_reg) begin
	if (calib_state == IDLE)
            calib_mode_reg <= calib_mode;
        calib_motor_stopped_reg <= calib_motor_stopped;
    end
    else
	calib_mode_reg <= 1'b0;
    if (thresh_wr_reg)
        count_thresh_reg <= count_thresh;
end

//Pulse registration
always @(posedge clk_i) begin
    if (reset_n) begin
        if (count_enable) begin
           quadA_delayed <= quadA;
           quadB_delayed <= quadB;
        end
	end
end

//Calibration FSM
always @(posedge clk_i) begin
    if (reset_n) begin
	    calib_stop_motor <= 1'b0;
	    calib_finished <= 1'b0;
        case(calib_state)
            IDLE: begin
                if (calib_mode_reg) begin
                    calib_state <= FIND_INDEX;
                    // if (calib_finished)
                    //     calib_finished <= 1'b0;
                end
            end
            
            FIND_INDEX: begin
                if (index_strobe) begin
                    latched_count <= count;
                    calib_stop_motor <= 1'b1;
                    calib_state <= FIND_DIFF;
                end
            end
            
            FIND_DIFF: begin
                if (calib_motor_stopped_reg) begin
                    calib_pos <= count - latched_count;
                    calib_state <= SET_POS;
                end
            end
            
            SET_POS: begin
                calib_finished <= 1'b1;
                calib_state <= IDLE;
            end
	    
	    default: calib_state <= IDLE;
        endcase
    end
end

//Threshold interrupt triggering
always @(posedge clk_i) begin
    if (~reset_n)
	thresh_reached <= 1'b0;
    else begin
        if (count == count_thresh_reg)
            thresh_reached <= 1'b1;
        else
            thresh_reached <= 1'b0;
    end
end

//Reset and count update
always @(posedge clk_i) begin
	if (~reset_n)
	begin
	   count <= 32'h00000000;
	end
	else begin
	   count_wr_reg1 <= count_wr;
	   count_wr_reg2 <= count_wr_reg1;
	   if (calib_state == SET_POS)
	       count <= calib_pos;
	   else if (count_wr_reg)
	       count <= count_i;
       else if(count_enable)
           begin
                if (count_direction) 
                    count <= count+1; 
                else
                    count <= count-1;
           end
	end
end

endmodule
