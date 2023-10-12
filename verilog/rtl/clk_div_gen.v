module clk_div_gen (
	clk,
	count,
	sclk
);
	input clk;
	input [15:0] count;
	output reg sclk = 0;
	reg [15:0] div_cnt = 0;
	always @(posedge clk)
		if (div_cnt == count) begin
			sclk = ~sclk;
			div_cnt = 0;
		end
		else
			div_cnt = div_cnt + 1;
endmodule
