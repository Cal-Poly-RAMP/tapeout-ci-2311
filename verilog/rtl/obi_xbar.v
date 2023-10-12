module obi_xbar (
	clk_i,
	rst_ni,
	dmem_req_i,
	dmem_gnt_o,
	dmem_addr_i,
	dmem_we_i,
	dmem_be_i,
	dmem_wdata_i,
	dmem_rvalid_o,
	dmem_rdata_o,
	imem_req_i,
	imem_gnt_o,
	imem_addr_i,
	imem_we_i,
	imem_be_i,
	imem_wdata_i,
	imem_rvalid_o,
	imem_rdata_o,
	sram_d_req_o,
	sram_d_gnt_i,
	sram_d_addr_o,
	sram_d_we_o,
	sram_d_be_o,
	sram_d_wdata_o,
	sram_d_rvalid_i,
	sram_d_rdata_i,
	sram_i_req_o,
	sram_i_gnt_i,
	sram_i_addr_o,
	sram_i_we_o,
	sram_i_be_o,
	sram_i_wdata_o,
	sram_i_rvalid_i,
	sram_i_rdata_i,
	btld_d_req_o,
	btld_d_gnt_i,
	btld_d_addr_o,
	btld_d_we_o,
	btld_d_be_o,
	btld_d_wdata_o,
	btld_d_rvalid_i,
	btld_d_rdata_i,
	btld_i_req_o,
	btld_i_gnt_i,
	btld_i_addr_o,
	btld_i_we_o,
	btld_i_be_o,
	btld_i_wdata_o,
	btld_i_rvalid_i,
	btld_i_rdata_i,
	peripheral_req_o,
	peripheral_gnt_i,
	peripheral_addr_o,
	peripheral_we_o,
	peripheral_be_o,
	peripheral_wdata_o,
	peripheral_rvalid_i,
	peripheral_rdata_i,
	flash_req_o,
	flash_gnt_i,
	flash_addr_o,
	flash_we_o,
	flash_be_o,
	flash_wdata_o,
	flash_rvalid_i,
	flash_rdata_i,
	illegal_access_o
);
	parameter BOOTLOADER_BASE_ADDR = 32'h00001000;
	parameter BOOTLOADER_END_ADDR = 32'h00001fff;
	parameter SRAM_BASE_ADDR = 32'h80000000;
	parameter SRAM_END_ADDR = 32'h8000ffff;
	parameter FLASH_BASE_ADDR = 32'h20000000;
	parameter FLASH_END_ADDR = 32'h3fffffff;
	parameter PERIPHERAL_BASE_ADDR = 32'h10000000;
	parameter PERIPHERAL_END_ADDR = 32'h10001fff;
	input wire clk_i;
	input wire rst_ni;
	input wire dmem_req_i;
	output wire dmem_gnt_o;
	input wire [31:0] dmem_addr_i;
	input wire dmem_we_i;
	input wire [3:0] dmem_be_i;
	input wire [31:0] dmem_wdata_i;
	output wire dmem_rvalid_o;
	output wire [31:0] dmem_rdata_o;
	input wire imem_req_i;
	output wire imem_gnt_o;
	input wire [31:0] imem_addr_i;
	input wire imem_we_i;
	input wire [3:0] imem_be_i;
	input wire [31:0] imem_wdata_i;
	output wire imem_rvalid_o;
	output wire [31:0] imem_rdata_o;
	output wire sram_d_req_o;
	input wire sram_d_gnt_i;
	output wire [31:0] sram_d_addr_o;
	output wire sram_d_we_o;
	output wire [3:0] sram_d_be_o;
	output wire [31:0] sram_d_wdata_o;
	input wire sram_d_rvalid_i;
	input wire [31:0] sram_d_rdata_i;
	output wire sram_i_req_o;
	input wire sram_i_gnt_i;
	output wire [31:0] sram_i_addr_o;
	output wire sram_i_we_o;
	output wire [3:0] sram_i_be_o;
	output wire [31:0] sram_i_wdata_o;
	input wire sram_i_rvalid_i;
	input wire [31:0] sram_i_rdata_i;
	output wire btld_d_req_o;
	input wire btld_d_gnt_i;
	output wire [31:0] btld_d_addr_o;
	output wire btld_d_we_o;
	output wire [3:0] btld_d_be_o;
	output wire [31:0] btld_d_wdata_o;
	input wire btld_d_rvalid_i;
	input wire [31:0] btld_d_rdata_i;
	output wire btld_i_req_o;
	input wire btld_i_gnt_i;
	output wire [31:0] btld_i_addr_o;
	output wire btld_i_we_o;
	output wire [3:0] btld_i_be_o;
	output wire [31:0] btld_i_wdata_o;
	input wire btld_i_rvalid_i;
	input wire [31:0] btld_i_rdata_i;
	output wire peripheral_req_o;
	input wire peripheral_gnt_i;
	output wire [31:0] peripheral_addr_o;
	output wire peripheral_we_o;
	output wire [3:0] peripheral_be_o;
	output wire [31:0] peripheral_wdata_o;
	input wire peripheral_rvalid_i;
	input wire [31:0] peripheral_rdata_i;
	output wire flash_req_o;
	input wire flash_gnt_i;
	output wire [31:0] flash_addr_o;
	output wire flash_we_o;
	output wire [3:0] flash_be_o;
	output wire [31:0] flash_wdata_o;
	input wire flash_rvalid_i;
	input wire [31:0] flash_rdata_i;
	output wire illegal_access_o;
	wire imem_invalid;
	wire dmem_invalid;
	wire flash_invalid;
	wire periph_invalid;
	wire per_d_req;
	wire per_d_gnt;
	wire per_d_we;
	wire per_d_rvalid;
	wire [31:0] per_d_addr;
	wire [31:0] per_d_wdata;
	wire [31:0] per_d_rdata;
	wire [3:0] per_d_be;
	wire per_i_req;
	wire per_i_gnt;
	wire per_i_we;
	wire per_i_rvalid;
	wire [31:0] per_i_addr;
	wire [31:0] per_i_wdata;
	wire [31:0] per_i_rdata;
	wire [3:0] per_i_be;
	wire flash_d_req;
	wire flash_d_gnt;
	wire flash_d_we;
	wire flash_d_rvalid;
	wire [31:0] flash_d_addr;
	wire [31:0] flash_d_wdata;
	wire [31:0] flash_d_rdata;
	wire [3:0] flash_d_be;
	wire flash_i_req;
	wire flash_i_gnt;
	wire flash_i_we;
	wire flash_i_rvalid;
	wire [31:0] flash_i_addr;
	wire [31:0] flash_i_wdata;
	wire [31:0] flash_i_rdata;
	wire [3:0] flash_i_be;
	obi_demux_1_to_4 #(
		.PORT1_BASE_ADDR(BOOTLOADER_BASE_ADDR),
		.PORT1_END_ADDR(BOOTLOADER_END_ADDR),
		.PORT2_BASE_ADDR(SRAM_BASE_ADDR),
		.PORT2_END_ADDR(SRAM_END_ADDR),
		.PORT3_BASE_ADDR(FLASH_BASE_ADDR),
		.PORT3_END_ADDR(FLASH_END_ADDR),
		.PORT4_BASE_ADDR(PERIPHERAL_BASE_ADDR),
		.PORT4_END_ADDR(PERIPHERAL_END_ADDR)
	) dmem_demux(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.ctrl_req_i(dmem_req_i),
		.ctrl_gnt_o(dmem_gnt_o),
		.ctrl_addr_i(dmem_addr_i),
		.ctrl_we_i(dmem_we_i),
		.ctrl_be_i(dmem_be_i),
		.ctrl_wdata_i(dmem_wdata_i),
		.ctrl_rvalid_o(dmem_rvalid_o),
		.ctrl_rdata_o(dmem_rdata_o),
		.port1_req_o(btld_d_req_o),
		.port1_gnt_i(btld_d_gnt_i),
		.port1_addr_o(btld_d_addr_o),
		.port1_we_o(btld_d_we_o),
		.port1_be_o(btld_d_be_o),
		.port1_wdata_o(btld_d_wdata_o),
		.port1_rvalid_i(btld_d_rvalid_i),
		.port1_rdata_i(btld_d_rdata_i),
		.port2_req_o(sram_d_req_o),
		.port2_gnt_i(sram_d_gnt_i),
		.port2_addr_o(sram_d_addr_o),
		.port2_we_o(sram_d_we_o),
		.port2_be_o(sram_d_be_o),
		.port2_wdata_o(sram_d_wdata_o),
		.port2_rvalid_i(sram_d_rvalid_i),
		.port2_rdata_i(sram_d_rdata_i),
		.port3_req_o(flash_d_req),
		.port3_gnt_i(flash_d_gnt),
		.port3_addr_o(flash_d_addr),
		.port3_we_o(flash_d_we),
		.port3_be_o(flash_d_be),
		.port3_wdata_o(flash_d_wdata),
		.port3_rvalid_i(flash_d_rvalid),
		.port3_rdata_i(flash_d_rdata),
		.port4_req_o(per_d_req),
		.port4_gnt_i(per_d_gnt),
		.port4_addr_o(per_d_addr),
		.port4_we_o(per_d_we),
		.port4_be_o(per_d_be),
		.port4_wdata_o(per_d_wdata),
		.port4_rvalid_i(per_d_rvalid),
		.port4_rdata_i(per_d_rdata),
		.bad_state_o(dmem_invalid)
	);
	obi_demux_1_to_4 #(
		.PORT1_BASE_ADDR(BOOTLOADER_BASE_ADDR),
		.PORT1_END_ADDR(BOOTLOADER_END_ADDR),
		.PORT2_BASE_ADDR(SRAM_BASE_ADDR),
		.PORT2_END_ADDR(SRAM_END_ADDR),
		.PORT3_BASE_ADDR(FLASH_BASE_ADDR),
		.PORT3_END_ADDR(FLASH_END_ADDR),
		.PORT4_BASE_ADDR(PERIPHERAL_BASE_ADDR),
		.PORT4_END_ADDR(PERIPHERAL_END_ADDR)
	) imem_demux(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.ctrl_req_i(imem_req_i),
		.ctrl_gnt_o(imem_gnt_o),
		.ctrl_addr_i(imem_addr_i),
		.ctrl_we_i(imem_we_i),
		.ctrl_be_i(imem_be_i),
		.ctrl_wdata_i(imem_wdata_i),
		.ctrl_rvalid_o(imem_rvalid_o),
		.ctrl_rdata_o(imem_rdata_o),
		.port1_req_o(btld_i_req_o),
		.port1_gnt_i(btld_i_gnt_i),
		.port1_addr_o(btld_i_addr_o),
		.port1_we_o(btld_i_we_o),
		.port1_be_o(btld_i_be_o),
		.port1_wdata_o(btld_i_wdata_o),
		.port1_rvalid_i(btld_i_rvalid_i),
		.port1_rdata_i(btld_i_rdata_i),
		.port2_req_o(sram_i_req_o),
		.port2_gnt_i(sram_i_gnt_i),
		.port2_addr_o(sram_i_addr_o),
		.port2_we_o(sram_i_we_o),
		.port2_be_o(sram_i_be_o),
		.port2_wdata_o(sram_i_wdata_o),
		.port2_rvalid_i(sram_i_rvalid_i),
		.port2_rdata_i(sram_i_rdata_i),
		.port3_req_o(flash_i_req),
		.port3_gnt_i(flash_i_gnt),
		.port3_addr_o(flash_i_addr),
		.port3_we_o(flash_i_we),
		.port3_be_o(flash_i_be),
		.port3_wdata_o(flash_i_wdata),
		.port3_rvalid_i(flash_i_rvalid),
		.port3_rdata_i(flash_i_rdata),
		.port4_req_o(per_i_req),
		.port4_gnt_i(per_i_gnt),
		.port4_addr_o(per_i_addr),
		.port4_we_o(per_i_we),
		.port4_be_o(per_i_be),
		.port4_wdata_o(per_i_wdata),
		.port4_rvalid_i(per_i_rvalid),
		.port4_rdata_i(per_i_rdata),
		.bad_state_o(imem_invalid)
	);
	obi_mux_2_to_1 i_flash_obi_mux(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.pri_req_i(flash_d_req),
		.pri_gnt_o(flash_d_gnt),
		.pri_addr_i(flash_d_addr),
		.pri_we_i(flash_d_we),
		.pri_be_i(flash_d_be),
		.pri_wdata_i(flash_d_wdata),
		.pri_rvalid_o(flash_d_rvalid),
		.pri_rdata_o(flash_d_rdata),
		.sec_req_i(flash_i_req),
		.sec_gnt_o(flash_i_gnt),
		.sec_addr_i(flash_i_addr),
		.sec_we_i(flash_i_we),
		.sec_be_i(flash_i_be),
		.sec_wdata_i(flash_i_wdata),
		.sec_rvalid_o(flash_i_rvalid),
		.sec_rdata_o(flash_i_rdata),
		.shr_req_o(flash_req_o),
		.shr_gnt_i(flash_gnt_i),
		.shr_addr_o(flash_addr_o),
		.shr_we_o(flash_we_o),
		.shr_be_o(flash_be_o),
		.shr_wdata_o(flash_wdata_o),
		.shr_rvalid_i(flash_rvalid_i),
		.shr_rdata_i(flash_rdata_i),
		.bad_state_o(flash_invalid)
	);
	obi_mux_2_to_1 i_periph_obi_mux(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.pri_req_i(per_d_req),
		.pri_gnt_o(per_d_gnt),
		.pri_addr_i(per_d_addr),
		.pri_we_i(per_d_we),
		.pri_be_i(per_d_be),
		.pri_wdata_i(per_d_wdata),
		.pri_rvalid_o(per_d_rvalid),
		.pri_rdata_o(per_d_rdata),
		.sec_req_i(per_i_req),
		.sec_gnt_o(per_i_gnt),
		.sec_addr_i(per_i_addr),
		.sec_we_i(per_i_we),
		.sec_be_i(per_i_be),
		.sec_wdata_i(per_i_wdata),
		.sec_rvalid_o(per_i_rvalid),
		.sec_rdata_o(per_i_rdata),
		.shr_req_o(peripheral_req_o),
		.shr_gnt_i(peripheral_gnt_i),
		.shr_addr_o(peripheral_addr_o),
		.shr_we_o(peripheral_we_o),
		.shr_be_o(peripheral_be_o),
		.shr_wdata_o(peripheral_wdata_o),
		.shr_rvalid_i(peripheral_rvalid_i),
		.shr_rdata_i(peripheral_rdata_i),
		.bad_state_o(periph_invalid)
	);
	assign illegal_access_o = ((periph_invalid || flash_invalid) || dmem_invalid) || imem_invalid;
endmodule
