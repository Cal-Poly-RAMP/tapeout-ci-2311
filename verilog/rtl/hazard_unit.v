module hazard_unit (
	clk_i,
	rst_ni,
	imem_stall_i,
	dmem_stall_i,
	branch_taken_i,
	csr_flush_i,
	csr_mret_i,
	load_use_stall_i,
	fetch_ctrl_ao,
	decode_ctrl_ao,
	execute_ctrl_ao,
	memory_ctrl_ao,
	writeback_ctrl_ao,
	csr_hold_o
);
	input clk_i;
	input rst_ni;
	input imem_stall_i;
	input dmem_stall_i;
	input wire branch_taken_i;
	input csr_flush_i;
	input csr_mret_i;
	input load_use_stall_i;
	output wire [1:0] fetch_ctrl_ao;
	output wire [1:0] decode_ctrl_ao;
	output wire [1:0] execute_ctrl_ao;
	output wire [1:0] memory_ctrl_ao;
	output wire [1:0] writeback_ctrl_ao;
	output wire csr_hold_o;
	reg flush_in_progess;
	wire branch;
	assign branch = (branch_taken_i != 1'd0) || csr_mret_i;
	assign fetch_ctrl_ao[1] = branch || flush_in_progess;
	assign fetch_ctrl_ao[0] = (imem_stall_i || dmem_stall_i) || load_use_stall_i;
	assign decode_ctrl_ao[1] = imem_stall_i || branch;
	assign decode_ctrl_ao[0] = dmem_stall_i || load_use_stall_i;
	assign execute_ctrl_ao[1] = load_use_stall_i;
	assign execute_ctrl_ao[0] = dmem_stall_i;
	assign memory_ctrl_ao[1] = 1'sb0;
	assign memory_ctrl_ao[0] = dmem_stall_i;
	assign writeback_ctrl_ao[1] = 1'sb0;
	assign writeback_ctrl_ao[0] = dmem_stall_i;
	assign csr_hold_o = flush_in_progess;
	reg [2:0] PS;
	reg [2:0] NS;
	always @(*) begin : NS_decoder
		NS = 1'sb0;
		if (!rst_ni)
			NS = 1'sb0;
		else if (csr_flush_i)
			NS[1] = 1'sb1;
		else
			NS = PS << 1;
	end
	always @(posedge clk_i) begin : PS_reg
		if (!rst_ni)
			PS <= 1'sb0;
		else
			PS <= NS;
	end
	always @(*) begin : output_decoder
		flush_in_progess = csr_flush_i || (PS != 0);
	end
endmodule
