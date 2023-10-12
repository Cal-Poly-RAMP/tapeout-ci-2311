module sram_wrap (
	clk_i,
	rst_ni,
	sram_d_req_i,
	sram_d_gnt_o,
	sram_d_addr_i,
	sram_d_we_i,
	sram_d_be_i,
	sram_d_wdata_i,
	sram_d_rvalid_o,
	sram_d_rdata_o,
	sram_i_req_i,
	sram_i_gnt_o,
	sram_i_addr_i,
	sram_i_we_i,
	sram_i_be_i,
	sram_i_wdata_i,
	sram_i_rvalid_o,
	sram_i_rdata_o,
	illegal_memory_o
);
	parameter SRAM_NUM_BLOCKS = 24;
	parameter SRAM_LOG_BLOCKS = $clog2(SRAM_NUM_BLOCKS);
	parameter SRAM_LOG_BLOCK_SIZE = 9;
	input wire clk_i;
	input wire rst_ni;
	input wire sram_d_req_i;
	output reg sram_d_gnt_o;
	input wire [31:0] sram_d_addr_i;
	input wire sram_d_we_i;
	input wire [3:0] sram_d_be_i;
	input wire [31:0] sram_d_wdata_i;
	output reg sram_d_rvalid_o;
	output reg [31:0] sram_d_rdata_o;
	input wire sram_i_req_i;
	output reg sram_i_gnt_o;
	input wire [31:0] sram_i_addr_i;
	input wire sram_i_we_i;
	input wire [3:0] sram_i_be_i;
	input wire [31:0] sram_i_wdata_i;
	output reg sram_i_rvalid_o;
	output reg [31:0] sram_i_rdata_o;
	output reg illegal_memory_o;
	wire [31:0] sram_d_read_vec [SRAM_NUM_BLOCKS - 1:0];
	wire [31:0] sram_i_read_vec [SRAM_NUM_BLOCKS - 1:0];
	always @(*) begin
		sram_i_gnt_o = sram_i_req_i;
		sram_d_gnt_o = sram_d_req_i;
		illegal_memory_o = 0;
	end
	always @(posedge clk_i) begin
		sram_i_rvalid_o <= sram_i_req_i;
		sram_d_rvalid_o <= sram_d_req_i;
	end
	reg [SRAM_NUM_BLOCKS - 1:0] cs_data;
	reg [SRAM_NUM_BLOCKS - 1:0] cs_inst;
	reg [SRAM_NUM_BLOCKS - 1:0] cs_data_prev;
	reg [SRAM_NUM_BLOCKS - 1:0] cs_inst_prev;
	wire [SRAM_LOG_BLOCKS - 1:0] sram_d_cs_addr;
	wire [SRAM_LOG_BLOCKS - 1:0] sram_i_cs_addr;
	assign sram_d_cs_addr = sram_d_addr_i[((SRAM_LOG_BLOCKS - 1) + SRAM_LOG_BLOCK_SIZE) + 2:SRAM_LOG_BLOCK_SIZE + 2];
	assign sram_i_cs_addr = sram_i_addr_i[((SRAM_LOG_BLOCKS - 1) + SRAM_LOG_BLOCK_SIZE) + 2:SRAM_LOG_BLOCK_SIZE + 2];
	always @(*) begin
		cs_data = 0;
		cs_inst = 0;
		sram_d_rdata_o = 0;
		sram_i_rdata_o = 0;
		begin : sv2v_autoblock_1
			reg [SRAM_LOG_BLOCKS - 1:0] i;
			for (i = 0; i < SRAM_NUM_BLOCKS; i = i + 1)
				begin
					if (sram_d_req_i && (i == sram_d_cs_addr))
						cs_data[i] = 1;
					if (sram_i_req_i && (i == sram_i_cs_addr))
						cs_inst[i] = 1;
					if (cs_data_prev[i] == 1'b1)
						sram_d_rdata_o = sram_d_read_vec[i];
					if (cs_inst_prev[i] == 1'b1)
						sram_i_rdata_o = sram_i_read_vec[i];
				end
		end
	end
	always @(posedge clk_i) begin
		cs_data_prev <= cs_data;
		cs_inst_prev <= cs_inst;
	end
	sky130_sram_2kbyte_1rw1r_32x512_8 \sram0 (
		.clk0(clk_i),
		.csb0(~cs_data[0]),
		.web0(~sram_d_we_i),
		.wmask0(sram_d_be_i),
		.addr0(sram_d_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.din0(sram_d_wdata_i),
		.dout0(sram_d_read_vec[0]),
		.clk1(clk_i),
		.csb1(~cs_inst[0]),
		.addr1(sram_i_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.dout1(sram_i_read_vec[0])
	);
	sky130_sram_2kbyte_1rw1r_32x512_8 \sram1 (
		.clk0(clk_i),
		.csb0(~cs_data[1]),
		.web0(~sram_d_we_i),
		.wmask0(sram_d_be_i),
		.addr0(sram_d_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.din0(sram_d_wdata_i),
		.dout0(sram_d_read_vec[1]),
		.clk1(clk_i),
		.csb1(~cs_inst[1]),
		.addr1(sram_i_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.dout1(sram_i_read_vec[1])
	);
	sky130_sram_2kbyte_1rw1r_32x512_8 \sram2 (
		.clk0(clk_i),
		.csb0(~cs_data[2]),
		.web0(~sram_d_we_i),
		.wmask0(sram_d_be_i),
		.addr0(sram_d_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.din0(sram_d_wdata_i),
		.dout0(sram_d_read_vec[2]),
		.clk1(clk_i),
		.csb1(~cs_inst[2]),
		.addr1(sram_i_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.dout1(sram_i_read_vec[2])
	);
	sky130_sram_2kbyte_1rw1r_32x512_8 \sram3 (
		.clk0(clk_i),
		.csb0(~cs_data[3]),
		.web0(~sram_d_we_i),
		.wmask0(sram_d_be_i),
		.addr0(sram_d_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.din0(sram_d_wdata_i),
		.dout0(sram_d_read_vec[3]),
		.clk1(clk_i),
		.csb1(~cs_inst[3]),
		.addr1(sram_i_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.dout1(sram_i_read_vec[3])
	);
	sky130_sram_2kbyte_1rw1r_32x512_8 \sram4 (
		.clk0(clk_i),
		.csb0(~cs_data[4]),
		.web0(~sram_d_we_i),
		.wmask0(sram_d_be_i),
		.addr0(sram_d_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.din0(sram_d_wdata_i),
		.dout0(sram_d_read_vec[4]),
		.clk1(clk_i),
		.csb1(~cs_inst[4]),
		.addr1(sram_i_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.dout1(sram_i_read_vec[4])
	);
	sky130_sram_2kbyte_1rw1r_32x512_8 \sram5 (
		.clk0(clk_i),
		.csb0(~cs_data[5]),
		.web0(~sram_d_we_i),
		.wmask0(sram_d_be_i),
		.addr0(sram_d_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.din0(sram_d_wdata_i),
		.dout0(sram_d_read_vec[5]),
		.clk1(clk_i),
		.csb1(~cs_inst[5]),
		.addr1(sram_i_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.dout1(sram_i_read_vec[5])
	);
	sky130_sram_2kbyte_1rw1r_32x512_8 \sram6 (
		.clk0(clk_i),
		.csb0(~cs_data[6]),
		.web0(~sram_d_we_i),
		.wmask0(sram_d_be_i),
		.addr0(sram_d_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.din0(sram_d_wdata_i),
		.dout0(sram_d_read_vec[6]),
		.clk1(clk_i),
		.csb1(~cs_inst[6]),
		.addr1(sram_i_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.dout1(sram_i_read_vec[6])
	);
	sky130_sram_2kbyte_1rw1r_32x512_8 \sram7 (
		.clk0(clk_i),
		.csb0(~cs_data[7]),
		.web0(~sram_d_we_i),
		.wmask0(sram_d_be_i),
		.addr0(sram_d_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.din0(sram_d_wdata_i),
		.dout0(sram_d_read_vec[7]),
		.clk1(clk_i),
		.csb1(~cs_inst[7]),
		.addr1(sram_i_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.dout1(sram_i_read_vec[7])
	);
	sky130_sram_2kbyte_1rw1r_32x512_8 \sram8 (
		.clk0(clk_i),
		.csb0(~cs_data[8]),
		.web0(~sram_d_we_i),
		.wmask0(sram_d_be_i),
		.addr0(sram_d_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.din0(sram_d_wdata_i),
		.dout0(sram_d_read_vec[8]),
		.clk1(clk_i),
		.csb1(~cs_inst[8]),
		.addr1(sram_i_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.dout1(sram_i_read_vec[8])
	);
	sky130_sram_2kbyte_1rw1r_32x512_8 \sram9 (
		.clk0(clk_i),
		.csb0(~cs_data[9]),
		.web0(~sram_d_we_i),
		.wmask0(sram_d_be_i),
		.addr0(sram_d_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.din0(sram_d_wdata_i),
		.dout0(sram_d_read_vec[9]),
		.clk1(clk_i),
		.csb1(~cs_inst[9]),
		.addr1(sram_i_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.dout1(sram_i_read_vec[9])
	);
	sky130_sram_2kbyte_1rw1r_32x512_8 \sram10 (
		.clk0(clk_i),
		.csb0(~cs_data[10]),
		.web0(~sram_d_we_i),
		.wmask0(sram_d_be_i),
		.addr0(sram_d_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.din0(sram_d_wdata_i),
		.dout0(sram_d_read_vec[10]),
		.clk1(clk_i),
		.csb1(~cs_inst[10]),
		.addr1(sram_i_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.dout1(sram_i_read_vec[10])
	);
	sky130_sram_2kbyte_1rw1r_32x512_8 \sram11 (
		.clk0(clk_i),
		.csb0(~cs_data[11]),
		.web0(~sram_d_we_i),
		.wmask0(sram_d_be_i),
		.addr0(sram_d_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.din0(sram_d_wdata_i),
		.dout0(sram_d_read_vec[11]),
		.clk1(clk_i),
		.csb1(~cs_inst[11]),
		.addr1(sram_i_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.dout1(sram_i_read_vec[11])
	);
	sky130_sram_2kbyte_1rw1r_32x512_8 \sram12 (
		.clk0(clk_i),
		.csb0(~cs_data[12]),
		.web0(~sram_d_we_i),
		.wmask0(sram_d_be_i),
		.addr0(sram_d_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.din0(sram_d_wdata_i),
		.dout0(sram_d_read_vec[12]),
		.clk1(clk_i),
		.csb1(~cs_inst[12]),
		.addr1(sram_i_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.dout1(sram_i_read_vec[12])
	);
	sky130_sram_2kbyte_1rw1r_32x512_8 \sram13 (
		.clk0(clk_i),
		.csb0(~cs_data[13]),
		.web0(~sram_d_we_i),
		.wmask0(sram_d_be_i),
		.addr0(sram_d_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.din0(sram_d_wdata_i),
		.dout0(sram_d_read_vec[13]),
		.clk1(clk_i),
		.csb1(~cs_inst[13]),
		.addr1(sram_i_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.dout1(sram_i_read_vec[13])
	);
	sky130_sram_2kbyte_1rw1r_32x512_8 \sram14 (
		.clk0(clk_i),
		.csb0(~cs_data[14]),
		.web0(~sram_d_we_i),
		.wmask0(sram_d_be_i),
		.addr0(sram_d_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.din0(sram_d_wdata_i),
		.dout0(sram_d_read_vec[14]),
		.clk1(clk_i),
		.csb1(~cs_inst[14]),
		.addr1(sram_i_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.dout1(sram_i_read_vec[14])
	);
	sky130_sram_2kbyte_1rw1r_32x512_8 \sram15 (
		.clk0(clk_i),
		.csb0(~cs_data[15]),
		.web0(~sram_d_we_i),
		.wmask0(sram_d_be_i),
		.addr0(sram_d_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.din0(sram_d_wdata_i),
		.dout0(sram_d_read_vec[15]),
		.clk1(clk_i),
		.csb1(~cs_inst[15]),
		.addr1(sram_i_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.dout1(sram_i_read_vec[15])
	);
	sky130_sram_2kbyte_1rw1r_32x512_8 \sram16 (
		.clk0(clk_i),
		.csb0(~cs_data[16]),
		.web0(~sram_d_we_i),
		.wmask0(sram_d_be_i),
		.addr0(sram_d_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.din0(sram_d_wdata_i),
		.dout0(sram_d_read_vec[16]),
		.clk1(clk_i),
		.csb1(~cs_inst[16]),
		.addr1(sram_i_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.dout1(sram_i_read_vec[16])
	);
	sky130_sram_2kbyte_1rw1r_32x512_8 \sram17 (
		.clk0(clk_i),
		.csb0(~cs_data[17]),
		.web0(~sram_d_we_i),
		.wmask0(sram_d_be_i),
		.addr0(sram_d_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.din0(sram_d_wdata_i),
		.dout0(sram_d_read_vec[17]),
		.clk1(clk_i),
		.csb1(~cs_inst[17]),
		.addr1(sram_i_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.dout1(sram_i_read_vec[17])
	);
	sky130_sram_2kbyte_1rw1r_32x512_8 \sram18 (
		.clk0(clk_i),
		.csb0(~cs_data[18]),
		.web0(~sram_d_we_i),
		.wmask0(sram_d_be_i),
		.addr0(sram_d_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.din0(sram_d_wdata_i),
		.dout0(sram_d_read_vec[18]),
		.clk1(clk_i),
		.csb1(~cs_inst[18]),
		.addr1(sram_i_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.dout1(sram_i_read_vec[18])
	);
	sky130_sram_2kbyte_1rw1r_32x512_8 \sram19 (
		.clk0(clk_i),
		.csb0(~cs_data[19]),
		.web0(~sram_d_we_i),
		.wmask0(sram_d_be_i),
		.addr0(sram_d_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.din0(sram_d_wdata_i),
		.dout0(sram_d_read_vec[19]),
		.clk1(clk_i),
		.csb1(~cs_inst[19]),
		.addr1(sram_i_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.dout1(sram_i_read_vec[19])
	);
	sky130_sram_2kbyte_1rw1r_32x512_8 \sram20 (
		.clk0(clk_i),
		.csb0(~cs_data[20]),
		.web0(~sram_d_we_i),
		.wmask0(sram_d_be_i),
		.addr0(sram_d_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.din0(sram_d_wdata_i),
		.dout0(sram_d_read_vec[20]),
		.clk1(clk_i),
		.csb1(~cs_inst[20]),
		.addr1(sram_i_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.dout1(sram_i_read_vec[20])
	);
	sky130_sram_2kbyte_1rw1r_32x512_8 \sram21 (
		.clk0(clk_i),
		.csb0(~cs_data[21]),
		.web0(~sram_d_we_i),
		.wmask0(sram_d_be_i),
		.addr0(sram_d_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.din0(sram_d_wdata_i),
		.dout0(sram_d_read_vec[21]),
		.clk1(clk_i),
		.csb1(~cs_inst[21]),
		.addr1(sram_i_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.dout1(sram_i_read_vec[21])
	);
	sky130_sram_2kbyte_1rw1r_32x512_8 \sram22 (
		.clk0(clk_i),
		.csb0(~cs_data[22]),
		.web0(~sram_d_we_i),
		.wmask0(sram_d_be_i),
		.addr0(sram_d_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.din0(sram_d_wdata_i),
		.dout0(sram_d_read_vec[22]),
		.clk1(clk_i),
		.csb1(~cs_inst[22]),
		.addr1(sram_i_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.dout1(sram_i_read_vec[22])
	);
	sky130_sram_2kbyte_1rw1r_32x512_8 \sram23 (
		.clk0(clk_i),
		.csb0(~cs_data[23]),
		.web0(~sram_d_we_i),
		.wmask0(sram_d_be_i),
		.addr0(sram_d_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.din0(sram_d_wdata_i),
		.dout0(sram_d_read_vec[23]),
		.clk1(clk_i),
		.csb1(~cs_inst[23]),
		.addr1(sram_i_addr_i[SRAM_LOG_BLOCK_SIZE + 1:2]),
		.dout1(sram_i_read_vec[23])
	);
endmodule
