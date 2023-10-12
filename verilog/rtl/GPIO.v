module GPIO (
	CLK,
	MOD,
	SEL,
	IRQEN,
	IRQPOL,
	IRQRES,
	MUX_IN,
	MUX_OUT,
	INTR,
	IN,
	OUT,
	OEB
);
	input CLK;
	input [1:0] MOD;
	input [1:0] SEL;
	input IRQEN;
	input IRQPOL;
	input IRQRES;
	output wire [3:0] MUX_IN;
	input [3:0] MUX_OUT;
	output reg INTR = 0;
	input IN;
	output wire OUT;
	output wire OEB;
	reg irqres_reg1;
	reg irqres_reg2;
	wire irqres;
	Mux4_1 out_mux(
		.sel(SEL),
		.A(MUX_OUT[0]),
		.B(MUX_OUT[1]),
		.C(MUX_OUT[2]),
		.D(MUX_OUT[3]),
		.MUX_OUT(OUT)
	);
	Mux4_1 oeb_mux(
		.sel(MOD),
		.A(1'b0),
		.B(1'b1),
		.C(~OUT),
		.D(1'b0),
		.MUX_OUT(OEB)
	);
	DeMux1_4 in_demux(
		.sel(SEL),
		.DEMUX_IN(IN & ~OEB),
		.A(MUX_IN[0]),
		.B(MUX_IN[1]),
		.C(MUX_IN[2]),
		.D(MUX_IN[3])
	);
	always @(posedge CLK) begin
		irqres_reg1 <= IRQRES;
		irqres_reg2 <= irqres_reg1;
	end
	assign irqres = irqres_reg1 & ~irqres_reg2;
	reg IN_last = 1'sb0;
	always @(posedge CLK) begin
		if (irqres)
			INTR <= 1'b0;
		else if (IRQEN)
			if ((IRQPOL && (IN_last == 1'b0)) && (IN == 1'b1))
				INTR <= 1'sb1;
			else if ((!IRQPOL && (IN_last == 1'b1)) && (IN == 1'b0))
				INTR <= 1'sb1;
		IN_last <= IN;
	end
endmodule
