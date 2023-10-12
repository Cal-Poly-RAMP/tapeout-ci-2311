module BaudRateGenerator (
	clk,
	max_rate_rx,
	max_rate_tx,
	rxClk,
	txClk
);
	input wire clk;
	input [31:0] max_rate_rx;
	input [31:0] max_rate_tx;
	output reg rxClk;
	output reg txClk;
	reg [31:0] rxCounter = 0;
	reg [31:0] txCounter = 0;
	initial begin
		rxClk = 1'b0;
		txClk = 1'b0;
	end
	always @(posedge clk) begin
		if (rxCounter == max_rate_rx) begin
			rxCounter <= 0;
			rxClk <= ~rxClk;
		end
		else
			rxCounter <= rxCounter + 1'b1;
		if (txCounter == max_rate_tx) begin
			txCounter <= 0;
			txClk <= ~txClk;
		end
		else
			txCounter <= txCounter + 1'b1;
	end
endmodule
