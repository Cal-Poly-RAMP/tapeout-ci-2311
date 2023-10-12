module wb_to_obi (
	clk_i,
	wb_rst_i,
	wbs_stb_i,
	wbs_cyc_i,
	wbs_we_i,
	wbs_sel_i,
	wbs_dat_i,
	wbs_adr_i,
	wbs_ack_o,
	wbs_dat_o,
	req_o,
	gnt_i,
	addr_o,
	we_o,
	be_o,
	wdata_o,
	rvalid_i,
	rdata_i
);
	input clk_i;
	input wb_rst_i;
	input wbs_stb_i;
	input wbs_cyc_i;
	input wbs_we_i;
	input [3:0] wbs_sel_i;
	input [31:0] wbs_dat_i;
	input [31:0] wbs_adr_i;
	output wire wbs_ack_o;
	output wire [31:0] wbs_dat_o;
	output wire req_o;
	input gnt_i;
	output wire [31:0] addr_o;
	output wire we_o;
	output wire [3:0] be_o;
	output wire [31:0] wdata_o;
	input rvalid_i;
	input [31:0] rdata_i;
	reg read_outstanding;
	reg write_completed;
	wire read_accepted_a;
	wire write_accepted_a;
	assign read_accepted_a = (req_o && gnt_i) && !wbs_we_i;
	assign write_accepted_a = (req_o && gnt_i) && wbs_we_i;
	always @(posedge clk_i)
		if (wb_rst_i)
			read_outstanding <= 1'sb0;
		else begin
			if (read_outstanding && (rvalid_i && !read_accepted_a))
				read_outstanding <= 1'sb0;
			if (!read_outstanding && read_accepted_a)
				read_outstanding <= 1'sb0;
		end
	always @(posedge clk_i) write_completed <= write_accepted_a;
	assign req_o = wbs_stb_i;
	assign addr_o = wbs_adr_i;
	assign we_o = wbs_we_i;
	assign be_o = wbs_sel_i;
	assign wdata_o = wbs_dat_i;
	assign wbs_dat_o = rdata_i;
	assign wbs_ack_o = write_completed || (read_outstanding && rvalid_i);
endmodule
