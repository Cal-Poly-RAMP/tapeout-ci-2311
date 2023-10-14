`timescale 1ns / 1ps

/*
 * Simple 8-bit UART realization.
 * Combine receiver, transmitter and baud rate generator.
 * Able to operate 8 bits of serial data, one start bit, one stop bit.
 */
module UART (
    input wire clk,
    input wr_cr,
    input wr_max_rate_rx,
    input wr_max_rate_tx,
    input wr_data,
    input [31:0] max_rate_rx,
    input [31:0] max_rate_tx,

    // rx interface
    input wire rx,
    input wire rxEn,
    output wire [7:0] out,
    output wire rxDone,
    output wire rxBusy,
    output wire rxErr,

    // tx interface
    output wire tx,
    input wire txEn,
    input wire txStart,
    input wire [7:0] in,
    output wire txDone,
    output wire txBusy
);
wire rxClk;
wire txClk;

logic wr_cr_r1 = 0, wr_cr_r2 = 0, wr_cr_r;
logic wr_max_rate_rx_r1 = 0, wr_max_rate_rx_r2 = 0, wr_max_rate_rx_r;
logic wr_max_rate_tx_r1 = 0, wr_max_rate_tx_r2 = 0, wr_max_rate_tx_r;
logic wr_data_r1 = 0, wr_data_r2 = 0, wr_data_r;
logic txEn_r = 0, txStart_r = 0, rxEn_r = 0;
logic [7:0] data = 0;
logic [31:0] max_rate_rx_r = 0;
logic [31:0] max_rate_tx_r = 0;

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

BaudRateGenerator generatorInst (
    .clk(clk),
    .max_rate_rx(max_rate_rx_r),
    .max_rate_tx(max_rate_tx_r),
    .rxClk(rxClk),
    .txClk(txClk)
);

UART_Receiver rxInst (
    .clk(rxClk),
    .en(rxEn_r),
    .in(rx),
    .out(out),
    .done(rxDone),
    .busy(rxBusy),
    .err(rxErr)
);

UART_Transmitter txInst (
    .clk(txClk),
    .en(txEn_r),
    .start(txStart_r),
    .in(data),
    .out(tx),
    .done(txDone),
    .busy(txBusy)
);

endmodule
