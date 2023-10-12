module decode_stage (
	clk_i,
	rst_ni,
	valid_i,
	fetch_state_i,
	inst_i,
	stage_ctrl_i,
	rf_port1_reg_o,
	rf_port2_reg_o,
	rf_rs1_i,
	rf_rs2_i,
	valid_o,
	decode_state_o,
	reg_meta_o
);
	input clk_i;
	input rst_ni;
	input wire valid_i;
	input wire [63:0] fetch_state_i;
	input [31:0] inst_i;
	input wire [1:0] stage_ctrl_i;
	output wire [4:0] rf_port1_reg_o;
	output wire [4:0] rf_port2_reg_o;
	input [31:0] rf_rs1_i;
	input [31:0] rf_rs2_i;
	output reg valid_o;
	output reg [265:0] decode_state_o;
	output reg [81:0] reg_meta_o;
	assign rf_port1_reg_o = inst_i[19:15];
	assign rf_port2_reg_o = inst_i[24:20];
	wire pc_src;
	wire [2:0] branch_op;
	wire [3:0] alu_op;
	wire [1:0] alu_a_src;
	wire [1:0] alu_b_src;
	wire rf_wr_en;
	wire [1:0] rf_wr_src;
	wire mem_write;
	wire mem_read;
	wire mem_sign;
	wire [1:0] mem_width;
	wire rs1_used;
	wire rs2_used;
	wire rd_used;
	wire csr_wr;
	wire csr_mret;
	decoder i_decoder(
		.inst_i(inst_i),
		.pc_src_o(pc_src),
		.branch_op_o(branch_op),
		.alu_op_o(alu_op),
		.alu_a_src_o(alu_a_src),
		.alu_b_src_o(alu_b_src),
		.rf_wr_en_o(rf_wr_en),
		.rf_wr_src_o(rf_wr_src),
		.mem_write_o(mem_write),
		.mem_read_o(mem_read),
		.mem_sign_o(mem_sign),
		.mem_width_o(mem_width),
		.rs1_valid_o(rs1_used),
		.rs2_valid_o(rs2_used),
		.rd_valid_o(rd_used),
		.csr_wr_o(csr_wr),
		.csr_mret_o(csr_mret)
	);
	wire [31:0] i_immed;
	wire [31:0] s_immed;
	wire [31:0] b_immed;
	wire [31:0] u_immed;
	wire [31:0] j_immed;
	immed_gen i_immed_gen(
		.inst_i(inst_i),
		.i_immed_o(i_immed),
		.s_immed_o(s_immed),
		.b_immed_o(b_immed),
		.u_immed_o(u_immed),
		.j_immed_o(j_immed)
	);
	wire [4:0] rd_addr;
	assign rd_addr = inst_i[11:7];
	always @(posedge clk_i)
		if (!rst_ni) begin
			decode_state_o <= 1'sb0;
			reg_meta_o <= 1'sb0;
		end
		else if (!stage_ctrl_i[0]) begin
			valid_o <= valid_i & ~stage_ctrl_i[1];
			decode_state_o[265] <= pc_src;
			decode_state_o[264-:3] <= branch_op;
			decode_state_o[261-:4] <= alu_op;
			decode_state_o[257-:2] <= alu_a_src;
			decode_state_o[255-:2] <= alu_b_src;
			decode_state_o[253-:32] <= i_immed;
			decode_state_o[221-:32] <= s_immed;
			decode_state_o[189-:32] <= b_immed;
			decode_state_o[157-:32] <= u_immed;
			decode_state_o[125-:32] <= j_immed;
			decode_state_o[93-:32] <= fetch_state_i[63-:32];
			decode_state_o[61-:32] <= fetch_state_i[31-:32];
			decode_state_o[29] <= (rd_addr != {5 {1'sb0}}) && (rf_wr_en != 1'b0);
			decode_state_o[28-:2] <= rf_wr_src;
			decode_state_o[26] <= mem_read;
			decode_state_o[25] <= mem_write;
			decode_state_o[24] <= mem_sign;
			decode_state_o[23-:2] <= mem_width;
			decode_state_o[21] <= csr_wr;
			decode_state_o[20] <= csr_mret;
			decode_state_o[19-:12] <= inst_i[31:20];
			decode_state_o[7-:2] <= inst_i[13:12];
			decode_state_o[5-:5] <= inst_i[19:15];
			decode_state_o[0] <= inst_i[14];
			reg_meta_o[81] <= rs1_used;
			reg_meta_o[80-:5] <= inst_i[19:15];
			reg_meta_o[75-:32] <= rf_rs1_i;
			reg_meta_o[43] <= rs2_used;
			reg_meta_o[42-:5] <= inst_i[24:20];
			reg_meta_o[37-:32] <= rf_rs2_i;
			reg_meta_o[5] <= rd_used;
			reg_meta_o[4-:5] <= rd_addr;
		end
endmodule
