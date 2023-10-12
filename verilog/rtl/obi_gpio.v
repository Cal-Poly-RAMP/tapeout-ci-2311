module obi_gpio (
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
	gpio_oe_e,
	gpio_af_o,
	gpio_dat_o,
	gpio_dat_i,
	illegal_write_o
);
	parameter NUM_PINS = 26;
	parameter BASE_ADDR = 32'h10000000;
	input clk_i;
	input rst_ni;
	input wire obi_req_i;
	output wire obi_gnt_o;
	input wire [31:0] obi_addr_i;
	input wire obi_we_i;
	input wire [3:0] obi_be_i;
	input wire [31:0] obi_wdata_i;
	output wire obi_rvalid_o;
	output reg [31:0] obi_rdata_o;
	output wire [NUM_PINS - 1:0] gpio_oe_e;
	output wire [NUM_PINS - 1:0] gpio_af_o;
	output wire [NUM_PINS - 1:0] gpio_dat_o;
	input wire [NUM_PINS - 1:0] gpio_dat_i;
	output reg illegal_write_o;
	reg [31:0] reg_out_data;
	wire [31:0] reg_in_data;
	reg [31:0] reg_mode_sel;
	reg [31:0] reg_af_sel;
	assign gpio_oe_e = reg_mode_sel[NUM_PINS - 1:0];
	assign gpio_af_o = reg_af_sel[NUM_PINS - 1:0];
	assign gpio_dat_o = reg_out_data[NUM_PINS - 1:0];
	localparam DEAD_PINS = 32 - NUM_PINS;
	reg [DEAD_PINS - 1:0] leading_zeros = 1'sb0;
	assign reg_in_data = {leading_zeros, gpio_dat_i};
	wire [31:0] byte_mask;
	assign byte_mask = {obi_be_i[3], obi_be_i[3], obi_be_i[3], obi_be_i[3], obi_be_i[3], obi_be_i[3], obi_be_i[3], obi_be_i[3], obi_be_i[2], obi_be_i[2], obi_be_i[2], obi_be_i[2], obi_be_i[2], obi_be_i[2], obi_be_i[2], obi_be_i[2], obi_be_i[1], obi_be_i[1], obi_be_i[1], obi_be_i[1], obi_be_i[1], obi_be_i[1], obi_be_i[1], obi_be_i[1], obi_be_i[0], obi_be_i[0], obi_be_i[0], obi_be_i[0], obi_be_i[0], obi_be_i[0], obi_be_i[0], obi_be_i[0]};
	always @(posedge clk_i)
		if (!rst_ni) begin
			reg_out_data <= 32'b00000000000000000000000000000000;
			reg_mode_sel <= 32'b00000000000000000000000000000000;
			reg_af_sel <= 32'b00000000000000000000000000000000;
		end
		else if (obi_req_i) begin
			illegal_write_o <= 1'sb0;
			if (obi_we_i)
				case (obi_addr_i)
					BASE_ADDR: reg_out_data <= (reg_out_data & ~byte_mask) | (obi_wdata_i & byte_mask);
					BASE_ADDR + 4:
						;
					BASE_ADDR + 8: reg_mode_sel <= (reg_mode_sel & ~byte_mask) | (obi_wdata_i & byte_mask);
					BASE_ADDR + 12: reg_af_sel <= (reg_af_sel & ~byte_mask) | (obi_wdata_i & byte_mask);
					default: illegal_write_o <= 1'sb1;
				endcase
			else
				case (obi_addr_i)
					BASE_ADDR: obi_rdata_o <= reg_out_data;
					BASE_ADDR + 4: obi_rdata_o <= reg_in_data;
					BASE_ADDR + 8: obi_rdata_o <= reg_mode_sel;
					BASE_ADDR + 12: obi_rdata_o <= reg_af_sel;
					default: obi_rdata_o <= 32'hdeadbeef;
				endcase
		end
	assign obi_gnt_o = 1'b1;
	assign obi_rvalid_o = 1'b1;
endmodule
