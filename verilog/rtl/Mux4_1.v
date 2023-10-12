module Mux4_1 (
	sel,
	A,
	B,
	C,
	D,
	MUX_OUT
);
	parameter WIDTH = 1;
	input [1:0] sel;
	input [WIDTH - 1:0] A;
	input [WIDTH - 1:0] B;
	input [WIDTH - 1:0] C;
	input [WIDTH - 1:0] D;
	output reg [WIDTH - 1:0] MUX_OUT;
	always @(*)
		case (sel)
			2'b00: MUX_OUT = A;
			2'b01: MUX_OUT = B;
			2'b10: MUX_OUT = C;
			2'b11: MUX_OUT = D;
			default: MUX_OUT = A;
		endcase
endmodule
