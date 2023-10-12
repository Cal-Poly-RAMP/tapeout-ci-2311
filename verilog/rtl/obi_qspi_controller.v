module obi_qspi_controller (
	clk_i,
	rst_ni,
	obi_req_i,
	obi_gnt_o,
	obi_addr_i,
	obi_we_i,
	obi_be_i,
	obi_wdata_i,
	obi_rvalid_o,
	obi_rdata_o,
	flash_csb_o,
	flash_clk_o,
	flash_io0_oe_o,
	flash_io1_oe_o,
	flash_io2_oe_o,
	flash_io3_oe_o,
	flash_io0_data_o,
	flash_io1_data_o,
	flash_io2_data_o,
	flash_io3_data_o,
	flash_io0_data_i,
	flash_io1_data_i,
	flash_io2_data_i,
	flash_io3_data_i,
	illegal_write_o
);
	parameter CFG_REG_ADDR = 32'h3ffffffc;
	input clk_i;
	input rst_ni;
	input wire obi_req_i;
	output wire obi_gnt_o;
	input wire [31:0] obi_addr_i;
	input wire obi_we_i;
	input wire [3:0] obi_be_i;
	input wire [31:0] obi_wdata_i;
	output reg obi_rvalid_o;
	output reg [31:0] obi_rdata_o;
	output wire flash_csb_o;
	output wire flash_clk_o;
	output wire flash_io0_oe_o;
	output wire flash_io1_oe_o;
	output wire flash_io2_oe_o;
	output wire flash_io3_oe_o;
	output wire flash_io0_data_o;
	output wire flash_io1_data_o;
	output wire flash_io2_data_o;
	output wire flash_io3_data_o;
	input wire flash_io0_data_i;
	input wire flash_io1_data_i;
	input wire flash_io2_data_i;
	input wire flash_io3_data_i;
	output wire illegal_write_o;
	reg read_in_progress;
	wire read_ready;
	reg [31:0] addr_latched;
	assign obi_gnt_o = !read_in_progress || illegal_write_o;
	wire cfgreg_addr_selected;
	assign illegal_write_o = (obi_req_i && obi_we_i) && !cfgreg_addr_selected;
	always @(posedge clk_i)
		if (!rst_ni)
			read_in_progress <= 1'sb0;
		else if (!read_in_progress) begin
			read_in_progress <= (obi_req_i && !obi_we_i) && !cfgreg_addr_selected;
			addr_latched <= obi_addr_i;
		end
		else
			read_in_progress <= ~read_ready;
	wire cfg_write_requested;
	wire cfg_read_requested;
	wire [3:0] cfgreg_we;
	assign cfgreg_addr_selected = obi_addr_i == CFG_REG_ADDR;
	assign cfg_write_requested = ((cfgreg_addr_selected && obi_req_i) && !read_in_progress) && obi_we_i;
	assign cfg_read_requested = ((cfgreg_addr_selected && obi_req_i) && !read_in_progress) && !obi_we_i;
	assign cfgreg_we = (cfg_write_requested ? obi_be_i : {4 {1'sb0}});
	wire [31:0] cfg_dout_a;
	wire [31:0] spi_dout_a;
	always @(posedge clk_i)
		if (!rst_ni) begin
			obi_rdata_o <= 32'hdeadbeef;
			obi_rvalid_o <= 1'sb0;
		end
		else if (cfg_read_requested) begin
			obi_rdata_o <= cfg_dout_a;
			obi_rvalid_o <= 1'sb1;
		end
		else if (read_in_progress && read_ready) begin
			obi_rdata_o <= spi_dout_a;
			obi_rvalid_o <= 1'sb1;
		end
		else if (read_in_progress && !read_ready)
			obi_rvalid_o <= 1'sb0;
		else
			obi_rvalid_o <= ~obi_req_i;
	spimemio spimemio_inst(
		.clk(clk_i),
		.resetn(rst_ni),
		.valid(read_in_progress || (!read_in_progress && obi_req_i)),
		.ready(read_ready),
		.addr(addr_latched[23:0]),
		.rdata(spi_dout_a),
		.flash_csb(flash_csb_o),
		.flash_clk(flash_clk_o),
		.flash_io0_oe(flash_io0_oe_o),
		.flash_io1_oe(flash_io1_oe_o),
		.flash_io2_oe(flash_io2_oe_o),
		.flash_io3_oe(flash_io3_oe_o),
		.flash_io0_do(flash_io0_data_o),
		.flash_io1_do(flash_io1_data_o),
		.flash_io2_do(flash_io2_data_o),
		.flash_io3_do(flash_io3_data_o),
		.flash_io0_di(flash_io0_data_i),
		.flash_io1_di(flash_io1_data_i),
		.flash_io2_di(flash_io2_data_i),
		.flash_io3_di(flash_io3_data_i),
		.cfgreg_we(cfgreg_we),
		.cfgreg_di(obi_wdata_i),
		.cfgreg_do(cfg_dout_a)
	);
endmodule
