module soc (
	clk_i,
	caravel_wb_rst_i,
	caravel_wbs_stb_i,
	caravel_wbs_cyc_i,
	caravel_wbs_we_i,
	caravel_wbs_sel_i,
	caravel_wbs_dat_i,
	caravel_wbs_adr_i,
	caravel_wbs_ack_o,
	caravel_wbs_dat_o,
	la_data_i,
	la_data_o,
	la_oe_no,
	gpio_i,
	gpio_o,
	gpio_oeb_no,
	caravel_interrupt_o
);
	input wire clk_i;
	input wire caravel_wb_rst_i;
	input wire caravel_wbs_stb_i;
	input wire caravel_wbs_cyc_i;
	input wire caravel_wbs_we_i;
	input wire [3:0] caravel_wbs_sel_i;
	input wire [31:0] caravel_wbs_dat_i;
	input wire [31:0] caravel_wbs_adr_i;
	output wire caravel_wbs_ack_o;
	output wire [31:0] caravel_wbs_dat_o;
	input wire [127:0] la_data_i;
	output reg [127:0] la_data_o;
	input wire [127:0] la_oe_no;
	input wire [37:0] gpio_i;
	output reg [37:0] gpio_o;
	output reg [37:0] gpio_oeb_no;
	output wire [2:0] caravel_interrupt_o;
	wire rst_n;
	reg rst_hard_n;
	assign rst_n = rst_hard_n;
	reg wishbone_enable;
	wire dmem_req;
	wire dmem_gnt;
	wire dmem_we;
	wire dmem_rvalid;
	wire [31:0] dmem_addr;
	wire [31:0] dmem_wdata;
	wire [31:0] dmem_rdata;
	wire [3:0] dmem_be;
	wire imem_req;
	wire imem_gnt;
	wire imem_we;
	wire imem_rvalid;
	wire [31:0] imem_addr;
	wire [31:0] imem_wdata;
	wire [31:0] imem_rdata;
	wire [3:0] imem_be;
	wire sram_d_req;
	wire sram_d_gnt;
	wire sram_d_we;
	wire sram_d_rvalid;
	wire [31:0] sram_d_addr;
	wire [31:0] sram_d_wdata;
	wire [31:0] sram_d_rdata;
	wire [3:0] sram_d_be;
	wire sram_i_req;
	wire sram_i_gnt;
	wire sram_i_we;
	wire sram_i_rvalid;
	wire [31:0] sram_i_addr;
	wire [31:0] sram_i_wdata;
	wire [31:0] sram_i_rdata;
	wire [3:0] sram_i_be;
	wire peripheral_req;
	wire peripheral_gnt;
	wire peripheral_we;
	wire peripheral_rvalid;
	wire [31:0] peripheral_addr;
	wire [31:0] peripheral_wdata;
	wire [31:0] peripheral_rdata;
	wire [3:0] peripheral_be;
	wire flash_req;
	wire flash_gnt;
	wire flash_we;
	wire flash_rvalid;
	wire [31:0] flash_addr;
	wire [31:0] flash_wdata;
	wire [31:0] flash_rdata;
	wire [3:0] flash_be;
	wire caravel_req;
	wire caravel_gnt;
	wire caravel_we;
	wire caravel_rvalid;
	wire [31:0] caravel_addr;
	wire [31:0] caravel_wdata;
	wire [31:0] caravel_rdata;
	wire [3:0] caravel_be;
	wire sram_d_muxed_req;
	wire sram_d_muxed_gnt;
	wire sram_d_muxed_we;
	wire sram_d_muxed_rvalid;
	wire [31:0] sram_d_muxed_addr;
	wire [31:0] sram_d_muxed_wdata;
	wire [31:0] sram_d_muxed_rdata;
	wire [3:0] sram_d_muxed_be;
	wire [4:0] rf_port1_reg;
	wire [4:0] rf_port2_reg;
	wire [4:0] rf_wr_reg;
	wire [31:0] rf_rs1;
	wire [31:0] rf_rs2;
	wire [31:0] rf_wr_data;
	wire rf_wr_en;
	reg timer_intr;
	wire p_int_read;
	wire csr_busy;
	reg hard_int;
	reg logic_int;
	wire [30:0] mcause;
	assign mcause[30:1] = 1'sb0;
	assign mcause[0] = logic_int;
	wire boot_sel;
	core i_core(
		.clk_i(clk_i),
		.rst_ni(rst_n),
		.timer_intr_i(timer_intr),
		.m_ext_intr_i(hard_int || logic_int),
		.mcause_i(mcause[30:0]),
		.p_int_read_o(p_int_read),
		.csr_busy_o(csr_busy),
		.boot_sel_i(boot_sel),
		.imem_gnt_i(imem_gnt),
		.imem_rdata_i(imem_rdata),
		.imem_rvalid_i(imem_rvalid),
		.imem_addr_o(imem_addr),
		.imem_we_o(imem_we),
		.imem_req_o(imem_req),
		.imem_be_o(imem_be),
		.imem_wdata_o(imem_wdata),
		.dmem_gnt_i(dmem_gnt),
		.dmem_rdata_i(dmem_rdata),
		.dmem_rvalid_i(dmem_rvalid),
		.dmem_addr_o(dmem_addr),
		.dmem_we_o(dmem_we),
		.dmem_req_o(dmem_req),
		.dmem_be_o(dmem_be),
		.dmem_wdata_o(dmem_wdata),
		.rf_port1_reg_o(rf_port1_reg),
		.rf_port2_reg_o(rf_port2_reg),
		.rf_wr_en_o(rf_wr_en),
		.rf_wr_reg_o(rf_wr_reg),
		.rf_wr_data_o(rf_wr_data),
		.rf_rs1_i(rf_rs1),
		.rf_rs2_i(rf_rs2)
	);
	reg_file i_reg_file(
		.clk_i(clk_i),
		.read1_i(rf_port1_reg),
		.read2_i(rf_port2_reg),
		.wr_reg_i(rf_wr_reg),
		.wr_data_i(rf_wr_data),
		.wr_en_i(rf_wr_en),
		.data1_ao(rf_rs1),
		.data2_ao(rf_rs2)
	);
	wire illegal_access;
	wire miu_illegal;
	wire sram_illegal;
	wire caravel_illegal;
	wire flash_illegal;
	wire gpio_illegal;
	reg boot_sel_hard;
	reg boot_sel_soft;
	reg copy_boot_sel;
	assign illegal_access = (((miu_illegal || sram_illegal) || caravel_illegal) || flash_illegal) || gpio_illegal;
	memory_interface_unit i_memory_interface_unit(
		.clk_i(clk_i),
		.rst_ni(rst_n),
		.dmem_req_i(dmem_req),
		.dmem_gnt_o(dmem_gnt),
		.dmem_addr_i(dmem_addr),
		.dmem_we_i(dmem_we),
		.dmem_be_i(dmem_be),
		.dmem_wdata_i(dmem_wdata),
		.dmem_rvalid_o(dmem_rvalid),
		.dmem_rdata_o(dmem_rdata),
		.imem_req_i(imem_req),
		.imem_gnt_o(imem_gnt),
		.imem_addr_i(imem_addr),
		.imem_we_i(imem_we),
		.imem_be_i(imem_be),
		.imem_wdata_i(imem_wdata),
		.imem_rvalid_o(imem_rvalid),
		.imem_rdata_o(imem_rdata),
		.sram_d_req_o(sram_d_req),
		.sram_d_gnt_i(sram_d_gnt),
		.sram_d_addr_o(sram_d_addr),
		.sram_d_we_o(sram_d_we),
		.sram_d_be_o(sram_d_be),
		.sram_d_wdata_o(sram_d_wdata),
		.sram_d_rvalid_i(sram_d_rvalid),
		.sram_d_rdata_i(sram_d_rdata),
		.sram_i_req_o(sram_i_req),
		.sram_i_gnt_i(sram_i_gnt),
		.sram_i_addr_o(sram_i_addr),
		.sram_i_we_o(sram_i_we),
		.sram_i_be_o(sram_i_be),
		.sram_i_wdata_o(sram_i_wdata),
		.sram_i_rvalid_i(sram_i_rvalid),
		.sram_i_rdata_i(sram_i_rdata),
		.peripheral_req_o(peripheral_req),
		.peripheral_gnt_i(peripheral_gnt),
		.peripheral_addr_o(peripheral_addr),
		.peripheral_we_o(peripheral_we),
		.peripheral_be_o(peripheral_be),
		.peripheral_wdata_o(peripheral_wdata),
		.peripheral_rvalid_i(peripheral_rvalid),
		.peripheral_rdata_i(peripheral_rdata),
		.flash_req_o(flash_req),
		.flash_gnt_i(flash_gnt),
		.flash_addr_o(flash_addr),
		.flash_we_o(flash_we),
		.flash_be_o(flash_be),
		.flash_wdata_o(flash_wdata),
		.flash_rvalid_i(flash_rvalid),
		.flash_rdata_i(flash_rdata),
		.copy_flash_i(copy_boot_sel),
		.illegal_access_o(miu_illegal)
	);
	assign boot_sel = (boot_sel_hard == BOOT_NORMAL ? BOOT_NORMAL : boot_sel_soft);
	wb_to_obi i_SRAM_adapter(
		.clk_i(clk_i),
		.wb_rst_i(caravel_wb_rst_i),
		.wbs_stb_i(caravel_wbs_stb_i),
		.wbs_cyc_i(caravel_wbs_cyc_i),
		.wbs_we_i(caravel_wbs_we_i),
		.wbs_sel_i(caravel_wbs_sel_i),
		.wbs_dat_i(caravel_wbs_dat_i),
		.wbs_adr_i(caravel_wbs_adr_i),
		.wbs_ack_o(caravel_wbs_ack_o),
		.wbs_dat_o(caravel_wbs_dat_o),
		.req_o(caravel_req),
		.gnt_i(caravel_gnt && wishbone_enable),
		.addr_o(caravel_addr),
		.we_o(caravel_we),
		.be_o(caravel_be),
		.wdata_o(caravel_wdata),
		.rvalid_i(caravel_rvalid && wishbone_enable),
		.rdata_i(caravel_rdata)
	);
	reg [31:0] caravel_addr_updated;
	always @(*)
		if ((caravel_addr >= 32'h30000000) && (caravel_addr < 32'h80000000))
			caravel_addr_updated = {4'h8, caravel_addr[27:0]};
		else
			caravel_addr_updated = caravel_addr;
	obi_mux_2_to_1 i_caravel_obi_mux(
		.clk_i(clk_i),
		.rst_ni(rst_n),
		.pri_req_i(caravel_req && wishbone_enable),
		.pri_gnt_o(caravel_gnt),
		.pri_addr_i(caravel_addr_updated),
		.pri_we_i(caravel_we),
		.pri_be_i(caravel_be),
		.pri_wdata_i(caravel_wdata),
		.pri_rvalid_o(caravel_rvalid),
		.pri_rdata_o(caravel_rdata),
		.sec_req_i(sram_d_req),
		.sec_gnt_o(sram_d_gnt),
		.sec_addr_i(sram_d_addr),
		.sec_we_i(sram_d_we),
		.sec_be_i(sram_d_be),
		.sec_wdata_i(sram_d_wdata),
		.sec_rvalid_o(sram_d_rvalid),
		.sec_rdata_o(sram_d_rdata),
		.shr_req_o(sram_d_muxed_req),
		.shr_gnt_i(sram_d_muxed_gnt),
		.shr_addr_o(sram_d_muxed_addr),
		.shr_we_o(sram_d_muxed_we),
		.shr_be_o(sram_d_muxed_be),
		.shr_wdata_o(sram_d_muxed_wdata),
		.shr_rvalid_i(sram_d_muxed_rvalid),
		.shr_rdata_i(sram_d_muxed_rdata),
		.bad_state_o(caravel_illegal)
	);
	sram_wrap sram(
		.clk_i(clk_i),
		.rst_ni(rst_n),
		.sram_d_req_i(sram_d_muxed_req),
		.sram_d_gnt_o(sram_d_muxed_gnt),
		.sram_d_addr_i(sram_d_muxed_addr),
		.sram_d_we_i(sram_d_muxed_we),
		.sram_d_be_i(sram_d_muxed_be),
		.sram_d_wdata_i(sram_d_muxed_wdata),
		.sram_d_rvalid_o(sram_d_muxed_rvalid),
		.sram_d_rdata_o(sram_d_muxed_rdata),
		.sram_i_req_i(sram_i_req),
		.sram_i_gnt_o(sram_i_gnt),
		.sram_i_addr_i(sram_i_addr),
		.sram_i_we_i(sram_i_we),
		.sram_i_be_i(sram_i_be),
		.sram_i_wdata_i(sram_i_wdata),
		.sram_i_rvalid_o(sram_i_rvalid),
		.sram_i_rdata_o(sram_i_rdata),
		.illegal_memory_o(sram_illegal)
	);
	wire qspi_sck;
	wire qspi_cs_n;
	wire [3:0] qspi_dat_out;
	reg [3:0] qspi_dat_in;
	wire [3:0] qspi_oe;
	obi_qspi_controller obi_qspi_controller_inst(
		.clk_i(clk_i),
		.rst_ni(rst_n),
		.obi_req_i(flash_req),
		.obi_gnt_o(flash_gnt),
		.obi_addr_i(flash_addr),
		.obi_we_i(flash_we),
		.obi_be_i(flash_be),
		.obi_wdata_i(flash_wdata),
		.obi_rvalid_o(flash_rvalid),
		.obi_rdata_o(flash_rdata),
		.flash_csb_o(qspi_cs_n),
		.flash_clk_o(qspi_sck),
		.flash_io0_oe_o(qspi_oe[0]),
		.flash_io1_oe_o(qspi_oe[1]),
		.flash_io2_oe_o(qspi_oe[2]),
		.flash_io3_oe_o(qspi_oe[3]),
		.flash_io0_data_o(qspi_dat_out[0]),
		.flash_io1_data_o(qspi_dat_out[1]),
		.flash_io2_data_o(qspi_dat_out[2]),
		.flash_io3_data_o(qspi_dat_out[3]),
		.flash_io0_data_i(qspi_dat_in[0]),
		.flash_io1_data_i(qspi_dat_in[1]),
		.flash_io2_data_i(qspi_dat_in[2]),
		.flash_io3_data_i(qspi_dat_in[3]),
		.illegal_write_o(flash_illegal)
	);
	localparam NUM_GPIO_PINS = 28;
	wire [27:0] gpio_af;
	wire [37:10] gpio_periph_oe;
	wire [37:10] gpio_periph_o;
	obi_gpio #(.NUM_PINS(NUM_GPIO_PINS)) i_gpio(
		.clk_i(clk_i),
		.rst_ni(rst_n),
		.obi_req_i(peripheral_req),
		.obi_gnt_o(peripheral_gnt),
		.obi_addr_i(peripheral_addr),
		.obi_we_i(peripheral_we),
		.obi_be_i(peripheral_be),
		.obi_wdata_i(peripheral_wdata),
		.obi_rvalid_o(peripheral_rvalid),
		.obi_rdata_o(peripheral_rdata),
		.gpio_oe_e(gpio_periph_oe),
		.gpio_af_o(gpio_af),
		.gpio_dat_o(gpio_periph_o),
		.gpio_dat_i(gpio_i[37:10]),
		.illegal_write_o(gpio_illegal)
	);
	always @(*) begin : gpio_assignment
		gpio_oeb_no = {38 {1'b1}};
		gpio_o = 1'sb0;
		gpio_o[0] = qspi_sck;
		gpio_o[1] = qspi_cs_n;
		gpio_o[5:2] = qspi_dat_out;
		qspi_dat_in = gpio_i[5:2];
		gpio_oeb_no[1:0] = 'b0;
		gpio_oeb_no[5:2] = qspi_oe;
		boot_sel_hard = (gpio_i[6] ? BOOT_FAILSAFE : BOOT_NORMAL);
		gpio_oeb_no[6] = 1'sb1;
		rst_hard_n = gpio_i[7];
		gpio_oeb_no[7] = 1'sb1;
		copy_boot_sel = gpio_i[8];
		gpio_oeb_no[8] = 1'sb1;
		hard_int = gpio_i[9];
		gpio_oeb_no[9] = 1'sb1;
		gpio_o[37:10] = gpio_periph_o;
		gpio_oeb_no[37:10] = gpio_periph_oe;
	end
	reg snoop_sel;
	always @(*) begin : logic_analyzer_assignment
		la_data_o = {128 {1'b1}};
		boot_sel_soft = (la_data_i[0] ? BOOT_FAILSAFE : BOOT_NORMAL);
		wishbone_enable = la_data_i[2];
		snoop_sel = la_data_i[107];
		la_data_o[34:3] = (snoop_sel ? dmem_addr : imem_addr);
		la_data_o[35] = (snoop_sel ? dmem_req : imem_req);
		la_data_o[36] = (snoop_sel ? dmem_gnt : imem_gnt);
		la_data_o[37] = (snoop_sel ? dmem_we : imem_we);
		la_data_o[41:38] = (snoop_sel ? dmem_be : imem_be);
		la_data_o[42] = (snoop_sel ? dmem_rvalid : imem_rvalid);
		la_data_o[74:43] = (snoop_sel ? dmem_rdata : imem_rdata);
		la_data_o[106:75] = dmem_wdata;
		la_data_o[108] = csr_busy;
		la_data_o[109] = p_int_read;
		timer_intr = la_data_i[110];
		logic_int = la_data_i[111];
	end
	assign caravel_interrupt_o = 'b0;
endmodule
