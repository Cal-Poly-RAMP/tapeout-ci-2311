module pulse_gen (
	clk,
	nrst,
	en,
	start,
	cntr_max,
	cntr_low,
	pulse_out,
	start_strobe,
	busy
);
	parameter CNTR_WIDTH = 32;
	input clk;
	input nrst;
	input en;
	input start;
	input [CNTR_WIDTH - 1:0] cntr_max;
	input [CNTR_WIDTH - 1:0] cntr_low;
	output reg pulse_out;
	output reg start_strobe = 1'b0;
	output wire busy;
	reg en_r = 0;
	reg [CNTR_WIDTH - 1:0] seq_cntr = 1'sb0;
	wire seq_cntr_0;
	assign seq_cntr_0 = seq_cntr[CNTR_WIDTH - 1:0] == {CNTR_WIDTH * 1 {1'sb0}};
	reg seq_cntr_0_d1;
	always @(posedge clk)
		if (~nrst)
			seq_cntr_0_d1 <= 0;
		else begin
			en_r <= en;
			if (en)
				seq_cntr_0_d1 <= seq_cntr_0;
		end
	assign busy = ~(seq_cntr_0 && seq_cntr_0_d1);
	reg [CNTR_WIDTH - 1:0] cntr_low_buf = 1'sb0;
	always @(posedge clk) begin
		if (~nrst) begin
			seq_cntr[CNTR_WIDTH - 1:0] <= 1'sb0;
			cntr_low_buf[CNTR_WIDTH - 1:0] <= 1'sb0;
			start_strobe <= 1'b0;
		end
		if (en)
			if (seq_cntr_0) begin
				if (start && (cntr_max[CNTR_WIDTH - 1:0] != {CNTR_WIDTH * 1 {1'sb0}})) begin
					seq_cntr[CNTR_WIDTH - 1:0] <= cntr_max[CNTR_WIDTH - 1:0];
					cntr_low_buf[CNTR_WIDTH - 1:0] <= cntr_low[CNTR_WIDTH - 1:0];
					start_strobe <= 1'b1;
				end
				else
					start_strobe <= 1'b0;
			end
			else begin
				seq_cntr[CNTR_WIDTH - 1:0] <= seq_cntr[CNTR_WIDTH - 1:0] - 1'b1;
				start_strobe <= 1'b0;
			end
	end
	always @(*) begin
		if (~nrst)
			pulse_out = 1'b0;
		if (en) begin
			if (busy && (seq_cntr[CNTR_WIDTH - 1:0] >= cntr_low_buf[CNTR_WIDTH - 1:0]))
				pulse_out = 1'b1;
			else
				pulse_out = 1'b0;
		end
		else
			pulse_out = 1'b0;
	end
endmodule
