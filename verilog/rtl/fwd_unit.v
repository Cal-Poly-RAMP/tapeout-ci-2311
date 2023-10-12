module fwd_unit (
	ex_stage_i,
	mem_stage_i,
	dest_meta_i,
	load_use_stall_ao,
	dest_meta_o
);
	input wire [39:0] ex_stage_i;
	input wire [39:0] mem_stage_i;
	input wire [81:0] dest_meta_i;
	output reg load_use_stall_ao;
	output reg [81:0] dest_meta_o;
	wire rs1_lus;
	wire rs2_lus;
	wire [31:0] rs1_updated;
	wire [31:0] rs2_updated;
	reg_forwarder rs1_fwd_unit(
		.ex_stage_i(ex_stage_i),
		.mem_stage_i(mem_stage_i),
		.rs_i(dest_meta_i[80-:5]),
		.rs_data_i(dest_meta_i[75-:32]),
		.rs_used_i(dest_meta_i[81]),
		.rs_data_ao(rs1_updated),
		.load_use_hazard_ao(rs1_lus)
	);
	reg_forwarder rs2_fwd_unit(
		.ex_stage_i(ex_stage_i),
		.mem_stage_i(mem_stage_i),
		.rs_i(dest_meta_i[42-:5]),
		.rs_data_i(dest_meta_i[37-:32]),
		.rs_used_i(dest_meta_i[43]),
		.rs_data_ao(rs2_updated),
		.load_use_hazard_ao(rs2_lus)
	);
	always @(*) begin
		load_use_stall_ao = rs1_lus || rs2_lus;
		dest_meta_o = dest_meta_i;
		dest_meta_o[75-:32] = rs1_updated;
		dest_meta_o[37-:32] = rs2_updated;
	end
endmodule
