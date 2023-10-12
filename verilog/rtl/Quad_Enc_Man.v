module Quad_Enc_Man (
	index_strobe,
	quadA,
	quadB,
	clk_i,
	reset_n,
	count_wr,
	thresh_wr,
	cr_wr,
	clk_div_i,
	count_i,
	count_thresh,
	calib_mode,
	calib_motor_stopped,
	calib_stop_motor,
	calib_finished,
	thresh_reached,
	latched_count,
	count
);
	input index_strobe;
	input quadA;
	input quadB;
	input clk_i;
	input reset_n;
	input count_wr;
	input thresh_wr;
	input cr_wr;
	input [15:0] clk_div_i;
	input [31:0] count_i;
	input [31:0] count_thresh;
	input calib_mode;
	input calib_motor_stopped;
	output reg calib_stop_motor = 0;
	output reg calib_finished = 0;
	output reg thresh_reached = 0;
	output reg [31:0] latched_count = 0;
	output reg [31:0] count = 0;
	wire clk;
	reg [15:0] clk_div = 16'd2;
	reg quadA_delayed = 0;
	reg quadB_delayed = 0;
	wire count_enable;
	wire count_direction;
	assign count_enable = (quadA_delayed ^ quadA) | (quadB_delayed ^ quadB);
	assign count_direction = quadA ^ quadB_delayed;
	reg count_wr_reg1 = 0;
	reg count_wr_reg2 = 0;
	wire count_wr_reg;
	reg thresh_wr_reg1 = 0;
	reg thresh_wr_reg2 = 0;
	wire thresh_wr_reg;
	reg cr_wr_reg1 = 0;
	reg cr_wr_reg2 = 0;
	wire cr_wr_reg;
	reg calib_mode_reg = 0;
	reg calib_motor_stopped_reg = 0;
	reg [31:0] count_thresh_reg = -1;
	reg [31:0] calib_pos = 0;
	reg [1:0] calib_state = 2'b00;
	assign count_wr_reg = count_wr_reg1 & ~count_wr_reg2;
	assign thresh_wr_reg = thresh_wr_reg1 & ~thresh_wr_reg2;
	assign cr_wr_reg = cr_wr_reg1 & ~cr_wr_reg2;
	always @(posedge clk_i) begin
		cr_wr_reg1 <= cr_wr;
		cr_wr_reg2 <= cr_wr_reg1;
		thresh_wr_reg1 <= thresh_wr;
		thresh_wr_reg2 <= thresh_wr_reg1;
		if (cr_wr_reg) begin
			clk_div <= (clk_div_i >= 2 ? clk_div_i : 16'd2);
			calib_mode_reg <= calib_mode;
			calib_motor_stopped_reg <= calib_motor_stopped;
		end
		if (thresh_wr_reg)
			count_thresh_reg <= count_thresh;
	end
	always @(posedge clk_i)
		if (reset_n)
			if (count_enable) begin
				quadA_delayed <= quadA;
				quadB_delayed <= quadB;
			end
	always @(posedge clk_i)
		if (reset_n)
			case (calib_state)
				2'b00:
					if (calib_mode_reg) begin
						calib_state <= 2'b01;
						if (calib_finished)
							calib_finished <= 1'b0;
					end
				2'b01: begin
					calib_mode_reg <= 1'b0;
					if (index_strobe) begin
						latched_count <= count;
						calib_stop_motor <= 1'b1;
						calib_state <= 2'b10;
					end
				end
				2'b10:
					if (calib_motor_stopped_reg) begin
						calib_pos <= count - latched_count;
						calib_state <= 2'b11;
					end
				2'b11: begin
					calib_finished <= 1'b1;
					calib_stop_motor <= 1'b0;
					calib_state <= 2'b00;
				end
			endcase
	always @(posedge clk_i)
		if (reset_n)
			if (count == count_thresh_reg)
				thresh_reached <= 1'b1;
			else
				thresh_reached <= 1'b0;
	always @(posedge clk_i)
		if (~reset_n) begin
			calib_state <= 2'b00;
			calib_stop_motor <= 1'b0;
			calib_finished <= 1'b0;
			thresh_reached <= 1'b0;
			count <= 32'h00000000;
		end
		else begin
			count_wr_reg1 <= count_wr;
			count_wr_reg2 <= count_wr_reg1;
			if (calib_state == 2'b11)
				count <= calib_pos;
			else if (count_wr_reg)
				count <= count_i;
			else if (count_enable)
				if (count_direction)
					count <= count + 1;
				else
					count <= count - 1;
		end
endmodule
