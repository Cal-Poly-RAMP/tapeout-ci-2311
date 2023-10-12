module exec_stage (
	clk_i,
	rst_ni,
	valid_i,
	decode_state_i,
	reg_meta_i,
	csr_read_i,
	stage_ctrl_i,
	target_sel_o,
	target_addr_o,
	valid_o,
	exec_state_o,
	reg_meta_o,
	mem_read_ao,
	mem_write_ao,
	mem_strb_ao,
	mem_addr_ao,
	mem_data_ao
);
	input clk_i;
	input rst_ni;
	input valid_i;
	input wire [265:0] decode_state_i;
	input wire [81:0] reg_meta_i;
	input [31:0] csr_read_i;
	input wire [1:0] stage_ctrl_i;
	output wire target_sel_o;
	output wire [31:0] target_addr_o;
	output reg valid_o;
	output reg [102:0] exec_state_o;
	output reg [81:0] reg_meta_o;
	output wire mem_read_ao;
	output wire mem_write_ao;
	output wire [3:0] mem_strb_ao;
	output wire [31:0] mem_addr_ao;
	output wire [31:0] mem_data_ao;
	reg [31:0] alu_a_in;
	always @(*)
		case (decode_state_i[257-:2])
			2'd0: alu_a_in = reg_meta_i[75-:32];
			2'd1: alu_a_in = decode_state_i[157-:32];
			2'd2: alu_a_in = decode_state_i[125-:32];
			2'd3: alu_a_in = decode_state_i[189-:32];
			default: alu_a_in = reg_meta_i[75-:32];
		endcase
	reg [31:0] alu_b_in;
	always @(*)
		case (decode_state_i[255-:2])
			2'd0: alu_b_in = reg_meta_i[37-:32];
			2'd1: alu_b_in = decode_state_i[253-:32];
			2'd2: alu_b_in = decode_state_i[221-:32];
			2'd3: alu_b_in = decode_state_i[93-:32];
			default: alu_b_in = reg_meta_i[37-:32];
		endcase
	wire [31:0] alu_out;
	alu i_alu(
		.op_i(decode_state_i[261-:4]),
		.a_i(alu_a_in),
		.b_i(alu_b_in),
		.out_o(alu_out)
	);
	wire branch_taken;
	branch_gen i_branch_gen(
		.op_i(decode_state_i[264-:3]),
		.rs1_data_i(reg_meta_i[75-:32]),
		.rs2_data_i(reg_meta_i[37-:32]),
		.taken_o(branch_taken)
	);
	wire valid;
	assign target_sel_o = ((decode_state_i[265] | branch_taken) & valid ? 1'd1 : 1'd0);
	assign target_addr_o = alu_out;
	wire [31:0] mem_addr;
	wire [31:0] mem_wdata;
	wire [3:0] mem_strb;
	wire mem_read;
	wire mem_write;
	wire mem_illegal;
	assign mem_read = (decode_state_i[26] & ~stage_ctrl_i[1]) & valid_i;
	assign mem_write = (decode_state_i[25] & ~stage_ctrl_i[1]) & valid_i;
	mem_prep i_mem_prep(
		.mem_width_i(decode_state_i[23-:2]),
		.mem_data_i(reg_meta_i[37-:32]),
		.mem_addr_i(alu_out),
		.mem_read_i(mem_read),
		.mem_write_i(mem_write),
		.mem_word_addr_ao(mem_addr),
		.mem_write_data_ao(mem_wdata),
		.mem_strobe_ao(mem_strb),
		.mem_illegal_ao(mem_illegal)
	);
	reg [31:0] last_dmem_addr;
	always @(posedge clk_i)
		if (!rst_ni)
			last_dmem_addr <= 1'sb0;
		else if (!stage_ctrl_i[0])
			last_dmem_addr <= mem_addr;
	assign mem_read_ao = mem_read;
	assign mem_write_ao = mem_write;
	assign mem_strb_ao = mem_strb;
	assign mem_addr_ao = (stage_ctrl_i[0] || stage_ctrl_i[1] ? last_dmem_addr : mem_addr);
	assign mem_data_ao = mem_wdata;
	assign valid = valid_i & ~stage_ctrl_i[1];
	always @(posedge clk_i)
		if (!rst_ni) begin
			valid_o <= 0;
			exec_state_o <= 1'sb0;
			reg_meta_o <= 1'sb0;
		end
		else if (!stage_ctrl_i[0]) begin
			exec_state_o[70-:32] <= alu_out;
			exec_state_o[102-:32] <= decode_state_i[61-:32];
			exec_state_o[31-:32] <= csr_read_i;
			exec_state_o[38] <= decode_state_i[29];
			exec_state_o[37-:2] <= decode_state_i[28-:2];
			exec_state_o[35] <= mem_read;
			exec_state_o[34] <= decode_state_i[24];
			exec_state_o[33-:2] <= decode_state_i[23-:2];
			reg_meta_o[81] <= reg_meta_i[81];
			reg_meta_o[80-:5] <= reg_meta_i[80-:5];
			reg_meta_o[75-:32] <= reg_meta_i[75-:32];
			reg_meta_o[43] <= reg_meta_i[43];
			reg_meta_o[42-:5] <= reg_meta_i[42-:5];
			reg_meta_o[37-:32] <= reg_meta_i[37-:32];
			reg_meta_o[5] <= reg_meta_i[5];
			reg_meta_o[4-:5] <= reg_meta_i[4-:5];
			valid_o <= valid;
		end
	wire __unused;
	assign __unused = &{1'b0, decode_state_i[21:0]};
endmodule
