module obi_demux_1_to_2 (
	clk_i,
	rst_ni,
	ctrl_req_i,
	ctrl_gnt_o,
	ctrl_addr_i,
	ctrl_we_i,
	ctrl_be_i,
	ctrl_wdata_i,
	ctrl_rvalid_o,
	ctrl_rdata_o,
	port1_req_o,
	port1_gnt_i,
	port1_addr_o,
	port1_we_o,
	port1_be_o,
	port1_wdata_o,
	port1_rvalid_i,
	port1_rdata_i,
	port2_req_o,
	port2_gnt_i,
	port2_addr_o,
	port2_we_o,
	port2_be_o,
	port2_wdata_o,
	port2_rvalid_i,
	port2_rdata_i,
	bad_state_o
);
	parameter PORT1_BASE_ADDR = 32'h00001000;
	parameter PORT1_END_ADDR = 32'h00001fff;
	parameter PORT2_BASE_ADDR = 32'h80000000;
	parameter PORT2_END_ADDR = 32'h8000ffff;
	input wire clk_i;
	input wire rst_ni;
	input wire ctrl_req_i;
	output reg ctrl_gnt_o;
	input wire [31:0] ctrl_addr_i;
	input wire ctrl_we_i;
	input wire [3:0] ctrl_be_i;
	input wire [31:0] ctrl_wdata_i;
	output reg ctrl_rvalid_o;
	output reg [31:0] ctrl_rdata_o;
	output reg port1_req_o;
	input wire port1_gnt_i;
	output wire [31:0] port1_addr_o;
	output wire port1_we_o;
	output wire [3:0] port1_be_o;
	output wire [31:0] port1_wdata_o;
	input wire port1_rvalid_i;
	input wire [31:0] port1_rdata_i;
	output reg port2_req_o;
	input wire port2_gnt_i;
	output wire [31:0] port2_addr_o;
	output wire port2_we_o;
	output wire [3:0] port2_be_o;
	output wire [31:0] port2_wdata_o;
	input wire port2_rvalid_i;
	input wire [31:0] port2_rdata_i;
	output wire bad_state_o;
	reg [1:0] addr_sel;
	reg [1:0] resp_sel;
	always @(*)
		if ((ctrl_addr_i >= PORT1_BASE_ADDR) && (ctrl_addr_i <= PORT1_END_ADDR))
			addr_sel = 2'd1;
		else if ((ctrl_addr_i >= PORT2_BASE_ADDR) && (ctrl_addr_i <= PORT2_END_ADDR))
			addr_sel = 2'd2;
		else
			addr_sel = 2'd0;
	always @(*)
		case (addr_sel)
			2'd1: ctrl_gnt_o = port1_gnt_i;
			2'd2: ctrl_gnt_o = port2_gnt_i;
			default: ctrl_gnt_o = 1;
		endcase
	always @(*) begin
		port1_req_o = (addr_sel == 2'd1 ? ctrl_req_i : 1'b0);
		port2_req_o = (addr_sel == 2'd2 ? ctrl_req_i : 1'b0);
	end
	assign port1_addr_o = ctrl_addr_i;
	assign port1_wdata_o = ctrl_wdata_i;
	assign port1_be_o = ctrl_be_i;
	assign port1_we_o = ctrl_we_i;
	assign port2_addr_o = ctrl_addr_i;
	assign port2_wdata_o = ctrl_wdata_i;
	assign port2_be_o = ctrl_be_i;
	assign port2_we_o = ctrl_we_i;
	wire accepted;
	assign accepted = (ctrl_req_i && ctrl_gnt_o) && !ctrl_we_i;
	always @(posedge clk_i)
		if (!rst_ni)
			resp_sel <= 2'd0;
		else if (accepted)
			resp_sel <= addr_sel;
	always @(*)
		case (resp_sel)
			2'd1: ctrl_rvalid_o = port1_rvalid_i;
			2'd2: ctrl_rvalid_o = port2_rvalid_i;
			default: ctrl_rvalid_o = 1;
		endcase
	always @(*)
		case (resp_sel)
			2'd1: ctrl_rdata_o = port1_rdata_i;
			2'd2: ctrl_rdata_o = port2_rdata_i;
			default: ctrl_rdata_o = 32'hdeadbeef;
		endcase
	assign bad_state_o = (addr_sel == 2'd0) && ctrl_req_i;
endmodule
