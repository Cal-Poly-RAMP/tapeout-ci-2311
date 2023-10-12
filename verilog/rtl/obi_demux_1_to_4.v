module obi_demux_1_to_4 (
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
	port3_req_o,
	port3_gnt_i,
	port3_addr_o,
	port3_we_o,
	port3_be_o,
	port3_wdata_o,
	port3_rvalid_i,
	port3_rdata_i,
	port4_req_o,
	port4_gnt_i,
	port4_addr_o,
	port4_we_o,
	port4_be_o,
	port4_wdata_o,
	port4_rvalid_i,
	port4_rdata_i,
	bad_state_o
);
	parameter PORT1_BASE_ADDR = 32'h00001000;
	parameter PORT1_END_ADDR = 32'h00001fff;
	parameter PORT2_BASE_ADDR = 32'h80000000;
	parameter PORT2_END_ADDR = 32'h8000ffff;
	parameter PORT3_BASE_ADDR = 32'h20000000;
	parameter PORT3_END_ADDR = 32'h3fffffff;
	parameter PORT4_BASE_ADDR = 32'h10000000;
	parameter PORT4_END_ADDR = 32'h10001fff;
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
	output reg port3_req_o;
	input wire port3_gnt_i;
	output wire [31:0] port3_addr_o;
	output wire port3_we_o;
	output wire [3:0] port3_be_o;
	output wire [31:0] port3_wdata_o;
	input wire port3_rvalid_i;
	input wire [31:0] port3_rdata_i;
	output reg port4_req_o;
	input wire port4_gnt_i;
	output wire [31:0] port4_addr_o;
	output wire port4_we_o;
	output wire [3:0] port4_be_o;
	output wire [31:0] port4_wdata_o;
	input wire port4_rvalid_i;
	input wire [31:0] port4_rdata_i;
	output wire bad_state_o;
	reg [2:0] addr_sel;
	reg [2:0] resp_sel;
	always @(*)
		if ((ctrl_addr_i >= PORT1_BASE_ADDR) && (ctrl_addr_i <= PORT1_END_ADDR))
			addr_sel = 3'd1;
		else if ((ctrl_addr_i >= PORT2_BASE_ADDR) && (ctrl_addr_i <= PORT2_END_ADDR))
			addr_sel = 3'd2;
		else if ((ctrl_addr_i >= PORT3_BASE_ADDR) && (ctrl_addr_i <= PORT3_END_ADDR))
			addr_sel = 3'd3;
		else if ((ctrl_addr_i >= PORT4_BASE_ADDR) && (ctrl_addr_i <= PORT4_END_ADDR))
			addr_sel = 3'd4;
		else
			addr_sel = 3'd0;
	always @(*)
		case (addr_sel)
			3'd1: ctrl_gnt_o = port1_gnt_i;
			3'd2: ctrl_gnt_o = port2_gnt_i;
			3'd3: ctrl_gnt_o = port3_gnt_i;
			3'd4: ctrl_gnt_o = port4_gnt_i;
			default: ctrl_gnt_o = 1;
		endcase
	always @(*) begin
		port1_req_o = (addr_sel == 3'd1 ? ctrl_req_i : 1'b0);
		port2_req_o = (addr_sel == 3'd2 ? ctrl_req_i : 1'b0);
		port3_req_o = (addr_sel == 3'd3 ? ctrl_req_i : 1'b0);
		port4_req_o = (addr_sel == 3'd4 ? ctrl_req_i : 1'b0);
	end
	assign port1_addr_o = ctrl_addr_i;
	assign port1_wdata_o = ctrl_wdata_i;
	assign port1_be_o = ctrl_be_i;
	assign port1_we_o = ctrl_we_i;
	assign port2_addr_o = ctrl_addr_i;
	assign port2_wdata_o = ctrl_wdata_i;
	assign port2_be_o = ctrl_be_i;
	assign port2_we_o = ctrl_we_i;
	assign port3_addr_o = ctrl_addr_i;
	assign port3_wdata_o = ctrl_wdata_i;
	assign port3_be_o = ctrl_be_i;
	assign port3_we_o = ctrl_we_i;
	assign port4_addr_o = ctrl_addr_i;
	assign port4_wdata_o = ctrl_wdata_i;
	assign port4_be_o = ctrl_be_i;
	assign port4_we_o = ctrl_we_i;
	wire accepted;
	assign accepted = (ctrl_req_i && ctrl_gnt_o) && !ctrl_we_i;
	always @(posedge clk_i)
		if (!rst_ni)
			resp_sel <= 3'd0;
		else if (accepted)
			resp_sel <= addr_sel;
	always @(*)
		case (resp_sel)
			3'd1: ctrl_rvalid_o = port1_rvalid_i;
			3'd2: ctrl_rvalid_o = port2_rvalid_i;
			3'd3: ctrl_rvalid_o = port3_rvalid_i;
			3'd4: ctrl_rvalid_o = port4_rvalid_i;
			default: ctrl_rvalid_o = 1;
		endcase
	always @(*)
		case (resp_sel)
			3'd1: ctrl_rdata_o = port1_rdata_i;
			3'd2: ctrl_rdata_o = port2_rdata_i;
			3'd3: ctrl_rdata_o = port3_rdata_i;
			3'd4: ctrl_rdata_o = port4_rdata_i;
			default: ctrl_rdata_o = 32'hdeadbeef;
		endcase
	assign bad_state_o = (addr_sel == 3'd0) && ctrl_req_i;
endmodule
