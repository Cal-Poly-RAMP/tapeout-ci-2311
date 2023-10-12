module fetch_stage (
	clk_i,
	rst_ni,
	boot_sel_i,
	target_sel_i,
	intr_sel_i,
	target_addr_i,
	intr_addr_i,
	branch_desync_i,
	branch_taken_o,
	stage_ctrl_i,
	mem_addr_o,
	valid_o,
	fetch_state_o,
	pre_intr_pc_o
);
	input clk_i;
	input rst_ni;
	input boot_sel_i;
	input target_sel_i;
	input intr_sel_i;
	input [31:0] target_addr_i;
	input [31:0] intr_addr_i;
	input branch_desync_i;
	output wire branch_taken_o;
	input wire [1:0] stage_ctrl_i;
	output wire [31:0] mem_addr_o;
	output reg valid_o;
	output reg [63:0] fetch_state_o;
	output reg [31:0] pre_intr_pc_o;
	reg [31:0] pc_next;
	wire [31:0] pc_out;
	wire [31:0] pc_plus_4;
	reg [31:0] target_saved;
	wire [31:0] target_addr;
	reg branch_ctrl_saved;
	reg target_sel_saved;
	wire target_sel;
	assign pc_plus_4 = pc_out + 4;
	assign target_sel = (branch_ctrl_saved ? target_sel_saved : target_sel_i);
	assign target_addr = (branch_ctrl_saved ? target_saved : target_addr_i);
	assign branch_taken_o = target_sel || intr_sel_i;
	always @(*)
		case (target_sel)
			1'd0: pre_intr_pc_o = pc_plus_4;
			1'd1: pre_intr_pc_o = target_addr;
			default: pre_intr_pc_o = pc_plus_4;
		endcase
	always @(*)
		case (intr_sel_i)
			1'd0: pc_next = pre_intr_pc_o;
			1'd1: pc_next = intr_addr_i;
			default: pc_next = pre_intr_pc_o;
		endcase
	always @(posedge clk_i)
		if (!rst_ni) begin
			target_saved <= 1'sb0;
			target_sel_saved <= 1'sb0;
			branch_ctrl_saved <= 1'sb0;
		end
		else if (!stage_ctrl_i[0])
			branch_ctrl_saved <= 1'sb0;
		else if (branch_desync_i && !branch_ctrl_saved) begin
			target_saved <= target_addr_i;
			target_sel_saved <= target_sel_i;
			branch_ctrl_saved <= 1'sb1;
		end
	prog_cntr i_prog_cntr(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.boot_sel_i(boot_sel_i),
		.stall_i(stage_ctrl_i[0]),
		.next_pc_i(pc_next),
		.pc_o(pc_out)
	);
	assign mem_addr_o = pc_out;
	always @(posedge clk_i)
		if (!rst_ni) begin
			valid_o <= 1'sb0;
			fetch_state_o[63-:32] <= 1'sb0;
			fetch_state_o[31-:32] <= 1'sb0;
		end
		else if (!stage_ctrl_i[0]) begin
			valid_o <= ~stage_ctrl_i[1];
			fetch_state_o[63-:32] <= pc_out;
			fetch_state_o[31-:32] <= pc_plus_4;
		end
endmodule
