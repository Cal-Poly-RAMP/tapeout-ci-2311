module UART_Receiver (
	clk,
	en,
	in,
	out,
	done,
	busy,
	err
);
	input wire clk;
	input wire en;
	input wire in;
	output reg [7:0] out;
	output reg done;
	output reg busy;
	output reg err;
	reg [2:0] state;
	reg [2:0] bitIdx = 3'b000;
	reg [1:0] inputSw = 2'b00;
	reg [3:0] clockCount = 4'b0000;
	reg [7:0] receivedData = 8'b00000000;
	initial begin
		out = 8'b00000000;
		err = 1'b0;
		done = 1'b0;
		busy = 1'b0;
	end
	always @(posedge clk) begin
		inputSw <= {inputSw[0], in};
		if (!en)
			state <= 3'b001;
		case (state)
			3'b001: begin
				out <= 8'b00000000;
				err <= 1'b0;
				done <= 1'b0;
				busy <= 1'b0;
				bitIdx <= 3'b000;
				clockCount <= 4'b0000;
				receivedData <= 8'b00000000;
				if (en)
					state <= 3'b010;
			end
			3'b010: begin
				done <= 1'b0;
				busy <= 1'b0;
				if (&clockCount) begin
					state <= 3'b100;
					out <= 8'b00000000;
					bitIdx <= 3'b000;
					clockCount <= 4'b0000;
					receivedData <= 8'b00000000;
					busy <= 1'b1;
					err <= 1'b0;
				end
				else if (!(&inputSw) || |clockCount) begin
					if (&inputSw) begin
						err <= 1'b1;
						state <= 3'b001;
					end
					clockCount <= clockCount + 4'b0001;
				end
			end
			3'b100:
				if (&clockCount) begin
					clockCount <= 4'b0000;
					receivedData[bitIdx] <= inputSw[0];
					if (&bitIdx) begin
						bitIdx <= 3'b000;
						state <= 3'b101;
					end
					else
						bitIdx <= bitIdx + 3'b001;
				end
				else
					clockCount <= clockCount + 4'b0001;
			3'b101:
				if (&clockCount || ((clockCount >= 4'h8) && !(|inputSw))) begin
					state <= 3'b010;
					done <= 1'b1;
					out <= receivedData;
					clockCount <= 4'b0000;
				end
				else begin
					clockCount <= clockCount + 1;
					if (!(|inputSw)) begin
						err <= 1'b1;
						state <= 3'b001;
					end
				end
			default: state <= 3'b010;
		endcase
	end
endmodule
