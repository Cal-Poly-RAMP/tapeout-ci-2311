module reg_forwarder (
	ex_stage_i,
	mem_stage_i,
	rs_i,
	rs_data_i,
	rs_used_i,
	rs_data_ao,
	load_use_hazard_ao
);
	input wire [39:0] ex_stage_i;
	input wire [39:0] mem_stage_i;
	input wire [4:0] rs_i;
	input wire [31:0] rs_data_i;
	input wire rs_used_i;
	output reg [31:0] rs_data_ao;
	output reg load_use_hazard_ao;
	reg mem_conflict;
	reg ex_conflict;
	reg mem_raw;
	reg ex_raw;
	reg [31:0] data_updated_mem;
	always @(*) begin
		mem_conflict = rs_i == mem_stage_i[36-:5];
		ex_conflict = rs_i == ex_stage_i[36-:5];
		mem_raw = ((mem_conflict && mem_stage_i[39]) && mem_stage_i[37]) && rs_used_i;
		ex_raw = ((ex_conflict && ex_stage_i[39]) && ex_stage_i[37]) && rs_used_i;
		data_updated_mem = (mem_raw ? mem_stage_i[31-:32] : rs_data_i);
		rs_data_ao = (ex_raw ? ex_stage_i[31-:32] : data_updated_mem);
		load_use_hazard_ao = ex_raw && ex_stage_i[38];
	end
endmodule
