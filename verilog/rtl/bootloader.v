module bootloader (
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
	copy_flash_i,
	illegal_access_o,
	illegal_write_o
);
	parameter BOOTLOADER_BASE_ADDR = 32'h00000000;
	input wire clk_i;
	input wire rst_ni;
	input wire dmem_req_i;
	output reg dmem_gnt_o;
	input wire [31:0] dmem_addr_i;
	input wire dmem_we_i;
	input wire [3:0] dmem_be_i;
	input wire [31:0] dmem_wdata_i;
	output reg dmem_rvalid_o;
	output reg [31:0] dmem_rdata_o;
	input wire imem_req_i;
	output reg imem_gnt_o;
	input wire [31:0] imem_addr_i;
	input wire imem_we_i;
	input wire [3:0] imem_be_i;
	input wire [31:0] imem_wdata_i;
	output reg imem_rvalid_o;
	output reg [31:0] imem_rdata_o;
	input wire copy_flash_i;
	output reg illegal_access_o;
	output wire illegal_write_o;
	parameter BOOTLOADER_ADDR_WIDTH = 6;
	parameter BOOTLOADER_SIZE = 47;
	assign illegal_write_o = (imem_req_i && imem_we_i) || (dmem_req_i && dmem_we_i);
	reg [31:0] copy_rom [0:BOOTLOADER_SIZE - 1];
	reg [31:0] jump_rom [0:BOOTLOADER_SIZE - 1];
	reg signed [31:0] i;
	
	always @(*)
       	begin
		
		copy_rom[0] = 32'h00000093;
		copy_rom[1] = 32'h00000113;
		copy_rom[2] = 32'h00000193;
		copy_rom[3] = 32'h00000213;
		copy_rom[4] = 32'h00000293;
		copy_rom[5] = 32'h00000313;
		copy_rom[6] = 32'h00000393;
		copy_rom[7] = 32'h00000413;
		copy_rom[8] = 32'h00000493;
		copy_rom[9] = 32'h00000513;
		copy_rom[10] = 32'h00000593;
		copy_rom[11] = 32'h00000613;
		copy_rom[12] = 32'h00000693;
		copy_rom[13] = 32'h00000713;
		copy_rom[14] = 32'h00000793;
		copy_rom[15] = 32'h00000813;
		copy_rom[16] = 32'h00000893;
		copy_rom[17] = 32'h00000913;
		copy_rom[18] = 32'h00000993;
		copy_rom[19] = 32'h00000a13;
		copy_rom[20] = 32'h00000a93;
		copy_rom[21] = 32'h00000b13;
		copy_rom[22] = 32'h00000b93;
		copy_rom[23] = 32'h00000c13;
		copy_rom[24] = 32'h00000c93;
		copy_rom[25] = 32'h00000d13;
		copy_rom[26] = 32'h00000d93;
		copy_rom[27] = 32'h00000e13;
		copy_rom[28] = 32'h00000e93;
		copy_rom[29] = 32'h00000f13;
		copy_rom[30] = 32'h00000f93;
		copy_rom[31] = 32'h200005b7;
		copy_rom[32] = 32'h80000637;
		copy_rom[33] = 32'h00000013;
		copy_rom[34] = 32'h20000693;
		copy_rom[35] = 32'h0005a703;
		copy_rom[36] = 32'h00e62023;
		copy_rom[37] = 32'h00458593;
		copy_rom[38] = 32'h00460613;
		copy_rom[39] = 32'hfff68693;
		copy_rom[40] = 32'hfe0696e3;
		copy_rom[41] = 32'h800007b7;
		copy_rom[42] = 32'h00000013;
		copy_rom[43] = 32'h00000013;
		copy_rom[44] = 32'h00078067;
		copy_rom[45] = 32'h00000013;
		copy_rom[46] = 32'h00000013;


		jump_rom[0] = 32'h200005b7;
		jump_rom[1] = 32'h00058067;
		begin 
			for (i = 2; i < BOOTLOADER_SIZE; i = i + 1)
				jump_rom[i] = 32'h00000013;
		end
	end
	reg [31:0] imem_addr_shifted;
	reg [31:0] dmem_addr_shifted;
	reg [BOOTLOADER_ADDR_WIDTH - 1:0] imem_boot_addr;
	reg [BOOTLOADER_ADDR_WIDTH - 1:0] dmem_boot_addr;
	reg [31:0] imem_response;
	reg [31:0] dmem_response;
	always @(*) begin
		illegal_access_o = 1'sb0;
		imem_addr_shifted = imem_addr_i - BOOTLOADER_BASE_ADDR;
		dmem_addr_shifted = dmem_addr_i - BOOTLOADER_BASE_ADDR;
		imem_boot_addr = imem_addr_shifted[BOOTLOADER_ADDR_WIDTH + 1:2];
		dmem_boot_addr = dmem_addr_shifted[BOOTLOADER_ADDR_WIDTH + 1:2];
		if ({1'b0, imem_boot_addr} < BOOTLOADER_SIZE)
			imem_response = (copy_flash_i ? copy_rom[imem_boot_addr] : jump_rom[imem_boot_addr]);
		else begin
			illegal_access_o = imem_req_i;
			imem_response = 32'hdeadbeef;
		end
		if ({1'b0, dmem_boot_addr} < BOOTLOADER_SIZE)
			dmem_response = (copy_flash_i ? copy_rom[dmem_boot_addr] : jump_rom[dmem_boot_addr]);
		else begin
			illegal_access_o = dmem_req_i;
			dmem_response = 32'hdeadbeef;
		end
	end
	always @(posedge clk_i) begin
		dmem_gnt_o <= (rst_ni ? dmem_req_i : 1'b0);
		imem_gnt_o <= (rst_ni ? imem_req_i : 1'b0);
		dmem_rvalid_o <= (rst_ni ? dmem_req_i : 1'b0);
		imem_rvalid_o <= (rst_ni ? imem_req_i : 1'b0);
		dmem_rdata_o <= (rst_ni ? dmem_response : 32'hdeadbeef);
		imem_rdata_o <= (rst_ni ? imem_response : 32'hdeadbeef);
	end
endmodule
