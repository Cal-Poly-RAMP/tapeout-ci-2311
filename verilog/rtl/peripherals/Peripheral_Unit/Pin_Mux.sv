`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
// Module Name: Pin_Mux
// 
// SPDX-License-Identifier: Apache-2.0
//
//////////////////////////////////////////////////////////////////////////////////
`include "Peripheral_Unit_Defs.svh"

module Pin_Mux (
    input CLK,
    input [1:0] MOD_1,
    input [1:0] SEL_1,
    input [1:0] MOD_2,
    input [1:0] SEL_2,
    input [1:0] MOD_3,
    input [1:0] SEL_3,
    input [1:0] MOD_4,
    input [1:0] SEL_4,
    input [1:0] MOD_5,
    input [1:0] SEL_5,
    input [1:0] MOD_6,
    input [1:0] SEL_6,
    input [1:0] MOD_7,
    input [1:0] SEL_7,
    input [1:0] MOD_8,
    input [1:0] SEL_8,
    input [1:0] MOD_9,
    input [1:0] SEL_9,
    input [1:0] MOD_10,
    input [1:0] SEL_10,
    input [1:0] MOD_11,
    input [1:0] SEL_11,
    input [1:0] MOD_12,
    input [1:0] SEL_12,
    input [1:0] MOD_13,
    input [1:0] SEL_13,
    input [1:0] MOD_14,
    input [1:0] SEL_14,
    input [1:0] MOD_15,
    input [1:0] SEL_15,
    input [1:0] MOD_16,
    input [1:0] SEL_16,
    input [1:0] MOD_17,
    input [1:0] SEL_17,
    input [1:0] MOD_18,
    input [1:0] SEL_18,
    input [1:0] MOD_19,
    input [1:0] SEL_19,
    input [1:0] MOD_20,
    input [1:0] SEL_20,
    input [1:0] MOD_21,
    input [1:0] SEL_21,
    input [1:0] MOD_22,
    input [1:0] SEL_22,
    input [1:0] MOD_23,
    input [1:0] SEL_23,
    input [1:0] MOD_24,
    input [1:0] SEL_24,
    input [`NUM_PINS - 1:0] IRQEN,
    input [`NUM_PINS - 1:0] IRQPOL,
    input [`NUM_PINS - 1:0] IRQRES,
    output [3:0] MUX_IN_1,
    input [3:0] MUX_OUT_1,
    output [3:0] MUX_IN_2,
    input [3:0] MUX_OUT_2,
    output [3:0] MUX_IN_3,
    input [3:0] MUX_OUT_3,
    output [3:0] MUX_IN_4,
    input [3:0] MUX_OUT_4,
    output [3:0] MUX_IN_5,
    input [3:0] MUX_OUT_5,
    output [3:0] MUX_IN_6,
    input [3:0] MUX_OUT_6,
    output [3:0] MUX_IN_7,
    input [3:0] MUX_OUT_7,
    output [3:0] MUX_IN_8,
    input [3:0] MUX_OUT_8,
    output [3:0] MUX_IN_9,
    input [3:0] MUX_OUT_9,
    output [3:0] MUX_IN_10,
    input [3:0] MUX_OUT_10,
    output [3:0] MUX_IN_11,
    input [3:0] MUX_OUT_11,
    output [3:0] MUX_IN_12,
    input [3:0] MUX_OUT_12,
    output [3:0] MUX_IN_13,
    input [3:0] MUX_OUT_13,
    output [3:0] MUX_IN_14,
    input [3:0] MUX_OUT_14,
    output [3:0] MUX_IN_15,
    input [3:0] MUX_OUT_15,
    output [3:0] MUX_IN_16,
    input [3:0] MUX_OUT_16,
    output [3:0] MUX_IN_17,
    input [3:0] MUX_OUT_17,
    output [3:0] MUX_IN_18,
    input [3:0] MUX_OUT_18,
    output [3:0] MUX_IN_19,
    input [3:0] MUX_OUT_19,
    output [3:0] MUX_IN_20,
    input [3:0] MUX_OUT_20,
    output [3:0] MUX_IN_21,
    input [3:0] MUX_OUT_21,
    output [3:0] MUX_IN_22,
    input [3:0] MUX_OUT_22,
    output [3:0] MUX_IN_23,
    input [3:0] MUX_OUT_23,
    output [3:0] MUX_IN_24,
    input [3:0] MUX_OUT_24,
    output [`NUM_PINS - 1:0] INTR,
    input [`NUM_PINS - 1:0] IN,
    output [`NUM_PINS - 1:0] OUT,
    output [`NUM_PINS - 1:0] OEB
    );
    
    GPIO PIN_1 (CLK, MOD_1, SEL_1, IRQEN[0], IRQPOL[0], IRQRES[0], MUX_IN_1, MUX_OUT_1, INTR[0], IN[0], OUT[0], OEB[0]);
    GPIO PIN_2 (CLK, MOD_2, SEL_2, IRQEN[1], IRQPOL[1], IRQRES[1], MUX_IN_2, MUX_OUT_2, INTR[1], IN[1], OUT[1], OEB[1]);
    GPIO PIN_3 (CLK, MOD_3, SEL_3, IRQEN[2], IRQPOL[2], IRQRES[2], MUX_IN_3, MUX_OUT_3, INTR[2], IN[2], OUT[2], OEB[2]);
    GPIO PIN_4 (CLK, MOD_4, SEL_4, IRQEN[3], IRQPOL[3], IRQRES[3], MUX_IN_4, MUX_OUT_4, INTR[3], IN[3], OUT[3], OEB[3]);
    GPIO PIN_5 (CLK, MOD_5, SEL_5, IRQEN[4], IRQPOL[4], IRQRES[4], MUX_IN_5, MUX_OUT_5, INTR[4], IN[4], OUT[4], OEB[4]);
    GPIO PIN_6 (CLK, MOD_6, SEL_6, IRQEN[5], IRQPOL[5], IRQRES[5], MUX_IN_6, MUX_OUT_6, INTR[5], IN[5], OUT[5], OEB[5]);
    GPIO PIN_7 (CLK, MOD_7, SEL_7, IRQEN[6], IRQPOL[6], IRQRES[6], MUX_IN_7, MUX_OUT_7, INTR[6], IN[6], OUT[6], OEB[6]);
    GPIO PIN_8 (CLK, MOD_8, SEL_8, IRQEN[7], IRQPOL[7], IRQRES[7], MUX_IN_8, MUX_OUT_8, INTR[7], IN[7], OUT[7], OEB[7]);
    GPIO PIN_9 (CLK, MOD_9, SEL_9, IRQEN[8], IRQPOL[8], IRQRES[8], MUX_IN_9, MUX_OUT_9, INTR[8], IN[8], OUT[8], OEB[8]);
    GPIO PIN_10 (CLK, MOD_10, SEL_10, IRQEN[9], IRQPOL[9], IRQRES[9], MUX_IN_10, MUX_OUT_10, INTR[9], IN[9], OUT[9], OEB[9]);
    GPIO PIN_11 (CLK, MOD_11, SEL_11, IRQEN[10], IRQPOL[10], IRQRES[10], MUX_IN_11, MUX_OUT_11, INTR[10], IN[10], OUT[10], OEB[10]);
    GPIO PIN_12 (CLK, MOD_12, SEL_12, IRQEN[11], IRQPOL[11], IRQRES[11], MUX_IN_12, MUX_OUT_12, INTR[11], IN[11], OUT[11], OEB[11]);
    GPIO PIN_13 (CLK, MOD_13, SEL_13, IRQEN[12], IRQPOL[12], IRQRES[12], MUX_IN_13, MUX_OUT_13, INTR[12], IN[12], OUT[12], OEB[12]);
    GPIO PIN_14 (CLK, MOD_14, SEL_14, IRQEN[13], IRQPOL[13], IRQRES[13], MUX_IN_14, MUX_OUT_14, INTR[13], IN[13], OUT[13], OEB[13]);
    GPIO PIN_15 (CLK, MOD_15, SEL_15, IRQEN[14], IRQPOL[14], IRQRES[14], MUX_IN_15, MUX_OUT_15, INTR[14], IN[14], OUT[14], OEB[14]);
    GPIO PIN_16 (CLK, MOD_16, SEL_16, IRQEN[15], IRQPOL[15], IRQRES[15], MUX_IN_16, MUX_OUT_16, INTR[15], IN[15], OUT[15], OEB[15]);
    GPIO PIN_17 (CLK, MOD_17, SEL_17, IRQEN[16], IRQPOL[16], IRQRES[16], MUX_IN_17, MUX_OUT_17, INTR[16], IN[16], OUT[16], OEB[16]);
    GPIO PIN_18 (CLK, MOD_18, SEL_18, IRQEN[17], IRQPOL[17], IRQRES[17], MUX_IN_18, MUX_OUT_18, INTR[17], IN[17], OUT[17], OEB[17]);
    GPIO PIN_19 (CLK, MOD_19, SEL_19, IRQEN[18], IRQPOL[18], IRQRES[18], MUX_IN_19, MUX_OUT_19, INTR[18], IN[18], OUT[18], OEB[18]);
    GPIO PIN_20 (CLK, MOD_20, SEL_20, IRQEN[19], IRQPOL[19], IRQRES[19], MUX_IN_20, MUX_OUT_20, INTR[19], IN[19], OUT[19], OEB[19]);
    GPIO PIN_21 (CLK, MOD_21, SEL_21, IRQEN[20], IRQPOL[20], IRQRES[20], MUX_IN_21, MUX_OUT_21, INTR[20], IN[20], OUT[20], OEB[20]);
    GPIO PIN_22 (CLK, MOD_22, SEL_22, IRQEN[21], IRQPOL[21], IRQRES[21], MUX_IN_22, MUX_OUT_22, INTR[21], IN[21], OUT[21], OEB[21]);
    GPIO PIN_23 (CLK, MOD_23, SEL_23, IRQEN[22], IRQPOL[22], IRQRES[22], MUX_IN_23, MUX_OUT_23, INTR[22], IN[22], OUT[22], OEB[22]);
    GPIO PIN_24 (CLK, MOD_24, SEL_24, IRQEN[23], IRQPOL[23], IRQRES[23], MUX_IN_24, MUX_OUT_24, INTR[23], IN[23], OUT[23], OEB[23]);
    
endmodule
