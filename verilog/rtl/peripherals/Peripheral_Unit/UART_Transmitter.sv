`timescale 1ns / 1ps

`include "UART_States.svh"

/*
 * 8-bit UART Transmitter.
 * Able to transmit 8 bits of serial data, one start bit, one stop bit.
 * When transmit is complete {done} is driven high for one clock cycle.
 * When transmit is in progress {busy} is driven high.
 * Clock should be decreased to baud rate.
 */
module UART_Transmitter (
    input  wire       clk,   // baud rate
    input  wire       en,
    input  wire       start, // start of transaction
    input  wire [7:0] in,    // data to transmit
    output reg        out,   // tx
    output reg        done,  // end on transaction
    output reg        busy   // transaction is in process
);
    reg [2:0] state  = `RESET;
    reg [7:0] data   = 8'b0; // to store a copy of input data
    reg [2:0] bitIdx = 3'b0; // for 8-bit data
    wire [2:0] idx;
    reg start_1, start_2;
    wire start_t;

    assign idx = bitIdx;
    assign start_t = start_1 & ~start_2;
    
    initial begin
        start_1 = 0;
        start_2 = 0;
    end

    always @(posedge clk) begin
        start_1 <= start;
        start_2 <= start_1;
        case (state)
            default     : begin
                state   <= `IDLE;
            end
            `IDLE       : begin
                out     <= 1'b1; // drive line high for idle
                done    <= 1'b0;
                busy    <= 1'b0;
                bitIdx  <= 3'b0;
                data    <= 8'b0;
                if (start_t & en) begin
                    data    <= in; // save a copy of input data
                    state   <= `START_BIT;
                end
            end
            `START_BIT  : begin
                out     <= 1'b0; // send start bit (low)
                busy    <= 1'b1;
                state   <= `DATA_BITS;
            end
            `DATA_BITS  : begin // Wait 8 clock cycles for data bits to be sent
                out     <= data[idx];
                if (&bitIdx) begin
                    bitIdx  <= 3'b0;
                    state   <= `STOP_BIT;
                end else begin
                    bitIdx  <= bitIdx + 1'b1;
                end
            end
            `STOP_BIT   : begin // Send out Stop bit (high)
                done    <= 1'b1;
                data    <= 8'b0;
                state   <= `IDLE;
            end
        endcase
    end

endmodule
