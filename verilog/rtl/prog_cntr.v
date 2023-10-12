module prog_cntr (
	clk_i,
	rst_ni,
	boot_sel_i,
	stall_i,
	next_pc_i,
	pc_o
);
	input clk_i;
	input rst_ni;
	input boot_sel_i;
	input stall_i;
	input [31:0] next_pc_i;
	output wire [31:0] pc_o;
	localparam BOOTLOADER_ADDR = 32'h00000000;
	localparam FAILSAFE_ADDR = 32'h80000000;
	wire [31:0] reset_addr;
	assign reset_addr = (boot_sel_i ? FAILSAFE_ADDR : BOOTLOADER_ADDR);
	reg [31:0] last_pc;
	reg [31:0] pc_raw;
	always @(posedge clk_i)
		if (!rst_ni) begin
			last_pc <= reset_addr;
			pc_raw <= reset_addr;
		end
		else if (!stall_i) begin
			last_pc <= pc_raw;
			pc_raw <= next_pc_i;
		end
	assign pc_o = (stall_i ? last_pc : pc_raw);
endmodule
