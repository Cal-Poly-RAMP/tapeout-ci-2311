module DeMux1_4 (
	sel,
	DEMUX_IN,
	A,
	B,
	C,
	D
);
	parameter WIDTH = 1;
	input [1:0] sel;
	input [WIDTH - 1:0] DEMUX_IN;
	output reg [WIDTH - 1:0] A;
	output reg [WIDTH - 1:0] B;
	output reg [WIDTH - 1:0] C;
	output reg [WIDTH - 1:0] D;
	always @(*)
		case (sel)
			2'b00: begin
				A = DEMUX_IN;
				B = 0;
				C = 0;
				D = 0;
			end
			2'b01: begin
				A = 0;
				B = DEMUX_IN;
				C = 0;
				D = 0;
			end
			2'b10: begin
				A = 0;
				B = 0;
				C = DEMUX_IN;
				D = 0;
			end
			2'b11: begin
				A = 0;
				B = 0;
				C = 0;
				D = DEMUX_IN;
			end
			default: begin
				A = DEMUX_IN;
				B = 0;
				C = 0;
				D = 0;
			end
		endcase
endmodule
