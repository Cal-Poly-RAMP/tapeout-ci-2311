`timescale 1ns / 1ps
/*
 * Baud rate generator to divide {CLOCK_RATE} (internal board clock) into
 * a rx/tx {BAUD_RATE} pair with rx oversamples by 16x.
 */
module BaudRateGenerator (
    input wire clk, // board clock
    input [31:0] max_rate_rx,
    input [31:0] max_rate_tx,
    output reg rxClk, // baud rate for rx
    output reg txClk // baud rate for tx
);
//max_rate_rx = CLOCK_RATE / (2 * BAUD_RATE * 16); // 16x oversample
//max_rate_tx = CLOCK_RATE / (2 * BAUD_RATE);

reg [31:0] rxCounter = 0;
reg [31:0] txCounter = 0;

initial begin
    rxClk = 1'b0;
    txClk = 1'b0;
end

always @(posedge clk) begin
    // rx clock
    if (rxCounter == max_rate_rx) begin
        rxCounter <= 0;
        rxClk <= ~rxClk;
    end else begin
        rxCounter <= rxCounter + 1'b1;
    end
    // tx clock
    if (txCounter == max_rate_tx) begin
        txCounter <= 0;
        txClk <= ~txClk;
    end else begin
        txCounter <= txCounter + 1'b1;
    end
end

endmodule
