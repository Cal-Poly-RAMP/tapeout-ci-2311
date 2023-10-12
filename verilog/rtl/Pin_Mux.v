module Pin_Mux (
	CLK,
	MOD_1,
	SEL_1,
	MOD_2,
	SEL_2,
	MOD_3,
	SEL_3,
	MOD_4,
	SEL_4,
	MOD_5,
	SEL_5,
	MOD_6,
	SEL_6,
	MOD_7,
	SEL_7,
	MOD_8,
	SEL_8,
	MOD_9,
	SEL_9,
	MOD_10,
	SEL_10,
	MOD_11,
	SEL_11,
	MOD_12,
	SEL_12,
	MOD_13,
	SEL_13,
	MOD_14,
	SEL_14,
	MOD_15,
	SEL_15,
	MOD_16,
	SEL_16,
	MOD_17,
	SEL_17,
	MOD_18,
	SEL_18,
	MOD_19,
	SEL_19,
	MOD_20,
	SEL_20,
	MOD_21,
	SEL_21,
	MOD_22,
	SEL_22,
	MOD_23,
	SEL_23,
	MOD_24,
	SEL_24,
	IRQEN,
	IRQPOL,
	IRQRES,
	MUX_IN_1,
	MUX_OUT_1,
	MUX_IN_2,
	MUX_OUT_2,
	MUX_IN_3,
	MUX_OUT_3,
	MUX_IN_4,
	MUX_OUT_4,
	MUX_IN_5,
	MUX_OUT_5,
	MUX_IN_6,
	MUX_OUT_6,
	MUX_IN_7,
	MUX_OUT_7,
	MUX_IN_8,
	MUX_OUT_8,
	MUX_IN_9,
	MUX_OUT_9,
	MUX_IN_10,
	MUX_OUT_10,
	MUX_IN_11,
	MUX_OUT_11,
	MUX_IN_12,
	MUX_OUT_12,
	MUX_IN_13,
	MUX_OUT_13,
	MUX_IN_14,
	MUX_OUT_14,
	MUX_IN_15,
	MUX_OUT_15,
	MUX_IN_16,
	MUX_OUT_16,
	MUX_IN_17,
	MUX_OUT_17,
	MUX_IN_18,
	MUX_OUT_18,
	MUX_IN_19,
	MUX_OUT_19,
	MUX_IN_20,
	MUX_OUT_20,
	MUX_IN_21,
	MUX_OUT_21,
	MUX_IN_22,
	MUX_OUT_22,
	MUX_IN_23,
	MUX_OUT_23,
	MUX_IN_24,
	MUX_OUT_24,
	INTR,
	IN,
	OUT,
	OEB
);
	input CLK;
	input [1:0] MOD_1;
	input [1:0] SEL_1;
	input [1:0] MOD_2;
	input [1:0] SEL_2;
	input [1:0] MOD_3;
	input [1:0] SEL_3;
	input [1:0] MOD_4;
	input [1:0] SEL_4;
	input [1:0] MOD_5;
	input [1:0] SEL_5;
	input [1:0] MOD_6;
	input [1:0] SEL_6;
	input [1:0] MOD_7;
	input [1:0] SEL_7;
	input [1:0] MOD_8;
	input [1:0] SEL_8;
	input [1:0] MOD_9;
	input [1:0] SEL_9;
	input [1:0] MOD_10;
	input [1:0] SEL_10;
	input [1:0] MOD_11;
	input [1:0] SEL_11;
	input [1:0] MOD_12;
	input [1:0] SEL_12;
	input [1:0] MOD_13;
	input [1:0] SEL_13;
	input [1:0] MOD_14;
	input [1:0] SEL_14;
	input [1:0] MOD_15;
	input [1:0] SEL_15;
	input [1:0] MOD_16;
	input [1:0] SEL_16;
	input [1:0] MOD_17;
	input [1:0] SEL_17;
	input [1:0] MOD_18;
	input [1:0] SEL_18;
	input [1:0] MOD_19;
	input [1:0] SEL_19;
	input [1:0] MOD_20;
	input [1:0] SEL_20;
	input [1:0] MOD_21;
	input [1:0] SEL_21;
	input [1:0] MOD_22;
	input [1:0] SEL_22;
	input [1:0] MOD_23;
	input [1:0] SEL_23;
	input [1:0] MOD_24;
	input [1:0] SEL_24;
	input [23:0] IRQEN;
	input [23:0] IRQPOL;
	input [23:0] IRQRES;
	output wire [3:0] MUX_IN_1;
	input [3:0] MUX_OUT_1;
	output wire [3:0] MUX_IN_2;
	input [3:0] MUX_OUT_2;
	output wire [3:0] MUX_IN_3;
	input [3:0] MUX_OUT_3;
	output wire [3:0] MUX_IN_4;
	input [3:0] MUX_OUT_4;
	output wire [3:0] MUX_IN_5;
	input [3:0] MUX_OUT_5;
	output wire [3:0] MUX_IN_6;
	input [3:0] MUX_OUT_6;
	output wire [3:0] MUX_IN_7;
	input [3:0] MUX_OUT_7;
	output wire [3:0] MUX_IN_8;
	input [3:0] MUX_OUT_8;
	output wire [3:0] MUX_IN_9;
	input [3:0] MUX_OUT_9;
	output wire [3:0] MUX_IN_10;
	input [3:0] MUX_OUT_10;
	output wire [3:0] MUX_IN_11;
	input [3:0] MUX_OUT_11;
	output wire [3:0] MUX_IN_12;
	input [3:0] MUX_OUT_12;
	output wire [3:0] MUX_IN_13;
	input [3:0] MUX_OUT_13;
	output wire [3:0] MUX_IN_14;
	input [3:0] MUX_OUT_14;
	output wire [3:0] MUX_IN_15;
	input [3:0] MUX_OUT_15;
	output wire [3:0] MUX_IN_16;
	input [3:0] MUX_OUT_16;
	output wire [3:0] MUX_IN_17;
	input [3:0] MUX_OUT_17;
	output wire [3:0] MUX_IN_18;
	input [3:0] MUX_OUT_18;
	output wire [3:0] MUX_IN_19;
	input [3:0] MUX_OUT_19;
	output wire [3:0] MUX_IN_20;
	input [3:0] MUX_OUT_20;
	output wire [3:0] MUX_IN_21;
	input [3:0] MUX_OUT_21;
	output wire [3:0] MUX_IN_22;
	input [3:0] MUX_OUT_22;
	output wire [3:0] MUX_IN_23;
	input [3:0] MUX_OUT_23;
	output wire [3:0] MUX_IN_24;
	input [3:0] MUX_OUT_24;
	output wire [23:0] INTR;
	input [23:0] IN;
	output wire [23:0] OUT;
	output wire [23:0] OEB;
	GPIO PIN_1(
		.CLK(CLK),
		.MOD(MOD_1),
		.SEL(SEL_1),
		.IRQEN(IRQEN[0]),
		.IRQPOL(IRQPOL[0]),
		.IRQRES(IRQRES[0]),
		.MUX_IN(MUX_IN_1),
		.MUX_OUT(MUX_OUT_1),
		.INTR(INTR[0]),
		.IN(IN[0]),
		.OUT(OUT[0]),
		.OEB(OEB[0])
	);
	GPIO PIN_2(
		.CLK(CLK),
		.MOD(MOD_2),
		.SEL(SEL_2),
		.IRQEN(IRQEN[1]),
		.IRQPOL(IRQPOL[1]),
		.IRQRES(IRQRES[1]),
		.MUX_IN(MUX_IN_2),
		.MUX_OUT(MUX_OUT_2),
		.INTR(INTR[1]),
		.IN(IN[1]),
		.OUT(OUT[1]),
		.OEB(OEB[1])
	);
	GPIO PIN_3(
		.CLK(CLK),
		.MOD(MOD_3),
		.SEL(SEL_3),
		.IRQEN(IRQEN[2]),
		.IRQPOL(IRQPOL[2]),
		.IRQRES(IRQRES[2]),
		.MUX_IN(MUX_IN_3),
		.MUX_OUT(MUX_OUT_3),
		.INTR(INTR[2]),
		.IN(IN[2]),
		.OUT(OUT[2]),
		.OEB(OEB[2])
	);
	GPIO PIN_4(
		.CLK(CLK),
		.MOD(MOD_4),
		.SEL(SEL_4),
		.IRQEN(IRQEN[3]),
		.IRQPOL(IRQPOL[3]),
		.IRQRES(IRQRES[3]),
		.MUX_IN(MUX_IN_4),
		.MUX_OUT(MUX_OUT_4),
		.INTR(INTR[3]),
		.IN(IN[3]),
		.OUT(OUT[3]),
		.OEB(OEB[3])
	);
	GPIO PIN_5(
		.CLK(CLK),
		.MOD(MOD_5),
		.SEL(SEL_5),
		.IRQEN(IRQEN[4]),
		.IRQPOL(IRQPOL[4]),
		.IRQRES(IRQRES[4]),
		.MUX_IN(MUX_IN_5),
		.MUX_OUT(MUX_OUT_5),
		.INTR(INTR[4]),
		.IN(IN[4]),
		.OUT(OUT[4]),
		.OEB(OEB[4])
	);
	GPIO PIN_6(
		.CLK(CLK),
		.MOD(MOD_6),
		.SEL(SEL_6),
		.IRQEN(IRQEN[5]),
		.IRQPOL(IRQPOL[5]),
		.IRQRES(IRQRES[5]),
		.MUX_IN(MUX_IN_6),
		.MUX_OUT(MUX_OUT_6),
		.INTR(INTR[5]),
		.IN(IN[5]),
		.OUT(OUT[5]),
		.OEB(OEB[5])
	);
	GPIO PIN_7(
		.CLK(CLK),
		.MOD(MOD_7),
		.SEL(SEL_7),
		.IRQEN(IRQEN[6]),
		.IRQPOL(IRQPOL[6]),
		.IRQRES(IRQRES[6]),
		.MUX_IN(MUX_IN_7),
		.MUX_OUT(MUX_OUT_7),
		.INTR(INTR[6]),
		.IN(IN[6]),
		.OUT(OUT[6]),
		.OEB(OEB[6])
	);
	GPIO PIN_8(
		.CLK(CLK),
		.MOD(MOD_8),
		.SEL(SEL_8),
		.IRQEN(IRQEN[7]),
		.IRQPOL(IRQPOL[7]),
		.IRQRES(IRQRES[7]),
		.MUX_IN(MUX_IN_8),
		.MUX_OUT(MUX_OUT_8),
		.INTR(INTR[7]),
		.IN(IN[7]),
		.OUT(OUT[7]),
		.OEB(OEB[7])
	);
	GPIO PIN_9(
		.CLK(CLK),
		.MOD(MOD_9),
		.SEL(SEL_9),
		.IRQEN(IRQEN[8]),
		.IRQPOL(IRQPOL[8]),
		.IRQRES(IRQRES[8]),
		.MUX_IN(MUX_IN_9),
		.MUX_OUT(MUX_OUT_9),
		.INTR(INTR[8]),
		.IN(IN[8]),
		.OUT(OUT[8]),
		.OEB(OEB[8])
	);
	GPIO PIN_10(
		.CLK(CLK),
		.MOD(MOD_10),
		.SEL(SEL_10),
		.IRQEN(IRQEN[9]),
		.IRQPOL(IRQPOL[9]),
		.IRQRES(IRQRES[9]),
		.MUX_IN(MUX_IN_10),
		.MUX_OUT(MUX_OUT_10),
		.INTR(INTR[9]),
		.IN(IN[9]),
		.OUT(OUT[9]),
		.OEB(OEB[9])
	);
	GPIO PIN_11(
		.CLK(CLK),
		.MOD(MOD_11),
		.SEL(SEL_11),
		.IRQEN(IRQEN[10]),
		.IRQPOL(IRQPOL[10]),
		.IRQRES(IRQRES[10]),
		.MUX_IN(MUX_IN_11),
		.MUX_OUT(MUX_OUT_11),
		.INTR(INTR[10]),
		.IN(IN[10]),
		.OUT(OUT[10]),
		.OEB(OEB[10])
	);
	GPIO PIN_12(
		.CLK(CLK),
		.MOD(MOD_12),
		.SEL(SEL_12),
		.IRQEN(IRQEN[11]),
		.IRQPOL(IRQPOL[11]),
		.IRQRES(IRQRES[11]),
		.MUX_IN(MUX_IN_12),
		.MUX_OUT(MUX_OUT_12),
		.INTR(INTR[11]),
		.IN(IN[11]),
		.OUT(OUT[11]),
		.OEB(OEB[11])
	);
	GPIO PIN_13(
		.CLK(CLK),
		.MOD(MOD_13),
		.SEL(SEL_13),
		.IRQEN(IRQEN[12]),
		.IRQPOL(IRQPOL[12]),
		.IRQRES(IRQRES[12]),
		.MUX_IN(MUX_IN_13),
		.MUX_OUT(MUX_OUT_13),
		.INTR(INTR[12]),
		.IN(IN[12]),
		.OUT(OUT[12]),
		.OEB(OEB[12])
	);
	GPIO PIN_14(
		.CLK(CLK),
		.MOD(MOD_14),
		.SEL(SEL_14),
		.IRQEN(IRQEN[13]),
		.IRQPOL(IRQPOL[13]),
		.IRQRES(IRQRES[13]),
		.MUX_IN(MUX_IN_14),
		.MUX_OUT(MUX_OUT_14),
		.INTR(INTR[13]),
		.IN(IN[13]),
		.OUT(OUT[13]),
		.OEB(OEB[13])
	);
	GPIO PIN_15(
		.CLK(CLK),
		.MOD(MOD_15),
		.SEL(SEL_15),
		.IRQEN(IRQEN[14]),
		.IRQPOL(IRQPOL[14]),
		.IRQRES(IRQRES[14]),
		.MUX_IN(MUX_IN_15),
		.MUX_OUT(MUX_OUT_15),
		.INTR(INTR[14]),
		.IN(IN[14]),
		.OUT(OUT[14]),
		.OEB(OEB[14])
	);
	GPIO PIN_16(
		.CLK(CLK),
		.MOD(MOD_16),
		.SEL(SEL_16),
		.IRQEN(IRQEN[15]),
		.IRQPOL(IRQPOL[15]),
		.IRQRES(IRQRES[15]),
		.MUX_IN(MUX_IN_16),
		.MUX_OUT(MUX_OUT_16),
		.INTR(INTR[15]),
		.IN(IN[15]),
		.OUT(OUT[15]),
		.OEB(OEB[15])
	);
	GPIO PIN_17(
		.CLK(CLK),
		.MOD(MOD_17),
		.SEL(SEL_17),
		.IRQEN(IRQEN[16]),
		.IRQPOL(IRQPOL[16]),
		.IRQRES(IRQRES[16]),
		.MUX_IN(MUX_IN_17),
		.MUX_OUT(MUX_OUT_17),
		.INTR(INTR[16]),
		.IN(IN[16]),
		.OUT(OUT[16]),
		.OEB(OEB[16])
	);
	GPIO PIN_18(
		.CLK(CLK),
		.MOD(MOD_18),
		.SEL(SEL_18),
		.IRQEN(IRQEN[17]),
		.IRQPOL(IRQPOL[17]),
		.IRQRES(IRQRES[17]),
		.MUX_IN(MUX_IN_18),
		.MUX_OUT(MUX_OUT_18),
		.INTR(INTR[17]),
		.IN(IN[17]),
		.OUT(OUT[17]),
		.OEB(OEB[17])
	);
	GPIO PIN_19(
		.CLK(CLK),
		.MOD(MOD_19),
		.SEL(SEL_19),
		.IRQEN(IRQEN[18]),
		.IRQPOL(IRQPOL[18]),
		.IRQRES(IRQRES[18]),
		.MUX_IN(MUX_IN_19),
		.MUX_OUT(MUX_OUT_19),
		.INTR(INTR[18]),
		.IN(IN[18]),
		.OUT(OUT[18]),
		.OEB(OEB[18])
	);
	GPIO PIN_20(
		.CLK(CLK),
		.MOD(MOD_20),
		.SEL(SEL_20),
		.IRQEN(IRQEN[19]),
		.IRQPOL(IRQPOL[19]),
		.IRQRES(IRQRES[19]),
		.MUX_IN(MUX_IN_20),
		.MUX_OUT(MUX_OUT_20),
		.INTR(INTR[19]),
		.IN(IN[19]),
		.OUT(OUT[19]),
		.OEB(OEB[19])
	);
	GPIO PIN_21(
		.CLK(CLK),
		.MOD(MOD_21),
		.SEL(SEL_21),
		.IRQEN(IRQEN[20]),
		.IRQPOL(IRQPOL[20]),
		.IRQRES(IRQRES[20]),
		.MUX_IN(MUX_IN_21),
		.MUX_OUT(MUX_OUT_21),
		.INTR(INTR[20]),
		.IN(IN[20]),
		.OUT(OUT[20]),
		.OEB(OEB[20])
	);
	GPIO PIN_22(
		.CLK(CLK),
		.MOD(MOD_22),
		.SEL(SEL_22),
		.IRQEN(IRQEN[21]),
		.IRQPOL(IRQPOL[21]),
		.IRQRES(IRQRES[21]),
		.MUX_IN(MUX_IN_22),
		.MUX_OUT(MUX_OUT_22),
		.INTR(INTR[21]),
		.IN(IN[21]),
		.OUT(OUT[21]),
		.OEB(OEB[21])
	);
	GPIO PIN_23(
		.CLK(CLK),
		.MOD(MOD_23),
		.SEL(SEL_23),
		.IRQEN(IRQEN[22]),
		.IRQPOL(IRQPOL[22]),
		.IRQRES(IRQRES[22]),
		.MUX_IN(MUX_IN_23),
		.MUX_OUT(MUX_OUT_23),
		.INTR(INTR[22]),
		.IN(IN[22]),
		.OUT(OUT[22]),
		.OEB(OEB[22])
	);
	GPIO PIN_24(
		.CLK(CLK),
		.MOD(MOD_24),
		.SEL(SEL_24),
		.IRQEN(IRQEN[23]),
		.IRQPOL(IRQPOL[23]),
		.IRQRES(IRQRES[23]),
		.MUX_IN(MUX_IN_24),
		.MUX_OUT(MUX_OUT_24),
		.INTR(INTR[23]),
		.IN(IN[23]),
		.OUT(OUT[23]),
		.OEB(OEB[23])
	);
endmodule
