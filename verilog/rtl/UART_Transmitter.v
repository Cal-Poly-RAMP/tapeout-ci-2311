module UART_Transmitter (
	clk,
	en,
	start,
	in,
	out,
	done,
	busy
);
	input wire clk;
	input wire en;
	input wire start;
	input wire [7:0] in;
	output reg out;
	output reg done;
	output reg busy;
	reg [2:0] state = 3'b001;
	reg [7:0] data = 8'b00000000;
	reg [2:0] bitIdx = 3'b000;
	wire [2:0] idx;
	reg start_1;
	reg start_2;
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
			default: state <= 3'b010;
			3'b010: begin
				out <= 1'b1;
				done <= 1'b0;
				busy <= 1'b0;
				bitIdx <= 3'b000;
				data <= 8'b00000000;
				if (start_t & en) begin
					data <= in;
					state <= 3'b011;
				end
			end
			3'b011: begin
				out <= 1'b0;
				busy <= 1'b1;
				state <= 3'b100;
			end
			3'b100: begin
				out <= data[idx];
				if (&bitIdx) begin
					bitIdx <= 3'b000;
					state <= 3'b101;
				end
				else
					bitIdx <= bitIdx + 1'b1;
			end
			3'b101: begin
				done <= 1'b1;
				data <= 8'b00000000;
				state <= 3'b010;
			end
		endcase
	end
endmodule
