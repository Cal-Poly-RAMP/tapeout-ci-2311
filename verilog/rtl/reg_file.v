module reg_file (
	clk_i,
	read1_i,
	read2_i,
	wr_reg_i,
	wr_data_i,
	wr_en_i,
	data1_ao,
	data2_ao
);
	input clk_i;
	input [4:0] read1_i;
	input [4:0] read2_i;
	input [4:0] wr_reg_i;
	input [31:0] wr_data_i;
	input wr_en_i;
	output wire [31:0] data1_ao;
	output wire [31:0] data2_ao;
	reg [31:0] RF [31:0];
	assign data1_ao = (read1_i != 0 ? RF[read1_i] : {32 {1'sb0}});
	assign data2_ao = (read2_i != 0 ? RF[read2_i] : {32 {1'sb0}});
	always @(negedge clk_i)
		if (wr_en_i && (wr_reg_i != 0))
			RF[wr_reg_i] <= wr_data_i;
endmodule
