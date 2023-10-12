module core (
	clk_i,
	rst_ni,
	timer_intr_i,
	m_ext_intr_i,
	mcause_i,
	p_int_read_o,
	csr_busy_o,
	boot_sel_i,
	imem_req_o,
	imem_gnt_i,
	imem_addr_o,
	imem_we_o,
	imem_be_o,
	imem_wdata_o,
	imem_rvalid_i,
	imem_rdata_i,
	rf_port1_reg_o,
	rf_port2_reg_o,
	rf_wr_en_o,
	rf_wr_reg_o,
	rf_wr_data_o,
	rf_rs1_i,
	rf_rs2_i,
	dmem_req_o,
	dmem_gnt_i,
	dmem_addr_o,
	dmem_we_o,
	dmem_be_o,
	dmem_wdata_o,
	dmem_rvalid_i,
	dmem_rdata_i
);
	input clk_i;
	input rst_ni;
	input timer_intr_i;
	input m_ext_intr_i;
	input [30:0] mcause_i;
	output wire p_int_read_o;
	output wire csr_busy_o;
	input boot_sel_i;
	output wire imem_req_o;
	input wire imem_gnt_i;
	output wire [31:0] imem_addr_o;
	output wire imem_we_o;
	output wire [3:0] imem_be_o;
	output wire [31:0] imem_wdata_o;
	input wire imem_rvalid_i;
	input wire [31:0] imem_rdata_i;
	output wire [4:0] rf_port1_reg_o;
	output wire [4:0] rf_port2_reg_o;
	output wire rf_wr_en_o;
	output wire [4:0] rf_wr_reg_o;
	output wire [31:0] rf_wr_data_o;
	input [31:0] rf_rs1_i;
	input [31:0] rf_rs2_i;
	output wire dmem_req_o;
	input wire dmem_gnt_i;
	output wire [31:0] dmem_addr_o;
	output wire dmem_we_o;
	output wire [3:0] dmem_be_o;
	output wire [31:0] dmem_wdata_o;
	input wire dmem_rvalid_i;
	input wire [31:0] dmem_rdata_i;
	wire [63:0] fetch_state;
	wire [265:0] decode_state;
	wire [102:0] exec_state;
	wire [134:0] mem_state;
	wire [1:0] fetch_ctrl;
	wire [1:0] decode_ctrl;
	wire [1:0] exec_ctrl;
	wire [1:0] mem_ctrl;
	wire [1:0] wb_ctrl;
	wire [81:0] decode_reg_meta;
	wire [81:0] decode_reg_meta_updated;
	wire [81:0] exec_reg_meta;
	wire [81:0] mem_reg_meta;
	wire fetch_valid;
	wire decode_valid;
	wire exec_valid;
	wire mem_valid;
	wire load_use_stall;
	wire csr_hold;
	wire imem_stall;
	wire dmem_stall;
	wire branch_taken;
	wire [39:0] mem_fwd_data;
	wire [39:0] wb_fwd_data;
	wire pc_target_sel;
	wire pc_intr_sel;
	wire [31:0] pc_target_addr;
	wire [31:0] pc_intr_addr;
	wire [31:0] pre_intr_pc;
	fetch_stage i_fetch_stage(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.boot_sel_i(boot_sel_i),
		.target_sel_i(pc_target_sel),
		.target_addr_i(pc_target_addr),
		.intr_sel_i(pc_intr_sel),
		.intr_addr_i(pc_intr_addr),
		.stage_ctrl_i(fetch_ctrl),
		.branch_desync_i(imem_stall),
		.branch_taken_o(branch_taken),
		.mem_addr_o(imem_addr_o),
		.valid_o(fetch_valid),
		.fetch_state_o(fetch_state),
		.pre_intr_pc_o(pre_intr_pc)
	);
	decode_stage i_decode_stage(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.valid_i(fetch_valid),
		.fetch_state_i(fetch_state),
		.inst_i(imem_rdata_i),
		.stage_ctrl_i(decode_ctrl),
		.rf_port1_reg_o(rf_port1_reg_o),
		.rf_port2_reg_o(rf_port2_reg_o),
		.rf_rs1_i(rf_rs1_i),
		.rf_rs2_i(rf_rs2_i),
		.valid_o(decode_valid),
		.decode_state_o(decode_state),
		.reg_meta_o(decode_reg_meta)
	);
	wire [31:0] csr_out;
	wire dmem_rd;
	wire dmem_wr;
	exec_stage i_exec_stage(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.valid_i(decode_valid),
		.decode_state_i(decode_state),
		.reg_meta_i(decode_reg_meta_updated),
		.csr_read_i(csr_out),
		.stage_ctrl_i(exec_ctrl),
		.target_sel_o(pc_target_sel),
		.target_addr_o(pc_target_addr),
		.valid_o(exec_valid),
		.exec_state_o(exec_state),
		.reg_meta_o(exec_reg_meta),
		.mem_read_ao(dmem_rd),
		.mem_write_ao(dmem_wr),
		.mem_strb_ao(dmem_be_o),
		.mem_addr_ao(dmem_addr_o),
		.mem_data_ao(dmem_wdata_o)
	);
	mem_slice_stage i_mem_slice_stage(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.valid_i(exec_valid),
		.exec_state_i(exec_state),
		.reg_meta_i(exec_reg_meta),
		.stage_ctrl_i(mem_ctrl),
		.dmem_rdata_i(dmem_rdata_i),
		.data_fwd_oa(mem_fwd_data),
		.valid_o(mem_valid),
		.mem_state_o(mem_state),
		.reg_meta_o(mem_reg_meta)
	);
	wb_stage i_wb_stage(
		.valid_i(mem_valid),
		.mem_state_i(mem_state),
		.reg_meta_i(mem_reg_meta),
		.stage_ctrl_i(wb_ctrl),
		.data_fwd_oa(wb_fwd_data),
		.rf_wr_en_oa(rf_wr_en_o),
		.rf_wr_reg_oa(rf_wr_reg_o),
		.rf_wr_data_oa(rf_wr_data_o)
	);
	wire csr_flush;
	csr i_csr(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.csr_wr_i(decode_state[21]),
		.addr_i(decode_state[19-:12]),
		.mode_sel_i(decode_state[7-:2]),
		.immed_i(decode_state[5-:5]),
		.immed_sel_i(decode_state[0]),
		.mcause_i(mcause_i),
		.rs1(decode_reg_meta_updated[75-:32]),
		.csr_data_o(csr_out),
		.timer_intr_i(timer_intr_i),
		.m_ext_intr_i(m_ext_intr_i),
		.stall_i(load_use_stall),
		.mret_i(decode_state[20]),
		.pcSource(pc_target_sel),
		.next_pc(pre_intr_pc),
		.pc_intr_addr(pc_intr_addr),
		.pc_intr_sel(pc_intr_sel),
		.csr_flush_o(csr_flush),
		.csr_hold_i(csr_hold),
		.p_int_read_o(p_int_read_o),
		.csr_busy_o(csr_busy_o)
	);
	fwd_unit i_fwd_unit(
		.ex_stage_i(mem_fwd_data),
		.mem_stage_i(wb_fwd_data),
		.dest_meta_i(decode_reg_meta),
		.load_use_stall_ao(load_use_stall),
		.dest_meta_o(decode_reg_meta_updated)
	);
	localparam [0:0] sv2v_uu_i_imem_obi_driver_ext_rd_i_1 = 1'sb1;
	localparam [0:0] sv2v_uu_i_imem_obi_driver_ext_wr_i_0 = 1'sb0;
	obi_req_driver i_imem_obi_driver(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rd_i(sv2v_uu_i_imem_obi_driver_ext_rd_i_1),
		.wr_i(sv2v_uu_i_imem_obi_driver_ext_wr_i_0),
		.gnt_i(imem_gnt_i),
		.rvalid_i(imem_rvalid_i),
		.stall_o(imem_stall),
		.req_o(imem_req_o)
	);
	obi_req_driver i_dmem_obi_driver(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rd_i(dmem_rd),
		.wr_i(dmem_wr),
		.gnt_i(dmem_gnt_i),
		.rvalid_i(dmem_rvalid_i),
		.stall_o(dmem_stall),
		.req_o(dmem_req_o)
	);
	hazard_unit i_hazard_unit(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.imem_stall_i(imem_stall),
		.dmem_stall_i(dmem_stall),
		.branch_taken_i(branch_taken),
		.csr_mret_i(decode_state[20]),
		.csr_flush_i(csr_flush),
		.load_use_stall_i(load_use_stall),
		.fetch_ctrl_ao(fetch_ctrl),
		.decode_ctrl_ao(decode_ctrl),
		.execute_ctrl_ao(exec_ctrl),
		.memory_ctrl_ao(mem_ctrl),
		.writeback_ctrl_ao(wb_ctrl),
		.csr_hold_o(csr_hold)
	);
	assign imem_we_o = 1'sb0;
	assign imem_be_o = 1'sb0;
	assign imem_wdata_o = 1'sb0;
	assign dmem_we_o = dmem_wr;
endmodule
