module SPI_Master_With_Multiple_CS (
	i_Rst_L,
	i_Clk,
	i_wr_cr,
	i_wr_data,
	i_SPI_CS_en,
	i_spi_mode,
	i_ticks_per_half_bit,
	i_TX_Count,
	i_TX_data_length,
	i_TX_Data,
	i_TX_DV,
	o_TX_Ready,
	o_RX_Count,
	i_RX_data_length,
	o_RX_DV,
	o_RX_Data,
	o_SPI_Clk,
	i_SPI_MISO,
	o_SPI_MOSI,
	o_SPI_CS_n
);
	parameter MAX_BYTES_PER_CS = 4;
	parameter CS_INACTIVE_CLKS = 2;
	parameter NUM_CS = 4;
	input i_Rst_L;
	input i_Clk;
	input i_wr_cr;
	input i_wr_data;
	input [NUM_CS - 1:0] i_SPI_CS_en;
	input [1:0] i_spi_mode;
	input [15:0] i_ticks_per_half_bit;
	input [$clog2(MAX_BYTES_PER_CS + 1) - 1:0] i_TX_Count;
	input [3:0] i_TX_data_length;
	input [15:0] i_TX_Data;
	input i_TX_DV;
	output wire o_TX_Ready;
	output reg [$clog2(MAX_BYTES_PER_CS + 1) - 1:0] o_RX_Count;
	input [3:0] i_RX_data_length;
	output wire o_RX_DV;
	output wire [15:0] o_RX_Data;
	output wire o_SPI_Clk;
	input i_SPI_MISO;
	output wire o_SPI_MOSI;
	output wire [NUM_CS - 1:0] o_SPI_CS_n;
	localparam IDLE = 2'b00;
	localparam TRANSFER = 2'b01;
	localparam CS_INACTIVE = 2'b10;
	reg [1:0] r_SM_CS;
	reg [NUM_CS - 1:0] r_CS_n;
	reg [NUM_CS - 1:0] r_SPI_CS_en;
	reg TX_DV_1;
	reg TX_DV_2;
	wire TX_DV;
	reg [$clog2(CS_INACTIVE_CLKS):0] r_CS_Inactive_Count;
	reg [$clog2(MAX_BYTES_PER_CS + 1) - 1:0] r_TX_Count;
	wire w_Master_Ready;
	SPI_Master SPI_Master_Inst(
		.i_Rst_L(i_Rst_L),
		.i_Clk(i_Clk),
		.i_wr_cr(i_wr_cr),
		.i_wr_data(i_wr_data),
		.i_spi_mode(i_spi_mode),
		.i_ticks_per_half_bit(i_ticks_per_half_bit),
		.i_TX_data_length(i_TX_data_length),
		.i_TX_Data(i_TX_Data),
		.i_TX_DV(TX_DV),
		.o_TX_Ready(w_Master_Ready),
		.i_RX_data_length(i_RX_data_length),
		.o_RX_DV(o_RX_DV),
		.o_RX_Data(o_RX_Data),
		.o_SPI_Clk(o_SPI_Clk),
		.i_SPI_MISO(i_SPI_MISO),
		.o_SPI_MOSI(o_SPI_MOSI)
	);
	initial begin
		TX_DV_1 = 1'b0;
		TX_DV_2 = 1'b0;
	end
	assign TX_DV = TX_DV_1 & ~TX_DV_2;
	always @(posedge i_Clk)
		if (~i_Rst_L) begin
			r_SM_CS <= IDLE;
			r_CS_n <= {NUM_CS {1'b1}};
			r_SPI_CS_en <= {NUM_CS {1'b0}};
			r_TX_Count <= 0;
			r_CS_Inactive_Count <= CS_INACTIVE_CLKS[$clog2(CS_INACTIVE_CLKS):0];
			TX_DV_1 <= 1'b0;
			TX_DV_2 <= 1'b0;
		end
		else begin
			TX_DV_1 <= i_TX_DV;
			TX_DV_2 <= TX_DV_1;
			case (r_SM_CS)
				IDLE: begin
					r_SPI_CS_en <= i_SPI_CS_en;
					if (|(r_CS_n & r_SPI_CS_en) & TX_DV) begin
						r_TX_Count <= i_TX_Count - 1'b1;
						begin : sv2v_autoblock_1
							integer i;
							for (i = 0; i < NUM_CS; i = i + 1)
								if (r_SPI_CS_en[i])
									r_CS_n[i] <= 1'b0;
						end
						r_SM_CS <= TRANSFER;
					end
				end
				TRANSFER:
					if (w_Master_Ready)
						if (r_TX_Count > 0) begin
							if (TX_DV)
								r_TX_Count <= r_TX_Count - 1'b1;
						end
						else begin
							r_CS_n <= {NUM_CS {1'b1}};
							r_CS_Inactive_Count <= CS_INACTIVE_CLKS[$clog2(CS_INACTIVE_CLKS):0];
							r_SM_CS <= CS_INACTIVE;
						end
				CS_INACTIVE:
					if (r_CS_Inactive_Count > 0)
						r_CS_Inactive_Count <= r_CS_Inactive_Count - 1'b1;
					else
						r_SM_CS <= IDLE;
				default: begin
					r_CS_n <= {NUM_CS {1'b1}};
					r_SM_CS <= IDLE;
				end
			endcase
		end
	always @(posedge i_Clk)
		if (&r_CS_n)
			o_RX_Count <= 0;
		else if (o_RX_DV)
			o_RX_Count <= o_RX_Count + 1'b1;
	assign o_SPI_CS_n = r_CS_n;
	assign o_TX_Ready = ((r_SM_CS == IDLE) | (((r_SM_CS == TRANSFER) && (w_Master_Ready == 1'b1)) && (r_TX_Count > 0))) & ~TX_DV;
endmodule
