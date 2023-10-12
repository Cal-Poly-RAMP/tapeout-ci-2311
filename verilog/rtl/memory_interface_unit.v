module memory_interface_unit (
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
	copy_flash_i,
	illegal_access_o
);
	parameter BOOTLOADER_BASE_ADDR = 32'h00000000;
	parameter BOOTLOADER_END_ADDR = 32'h00000fff;
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
	input wire copy_flash_i;
	output wire illegal_access_o;
	wire btld_d_req;
	wire btld_d_gnt;
	wire btld_d_we;
	wire btld_d_rvalid;
	wire [31:0] btld_d_addr;
	wire [31:0] btld_d_wdata;
	wire [31:0] btld_d_rdata;
	wire [3:0] btld_d_be;
	wire btld_i_req;
	wire btld_i_gnt;
	wire btld_i_we;
	wire btld_i_rvalid;
	wire [31:0] btld_i_addr;
	wire [31:0] btld_i_wdata;
	wire [31:0] btld_i_rdata;
	wire [3:0] btld_i_be;
	wire illegal_xbar;
	wire illegal_access_boot;
	wire illegal_write_boot;
	obi_xbar #(
		.BOOTLOADER_BASE_ADDR(BOOTLOADER_BASE_ADDR),
		.BOOTLOADER_END_ADDR(BOOTLOADER_END_ADDR),
		.SRAM_BASE_ADDR(SRAM_BASE_ADDR),
		.SRAM_END_ADDR(SRAM_END_ADDR),
		.FLASH_BASE_ADDR(FLASH_BASE_ADDR),
		.FLASH_END_ADDR(FLASH_END_ADDR),
		.PERIPHERAL_BASE_ADDR(PERIPHERAL_BASE_ADDR),
		.PERIPHERAL_END_ADDR(PERIPHERAL_END_ADDR)
	) i_obi_xbar(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.dmem_req_i(dmem_req_i),
		.dmem_gnt_o(dmem_gnt_o),
		.dmem_addr_i(dmem_addr_i),
		.dmem_we_i(dmem_we_i),
		.dmem_be_i(dmem_be_i),
		.dmem_wdata_i(dmem_wdata_i),
		.dmem_rvalid_o(dmem_rvalid_o),
		.dmem_rdata_o(dmem_rdata_o),
		.imem_req_i(imem_req_i),
		.imem_gnt_o(imem_gnt_o),
		.imem_addr_i(imem_addr_i),
		.imem_we_i(imem_we_i),
		.imem_be_i(imem_be_i),
		.imem_wdata_i(imem_wdata_i),
		.imem_rvalid_o(imem_rvalid_o),
		.imem_rdata_o(imem_rdata_o),
		.sram_d_req_o(sram_d_req_o),
		.sram_d_gnt_i(sram_d_gnt_i),
		.sram_d_addr_o(sram_d_addr_o),
		.sram_d_we_o(sram_d_we_o),
		.sram_d_be_o(sram_d_be_o),
		.sram_d_wdata_o(sram_d_wdata_o),
		.sram_d_rvalid_i(sram_d_rvalid_i),
		.sram_d_rdata_i(sram_d_rdata_i),
		.sram_i_req_o(sram_i_req_o),
		.sram_i_gnt_i(sram_i_gnt_i),
		.sram_i_addr_o(sram_i_addr_o),
		.sram_i_we_o(sram_i_we_o),
		.sram_i_be_o(sram_i_be_o),
		.sram_i_wdata_o(sram_i_wdata_o),
		.sram_i_rvalid_i(sram_i_rvalid_i),
		.sram_i_rdata_i(sram_i_rdata_i),
		.btld_d_req_o(btld_d_req),
		.btld_d_gnt_i(btld_d_gnt),
		.btld_d_addr_o(btld_d_addr),
		.btld_d_we_o(btld_d_we),
		.btld_d_be_o(btld_d_be),
		.btld_d_wdata_o(btld_d_wdata),
		.btld_d_rvalid_i(btld_d_rvalid),
		.btld_d_rdata_i(btld_d_rdata),
		.btld_i_req_o(btld_i_req),
		.btld_i_gnt_i(btld_i_gnt),
		.btld_i_addr_o(btld_i_addr),
		.btld_i_we_o(btld_i_we),
		.btld_i_be_o(btld_i_be),
		.btld_i_wdata_o(btld_i_wdata),
		.btld_i_rvalid_i(btld_i_rvalid),
		.btld_i_rdata_i(btld_i_rdata),
		.peripheral_req_o(peripheral_req_o),
		.peripheral_gnt_i(peripheral_gnt_i),
		.peripheral_addr_o(peripheral_addr_o),
		.peripheral_we_o(peripheral_we_o),
		.peripheral_be_o(peripheral_be_o),
		.peripheral_wdata_o(peripheral_wdata_o),
		.peripheral_rvalid_i(peripheral_rvalid_i),
		.peripheral_rdata_i(peripheral_rdata_i),
		.flash_req_o(flash_req_o),
		.flash_gnt_i(flash_gnt_i),
		.flash_addr_o(flash_addr_o),
		.flash_we_o(flash_we_o),
		.flash_be_o(flash_be_o),
		.flash_wdata_o(flash_wdata_o),
		.flash_rvalid_i(flash_rvalid_i),
		.flash_rdata_i(flash_rdata_i),
		.illegal_access_o(illegal_xbar)
	);
	bootloader i_bootloader(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.dmem_req_i(btld_d_req),
		.dmem_gnt_o(btld_d_gnt),
		.dmem_addr_i(btld_d_addr),
		.dmem_we_i(btld_d_we),
		.dmem_be_i(btld_d_be),
		.dmem_wdata_i(btld_d_wdata),
		.dmem_rvalid_o(btld_d_rvalid),
		.dmem_rdata_o(btld_d_rdata),
		.imem_req_i(btld_i_req),
		.imem_gnt_o(btld_i_gnt),
		.imem_addr_i(btld_i_addr),
		.imem_we_i(btld_i_we),
		.imem_be_i(btld_i_be),
		.imem_wdata_i(btld_i_wdata),
		.imem_rvalid_o(btld_i_rvalid),
		.imem_rdata_o(btld_i_rdata),
		.copy_flash_i(copy_flash_i),
		.illegal_access_o(illegal_access_boot),
		.illegal_write_o(illegal_write_boot)
	);
	assign illegal_access_o = (illegal_access_boot || illegal_write_boot) || illegal_xbar;
endmodule
