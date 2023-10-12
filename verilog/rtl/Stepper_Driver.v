module Stepper_Driver (
	step,
	dir,
	bypass,
	A_P,
	A_M,
	B_P,
	B_M
);
	input step;
	input dir;
	input bypass;
	output wire A_P;
	output wire A_M;
	output wire B_P;
	output wire B_M;
	reg [1:0] state = 0;
	assign A_P = (bypass ? dir : ~state[1]);
	assign B_P = (bypass ? step : (~state[1] && state[0]) || (state[1] && ~state[0]));
	assign A_M = (bypass ? 0 : ~A_P);
	assign B_M = (bypass ? 0 : ~B_P);
	always @(posedge step) state <= state + (dir ? 1 : -1);
endmodule
