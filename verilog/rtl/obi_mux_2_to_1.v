module obi_mux_2_to_1 (
	clk_i,
	rst_ni,
	pri_req_i,
	pri_gnt_o,
	pri_addr_i,
	pri_we_i,
	pri_be_i,
	pri_wdata_i,
	pri_rvalid_o,
	pri_rdata_o,
	sec_req_i,
	sec_gnt_o,
	sec_addr_i,
	sec_we_i,
	sec_be_i,
	sec_wdata_i,
	sec_rvalid_o,
	sec_rdata_o,
	shr_req_o,
	shr_gnt_i,
	shr_addr_o,
	shr_we_o,
	shr_be_o,
	shr_wdata_o,
	shr_rvalid_i,
	shr_rdata_i,
	bad_state_o
);
	input wire clk_i;
	input wire rst_ni;
	input wire pri_req_i;
	output wire pri_gnt_o;
	input wire [31:0] pri_addr_i;
	input wire pri_we_i;
	input wire [3:0] pri_be_i;
	input wire [31:0] pri_wdata_i;
	output wire pri_rvalid_o;
	output wire [31:0] pri_rdata_o;
	input wire sec_req_i;
	output wire sec_gnt_o;
	input wire [31:0] sec_addr_i;
	input wire sec_we_i;
	input wire [3:0] sec_be_i;
	input wire [31:0] sec_wdata_i;
	output wire sec_rvalid_o;
	output wire [31:0] sec_rdata_o;
	output wire shr_req_o;
	input wire shr_gnt_i;
	output wire [31:0] shr_addr_o;
	output wire shr_we_o;
	output wire [3:0] shr_be_o;
	output wire [31:0] shr_wdata_o;
	input wire shr_rvalid_i;
	input wire [31:0] shr_rdata_i;
	output wire bad_state_o;
	wire pri_accepted;
	wire sec_accepted;
	wire sec_posession;
	wire gnt_masked;
	wire available;
	assign sec_posession = ~pri_req_i;
	reg pri_read_outstanding;
	reg sec_read_outstanding;
	assign available = shr_rvalid_i || !(pri_read_outstanding || sec_read_outstanding);
	assign gnt_masked = shr_gnt_i && available;
	assign pri_accepted = (pri_req_i && pri_gnt_o) && !pri_we_i;
	assign sec_accepted = (sec_req_i && sec_gnt_o) && !sec_we_i;
	assign sec_gnt_o = (sec_posession ? gnt_masked : 1'b0);
	assign pri_gnt_o = (sec_posession ? 1'b0 : gnt_masked);
	assign shr_req_o = (sec_posession ? sec_req_i : pri_req_i);
	assign shr_addr_o = (sec_posession ? sec_addr_i : pri_addr_i);
	assign shr_we_o = (sec_posession ? sec_we_i : pri_we_i);
	assign shr_be_o = (sec_posession ? sec_be_i : pri_be_i);
	assign shr_wdata_o = (sec_posession ? sec_wdata_i : pri_wdata_i);
	assign sec_rvalid_o = (sec_read_outstanding ? shr_rvalid_i : 1'b0);
	assign sec_rdata_o = (sec_read_outstanding ? shr_rdata_i : {32 {1'sb0}});
	assign pri_rvalid_o = (pri_read_outstanding ? shr_rvalid_i : 1'b0);
	assign pri_rdata_o = (pri_read_outstanding ? shr_rdata_i : {32 {1'sb0}});
	always @(posedge clk_i)
		if (!rst_ni) begin
			pri_read_outstanding <= 1'sb0;
			sec_read_outstanding <= 1'sb0;
		end
		else if (available) begin
			pri_read_outstanding <= pri_accepted;
			sec_read_outstanding <= sec_accepted;
		end
	assign bad_state_o = pri_read_outstanding && sec_read_outstanding;
endmodule
