module SPI_Master (
	i_Rst_L,
	i_Clk,
	i_wr_cr,
	i_wr_data,
	i_spi_mode,
	i_ticks_per_half_bit,
	i_TX_data_length,
	i_TX_Data,
	i_TX_DV,
	o_TX_Ready,
	i_RX_data_length,
	o_RX_DV,
	o_RX_Data,
	o_SPI_Clk,
	i_SPI_MISO,
	o_SPI_MOSI
);
	input i_Rst_L;
	input i_Clk;
	input i_wr_cr;
	input i_wr_data;
	input [1:0] i_spi_mode;
	input [15:0] i_ticks_per_half_bit;
	input [3:0] i_TX_data_length;
	input [15:0] i_TX_Data;
	input i_TX_DV;
	output reg o_TX_Ready;
	input [3:0] i_RX_data_length;
	output reg o_RX_DV;
	output reg [15:0] o_RX_Data;
	output reg o_SPI_Clk;
	input i_SPI_MISO;
	output reg o_SPI_MOSI;
	wire w_CPOL;
	wire w_CPHA;
	reg r1_wr_cr = 0;
	reg r2_wr_cr = 0;
	wire wr_cr;
	reg r1_wr_data = 0;
	reg r2_wr_data = 0;
	wire wr_data;
	reg [1:0] r_spi_mode = 2'b00;
	reg [15:0] r_ticks_per_half_bit;
	reg [15:0] r_SPI_Clk_Count;
	reg r_SPI_Clk;
	reg [5:0] r_SPI_Clk_Edges;
	reg r_Leading_Edge;
	reg r_Trailing_Edge;
	reg r_TX_DV;
	reg [3:0] r_TX_data_length;
	wire [5:0] r_TX_data_length_sig;
	reg [15:0] r_TX_Data;
	reg [3:0] r_RX_data_length;
	reg [3:0] r_RX_Bit_Count;
	reg [3:0] r_TX_Bit_Count;
	assign w_CPOL = (r_spi_mode == 2) | (r_spi_mode == 3);
	assign w_CPHA = (r_spi_mode == 1) | (r_spi_mode == 3);
	assign wr_cr = r1_wr_cr & ~r2_wr_cr;
	assign wr_data = r1_wr_data & ~r2_wr_data;
	assign r_TX_data_length_sig = {2'b00, r_TX_data_length};
	always @(posedge i_Clk)
		if (~i_Rst_L) begin
			o_TX_Ready <= 1'b0;
			r_spi_mode <= 0;
			r_ticks_per_half_bit <= 0;
			r_SPI_Clk_Edges <= 0;
			r_Leading_Edge <= 1'b0;
			r_Trailing_Edge <= 1'b0;
			r_SPI_Clk <= w_CPOL;
			r_SPI_Clk_Count <= 0;
		end
		else begin
			r_Leading_Edge <= 1'b0;
			r_Trailing_Edge <= 1'b0;
			r1_wr_cr <= i_wr_cr;
			r2_wr_cr <= r1_wr_cr;
			r1_wr_data <= i_wr_data;
			r2_wr_data <= r1_wr_data;
			if (wr_cr) begin
				r_spi_mode <= i_spi_mode;
				r_ticks_per_half_bit <= i_ticks_per_half_bit;
				r_TX_data_length <= i_TX_data_length;
				r_RX_data_length <= i_RX_data_length;
			end
			if (i_TX_DV) begin
				o_TX_Ready <= 1'b0;
				r_SPI_Clk_Edges <= (r_TX_data_length_sig + 1) << 1;
			end
			else if (r_SPI_Clk_Edges > 0) begin
				o_TX_Ready <= 1'b0;
				if (r_SPI_Clk_Count == ((r_ticks_per_half_bit * 2) - 1)) begin
					r_SPI_Clk_Edges <= r_SPI_Clk_Edges - 1'b1;
					r_Trailing_Edge <= 1'b1;
					r_SPI_Clk_Count <= 0;
					r_SPI_Clk <= ~r_SPI_Clk;
				end
				else if (r_SPI_Clk_Count == (r_ticks_per_half_bit - 1)) begin
					r_SPI_Clk_Edges <= r_SPI_Clk_Edges - 1'b1;
					r_Leading_Edge <= 1'b1;
					r_SPI_Clk_Count <= r_SPI_Clk_Count + 1'b1;
					r_SPI_Clk <= ~r_SPI_Clk;
				end
				else
					r_SPI_Clk_Count <= r_SPI_Clk_Count + 1'b1;
			end
			else
				o_TX_Ready <= 1'b1;
		end
	always @(posedge i_Clk)
		if (~i_Rst_L) begin
			r_TX_Data <= 16'h0000;
			r_TX_DV <= 1'b0;
		end
		else begin
			r_TX_DV <= i_TX_DV;
			if (wr_data)
				r_TX_Data <= i_TX_Data;
		end
	always @(posedge i_Clk)
		if (~i_Rst_L) begin
			o_SPI_MOSI <= 1'b0;
			r_TX_Bit_Count <= 4'b1111;
		end
		else if (o_TX_Ready)
			r_TX_Bit_Count <= r_TX_data_length;
		else if (r_TX_DV & ~w_CPHA) begin
			o_SPI_MOSI <= r_TX_Data[r_TX_data_length];
			r_TX_Bit_Count <= r_TX_data_length - 1;
		end
		else if ((r_Leading_Edge & w_CPHA) | (r_Trailing_Edge & ~w_CPHA)) begin
			r_TX_Bit_Count <= r_TX_Bit_Count - 1'b1;
			o_SPI_MOSI <= r_TX_Data[r_TX_Bit_Count];
		end
	always @(posedge i_Clk)
		if (~i_Rst_L) begin
			o_RX_Data <= 16'h0000;
			o_RX_DV <= 1'b0;
			r_RX_Bit_Count <= 4'b1111;
		end
		else begin
			o_RX_DV <= 1'b0;
			if (o_TX_Ready)
				r_RX_Bit_Count <= r_RX_data_length;
			else if ((r_Leading_Edge & ~w_CPHA) | (r_Trailing_Edge & w_CPHA)) begin
				o_RX_Data[r_RX_Bit_Count] <= i_SPI_MISO;
				r_RX_Bit_Count <= r_RX_Bit_Count - 1'b1;
				if (r_RX_Bit_Count == 4'b0000)
					o_RX_DV <= 1'b1;
			end
		end
	always @(posedge i_Clk)
		if (~i_Rst_L)
			o_SPI_Clk <= w_CPOL;
		else
			o_SPI_Clk <= r_SPI_Clk;
endmodule
