module obi_req_driver (
	clk_i,
	rst_ni,
	rd_i,
	wr_i,
	gnt_i,
	rvalid_i,
	stall_o,
	req_o
);
	input wire clk_i;
	input wire rst_ni;
	input wire rd_i;
	input wire wr_i;
	input wire gnt_i;
	input wire rvalid_i;
	output reg stall_o;
	output reg req_o;
	reg NS;
	reg PS;
	reg stall_a;
	reg stall_next;
	reg stall_next_a;
	always @(negedge clk_i) begin
		stall_o <= stall_a || stall_next;
		stall_next <= stall_next_a;
	end
	always @(*)
		case (PS)
			1'd0: NS = (rd_i && gnt_i ? 1'd1 : 1'd0);
			1'd1: NS = (rvalid_i && !(rd_i && gnt_i) ? 1'd0 : 1'd1);
			default: NS = 1'd0;
		endcase
	always @(posedge clk_i)
		if (!rst_ni)
			PS <= 1'd0;
		else
			PS <= NS;
	always @(*)
		case (PS)
			1'd0: begin
				req_o = (!rst_ni ? 1'b0 : rd_i || wr_i);
				stall_a = (rd_i || wr_i) && !gnt_i;
				stall_next_a = (rd_i || wr_i) && !gnt_i;
			end
			1'd1: begin
				req_o = (!rst_ni ? 1'b0 : (rd_i || wr_i) && rvalid_i);
				stall_a = !rvalid_i;
				stall_next_a = ((rd_i || wr_i) && rvalid_i) && !gnt_i;
			end
			default: begin
				req_o = 1'sb0;
				stall_a = 1'sb0;
				stall_next_a = 0;
			end
		endcase
endmodule
