module clk_divider (
	clk,
	nrst,
	ena,
	out
);
	parameter WIDTH = 32;
	input clk;
	input nrst;
	input ena;
	output reg [WIDTH - 1:0] out = 1'sb0;
	always @(posedge clk)
		if (~nrst)
			out[WIDTH - 1:0] <= 1'sb0;
		else if (ena)
			out[WIDTH - 1:0] <= out[WIDTH - 1:0] + 1'b1;
endmodule
