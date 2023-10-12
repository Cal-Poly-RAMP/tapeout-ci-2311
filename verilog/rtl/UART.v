module UART (
	clk,
	wr_cr,
	wr_max_rate_rx,
	wr_max_rate_tx,
	wr_data,
	max_rate_rx,
	max_rate_tx,
	rx,
	rxEn,
	out,
	rxDone,
	rxBusy,
	rxErr,
	tx,
	txEn,
	txStart,
	in,
	txDone,
	txBusy
);
	input wire clk;
	input wr_cr;
	input wr_max_rate_rx;
	input wr_max_rate_tx;
	input wr_data;
	input [31:0] max_rate_rx;
	input [31:0] max_rate_tx;
	input wire rx;
	input wire rxEn;
	output wire [7:0] out;
	output wire rxDone;
	output wire rxBusy;
	output wire rxErr;
	output wire tx;
	input wire txEn;
	input wire txStart;
	input wire [7:0] in;
	output wire txDone;
	output wire txBusy;
	wire rxClk;
	wire txClk;
	reg wr_cr_r1 = 0;
	reg wr_cr_r2 = 0;
	wire wr_cr_r;
	reg wr_max_rate_rx_r1 = 0;
	reg wr_max_rate_rx_r2 = 0;
	wire wr_max_rate_rx_r;
	reg wr_max_rate_tx_r1 = 0;
	reg wr_max_rate_tx_r2 = 0;
	wire wr_max_rate_tx_r;
	reg wr_data_r1 = 0;
	reg wr_data_r2 = 0;
	wire wr_data_r;
	reg txEn_r = 0;
	reg txStart_r = 0;
	reg rxEn_r = 0;
	reg [7:0] data = 0;
	reg [31:0] max_rate_rx_r = 0;
	reg [31:0] max_rate_tx_r = 0;
	assign wr_cr_r = wr_cr_r1 & ~wr_cr_r2;
	assign wr_max_rate_rx_r = wr_max_rate_rx_r1 & ~wr_max_rate_rx_r2;
	assign wr_max_rate_tx_r = wr_max_rate_tx_r1 & ~wr_max_rate_tx_r2;
	assign wr_data_r = wr_data_r1 & ~wr_data_r2;
	always @(posedge clk) begin
		wr_cr_r1 <= wr_cr;
		wr_cr_r2 <= wr_cr_r1;
		wr_max_rate_rx_r1 <= wr_max_rate_rx;
		wr_max_rate_rx_r2 <= wr_max_rate_rx_r1;
		wr_max_rate_tx_r1 <= wr_max_rate_tx;
		wr_max_rate_tx_r2 <= wr_max_rate_tx_r1;
		wr_data_r1 <= wr_data;
		wr_data_r2 <= wr_data_r1;
		if (wr_cr_r) begin
			txEn_r <= txEn;
			rxEn_r <= rxEn;
			txStart_r <= txStart;
		end
		if (wr_max_rate_rx_r)
			max_rate_rx_r <= max_rate_rx;
		if (wr_max_rate_tx_r)
			max_rate_tx_r <= max_rate_tx;
		if (wr_data_r)
			data <= in;
	end
	BaudRateGenerator generatorInst(
		.clk(clk),
		.max_rate_rx(max_rate_rx_r),
		.max_rate_tx(max_rate_tx_r),
		.rxClk(rxClk),
		.txClk(txClk)
	);
	UART_Receiver rxInst(
		.clk(rxClk),
		.en(rxEn_r),
		.in(rx),
		.out(out),
		.done(rxDone),
		.busy(rxBusy),
		.err(rxErr)
	);
	UART_Transmitter txInst(
		.clk(txClk),
		.en(txEn_r),
		.start(txStart_r),
		.in(data),
		.out(tx),
		.done(txDone),
		.busy(txBusy)
	);
endmodule
