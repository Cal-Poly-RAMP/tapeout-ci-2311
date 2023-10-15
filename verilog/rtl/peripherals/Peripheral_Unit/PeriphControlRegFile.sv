`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Nikita Klimov
// 
// Design Name: 
// Module Name: PeriphControlRegFile
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////

//INTERRUPTS fields
//0: o_TX_Ready (SPI 1 ready for transfer)
//1: o_RX_DV    (SPI 1 received byte)
//...
//[I2C_INTER_OFFSET - 2]: o_TX_Ready (SPI N ready for transfer)
//[I2C_INTER_OFFSET - 1]: o_RX_DV    (SPI N received byte)
//[I2C_INTER_OFFSET]:     done       (I2C 1 done with transaction)
//...
//[TIM_INTER_OFFSET - 1]: done       (I2C N done with transaction)
//[TIM_INTER_OFFSET]:     timer_int  (Timer 1 interrupt)
//...
//[UART_INTER_OFFSET - 1]: timer_int  (Timer N interrupt)
//[UART_INTER_OFFSET]:     txDone     (UART 1 done with transfer)
//[UART_INTER_OFFSET + 1]: rxDone     (UART 1 done with reception)
//...
//[UART_INTER_OFFSET + UART_INST_NUM*UART_NUM_INTER - 2]: txDone     (UART N done with transfer)
//[UART_INTER_OFFSET + UART_INST_NUM*UART_NUM_INTER - 1]: rxDone     (UART N done with reception)

`include "Peripheral_Unit_Defs.svh"

module PeriphControlRegFile #(
    parameter ACTUAL_WIDTH=10,   		   //1024 words
    parameter STARTING_ADDR=32'hFFFFFFFF - (2**ACTUAL_WIDTH - 1)  //Address space of size 1024 reserved
    ) (
    CLK,
    RST_N,
    ADDR,
    DIN,
    BE,
    WRITE,
    DOUT,
    REQ,
    GNT,
    RVALID,
    MEM_ACCESS_ERR,
    MEM_ERR_INT,
    ME_I_EN,
    INTERRUPTS,
    P_I_EN,
    SPI_TX_DATA_1,    
    SPI_TX_START_1,
    SPI_CR_1,
    SPI_SR_1,
    SPI_RX_DATA_1,
    SPI_TX_DATA_2,
    SPI_TX_START_2,
    SPI_CR_2,
    SPI_CR_WR,
    SPI_TX_DATA_WR,
    SPI_SR_2,
    SPI_RX_DATA_2,
    I2C_CR_1,
    I2C_MOSI_DATA_1,
    I2C_REG_ADDR_1,
    I2C_DEV_ADDR_1,
    I2C_MISO_DATA_1,
    I2C_SR_1,
    I2C_CR_2,
    I2C_MOSI_DATA_2,
    I2C_REG_ADDR_2,
    I2C_DEV_ADDR_2,
    I2C_MISO_DATA_2,
    I2C_SR_2,
    I2C_CR_WR,
    I2C_MOSI_DATA_WR,
    I2C_REG_ADDR_WR,
    I2C_DEV_ADDR_WR,
    PWM_PERIOD_DIV_1,
    PWM_MOD_SETPOINT_1,
    PWM_EN_1,
    PWM_SR_1,
    PWM_PERIOD_DIV_2,
    PWM_MOD_SETPOINT_2,
    PWM_EN_2,
    PWM_SR_2,
    PWM_PERIOD_DIV_3,
    PWM_MOD_SETPOINT_3,
    PWM_EN_3,
    PWM_SR_3,
    PWM_PERIOD_DIV_4,
    PWM_MOD_SETPOINT_4,
    PWM_EN_4,
    PWM_SR_4,
    PWM_PERIOD_DIV_WR,
    PWM_MOD_SETPOINT_WR,
    PWM_EN_WR,
    TIM_CTRL_1,
    TIM_THRESH_H_1,
    TIM_THRESH_L_1,
    TIM_OUT_H_1,
    TIM_OUT_L_1,
    TIM_CTRL_2,
    TIM_THRESH_H_2,
    TIM_THRESH_L_2,
    TIM_OUT_H_2,
    TIM_OUT_L_2,
    TIM_CTRL_3,
    TIM_THRESH_H_3,
    TIM_THRESH_L_3,
    TIM_OUT_H_3,
    TIM_OUT_L_3,
    TIM_CTRL_4,
    TIM_THRESH_H_4,
    TIM_THRESH_L_4,
    TIM_OUT_H_4,
    TIM_OUT_L_4,
    TIM_INT,
    TIM_CTRL_WR,
    TIM_THRESH_H_WR,
    TIM_THRESH_L_WR,
    UART_CR_1,
    UART_TX_RATE_DIV_1,
    UART_RX_RATE_DIV_1,
    UART_TX_DATA_1,
    UART_SR_1,
    UART_RX_DATA_1,
    UART_CR_2,
    UART_TX_RATE_DIV_2,
    UART_RX_RATE_DIV_2,
    UART_TX_DATA_2,
    UART_SR_2,
    UART_RX_DATA_2,
    UART_CR_3,
    UART_TX_RATE_DIV_3,
    UART_RX_RATE_DIV_3,
    UART_TX_DATA_3,
    UART_SR_3,
    UART_RX_DATA_3,
    UART_CR_4,
    UART_TX_RATE_DIV_4,
    UART_RX_RATE_DIV_4,
    UART_TX_DATA_4,
    UART_SR_4,
    UART_RX_DATA_4,
    UART_CR_WR,
    UART_TX_RATE_DIV_WR,
    UART_RX_RATE_DIV_WR,
    UART_TX_DATA_WR,
    SD_CR_1,
    SD_START_1,
    SD_STOP_1,
    SD_TOT_STEPS_1,
    SD_JERK_1,
    SD_JERK_DUR_1,
    SD_ACCEL_DUR_1,
    SD_RADDR_1,
    SD_RDATA_1,
    SD_SR_1,
    SD_CR_2,
    SD_START_2,
    SD_STOP_2,
    SD_TOT_STEPS_2,
    SD_JERK_2,
    SD_JERK_DUR_2,
    SD_ACCEL_DUR_2,
    SD_RADDR_2,
    SD_RDATA_2,
    SD_SR_2,
    SD_CR_3,
    SD_START_3,
    SD_STOP_3,
    SD_TOT_STEPS_3,
    SD_JERK_3,
    SD_JERK_DUR_3,
    SD_ACCEL_DUR_3,
    SD_RADDR_3,
    SD_RDATA_3,
    SD_SR_3,
    SD_CR_4,
    SD_START_4,
    SD_STOP_4,
    SD_TOT_STEPS_4,
    SD_JERK_4,
    SD_JERK_DUR_4,
    SD_ACCEL_DUR_4,
    SD_RADDR_4,
    SD_RDATA_4,
    SD_SR_4,
    SD_CR_WR,
    SD_START_WR,
    SD_STOP_WR,
    SD_TOT_STEPS_WR,
    SD_JERK_WR,
    SD_JERK_DUR_WR,
    SD_ACCEL_DUR_WR,
    SD_RADDR_WR,
    QEM_CR_1,
    QEM_I_CNT_1,
    QEM_THRESH_1,
    QEM_SR_1,
    QEM_O_CNT_LATCH_1,
    QEM_O_CNT_1,
    QEM_CR_2,
    QEM_I_CNT_2,
    QEM_THRESH_2,
    QEM_SR_2,
    QEM_O_CNT_LATCH_2,
    QEM_O_CNT_2,
    QEM_CR_3,
    QEM_I_CNT_3,
    QEM_THRESH_3,
    QEM_SR_3,
    QEM_O_CNT_LATCH_3,
    QEM_O_CNT_3,
    QEM_CR_4,
    QEM_I_CNT_4,
    QEM_THRESH_4,
    QEM_SR_4,
    QEM_O_CNT_LATCH_4,
    QEM_O_CNT_4,
    QEM_CR_WR,
    QEM_I_CNT_WR,
    QEM_THRESH_WR,
    GPIO_MOD_1,
    GPIO_SEL_1,
    GPIO_MOD_2,
    GPIO_SEL_2,
    GPIO_MOD_3,
    GPIO_SEL_3,
    GPIO_MOD_4,
    GPIO_SEL_4,
    GPIO_MOD_5,
    GPIO_SEL_5,
    GPIO_MOD_6,
    GPIO_SEL_6,
    GPIO_MOD_7,
    GPIO_SEL_7,
    GPIO_MOD_8,
    GPIO_SEL_8,
    GPIO_MOD_9,
    GPIO_SEL_9,
    GPIO_MOD_10,
    GPIO_SEL_10,
    GPIO_MOD_11,
    GPIO_SEL_11,
    GPIO_MOD_12,
    GPIO_SEL_12,
    GPIO_MOD_13,
    GPIO_SEL_13,
    GPIO_MOD_14,
    GPIO_SEL_14,
    GPIO_MOD_15,
    GPIO_SEL_15,
    GPIO_MOD_16,
    GPIO_SEL_16,
    GPIO_MOD_17,
    GPIO_SEL_17,
    GPIO_MOD_18,
    GPIO_SEL_18,
    GPIO_MOD_19,
    GPIO_SEL_19,
    GPIO_MOD_20,
    GPIO_SEL_20,
    GPIO_MOD_21,
    GPIO_SEL_21,
    GPIO_MOD_22,
    GPIO_SEL_22,
    GPIO_MOD_23,
    GPIO_SEL_23,
    GPIO_MOD_24,
    GPIO_SEL_24,
    GPIO_IRQEN,
    GPIO_IRQPOL,
    GPIO_IRQRES,
    GPIO_IN,
    GPIO_OUT,
    GPIO_INTR);

    input CLK;
    input RST_N;
    input [31:0] ADDR;
    input [31:0] DIN;
    input [3:0] BE;
    input WRITE;
    output logic [31:0] DOUT;
    input REQ;
    output logic GNT;
    output logic RVALID;
    input MEM_ACCESS_ERR;
    output logic MEM_ERR_INT;
    output logic ME_I_EN;
    output logic [`NUM_INTER - 1: 0] INTERRUPTS;
    output wire [`NUM_INTER - 1: 0] P_I_EN;
    output logic [31:0] SPI_TX_DATA_1;
    output logic [31:0] SPI_TX_START_1;
    output logic [31:0] SPI_CR_1;
    input logic [31:0] SPI_SR_1;
    input logic [31:0] SPI_RX_DATA_1;
    output logic [31:0] SPI_TX_DATA_2;
    output logic [31:0] SPI_TX_START_2;
    output logic [31:0] SPI_CR_2;
    output logic [`SPI_INST_NUM - 1:0] SPI_CR_WR;
    output logic [`SPI_INST_NUM - 1:0] SPI_TX_DATA_WR;
    input logic [31:0] SPI_SR_2;
    input logic [31:0] SPI_RX_DATA_2;
    output logic [31:0] I2C_CR_1;
    output logic [31:0] I2C_MOSI_DATA_1;
    output logic [31:0] I2C_REG_ADDR_1;
    output logic [31:0] I2C_DEV_ADDR_1;
    input logic [31:0] I2C_MISO_DATA_1;
    input logic [31:0] I2C_SR_1;
    output logic [31:0] I2C_CR_2;
    output logic [31:0] I2C_MOSI_DATA_2;
    output logic [31:0] I2C_REG_ADDR_2;
    output logic [31:0] I2C_DEV_ADDR_2;
    input logic [31:0] I2C_MISO_DATA_2;
    input logic [31:0] I2C_SR_2;
    output logic [`I2C_INST_NUM - 1:0] I2C_CR_WR;
    output logic [`I2C_INST_NUM - 1:0] I2C_MOSI_DATA_WR;
    output logic [`I2C_INST_NUM - 1:0] I2C_REG_ADDR_WR;
    output logic [`I2C_INST_NUM - 1:0] I2C_DEV_ADDR_WR;
    output logic [31:0] PWM_PERIOD_DIV_1;
    output logic [31:0] PWM_MOD_SETPOINT_1;
    output logic [31:0] PWM_EN_1;
    input logic [31:0] PWM_SR_1;
    output logic [31:0] PWM_PERIOD_DIV_2;
    output logic [31:0] PWM_MOD_SETPOINT_2;
    output logic [31:0] PWM_EN_2;
    input logic [31:0] PWM_SR_2;
    output logic [31:0] PWM_PERIOD_DIV_3;
    output logic [31:0] PWM_MOD_SETPOINT_3;
    output logic [31:0] PWM_EN_3;
    input logic [31:0] PWM_SR_3;
    output logic [31:0] PWM_PERIOD_DIV_4;
    output logic [31:0] PWM_MOD_SETPOINT_4;
    output logic [31:0] PWM_EN_4;
    input logic [31:0] PWM_SR_4;
    output logic [`PWM_INST_NUM - 1:0] PWM_PERIOD_DIV_WR;
    output logic [`PWM_INST_NUM - 1:0] PWM_MOD_SETPOINT_WR;
    output logic [`PWM_INST_NUM - 1:0] PWM_EN_WR;
    output logic [31:0] TIM_CTRL_1;
    output logic [31:0] TIM_THRESH_H_1;
    output logic [31:0] TIM_THRESH_L_1;
    input logic [31:0] TIM_OUT_H_1;
    input logic [31:0] TIM_OUT_L_1;
    output logic [31:0] TIM_CTRL_2;
    output logic [31:0] TIM_THRESH_H_2;
    output logic [31:0] TIM_THRESH_L_2;
    input logic [31:0] TIM_OUT_H_2;
    input logic [31:0] TIM_OUT_L_2;
    output logic [31:0] TIM_CTRL_3;
    output logic [31:0] TIM_THRESH_H_3;
    output logic [31:0] TIM_THRESH_L_3;
    input logic [31:0] TIM_OUT_H_3;
    input logic [31:0] TIM_OUT_L_3;
    output logic [31:0] TIM_CTRL_4;
    output logic [31:0] TIM_THRESH_H_4;
    output logic [31:0] TIM_THRESH_L_4;
    input logic [31:0] TIM_OUT_H_4;
    input logic [31:0] TIM_OUT_L_4;
    input logic [`TIM_INST_NUM - 1:0] TIM_INT;
    output logic [`TIM_INST_NUM - 1:0] TIM_CTRL_WR;
    output logic [`TIM_INST_NUM - 1:0] TIM_THRESH_H_WR;
    output logic [`TIM_INST_NUM - 1:0] TIM_THRESH_L_WR;
    output logic [31:0] UART_CR_1;
    output logic [31:0] UART_TX_RATE_DIV_1;
    output logic [31:0] UART_RX_RATE_DIV_1;
    output logic [31:0] UART_TX_DATA_1;
    input logic [31:0] UART_SR_1;
    input logic [31:0] UART_RX_DATA_1;
    output logic [31:0] UART_CR_2;
    output logic [31:0] UART_TX_RATE_DIV_2;
    output logic [31:0] UART_RX_RATE_DIV_2;
    output logic [31:0] UART_TX_DATA_2;
    input logic [31:0] UART_SR_2;
    input logic [31:0] UART_RX_DATA_2;
    output logic [31:0] UART_CR_3;
    output logic [31:0] UART_TX_RATE_DIV_3;
    output logic [31:0] UART_RX_RATE_DIV_3;
    output logic [31:0] UART_TX_DATA_3;
    input logic [31:0] UART_SR_3;
    input logic [31:0] UART_RX_DATA_3;
    output logic [31:0] UART_CR_4;
    output logic [31:0] UART_TX_RATE_DIV_4;
    output logic [31:0] UART_RX_RATE_DIV_4;
    output logic [31:0] UART_TX_DATA_4;
    input logic [31:0] UART_SR_4;
    input logic [31:0] UART_RX_DATA_4;
    output logic [`UART_INST_NUM - 1:0] UART_CR_WR;
    output logic [`UART_INST_NUM - 1:0] UART_TX_RATE_DIV_WR;
    output logic [`UART_INST_NUM - 1:0] UART_RX_RATE_DIV_WR;
    output logic [`UART_INST_NUM - 1:0] UART_TX_DATA_WR;
    output logic [31:0] SD_CR_1;
    output logic [31:0] SD_START_1;
    output logic [31:0] SD_STOP_1;
    output logic [31:0] SD_TOT_STEPS_1;
    output logic [31:0] SD_JERK_1;
    output logic [31:0] SD_JERK_DUR_1;
    output logic [31:0] SD_ACCEL_DUR_1;
    output logic [31:0] SD_RADDR_1;
    input logic [31:0] SD_RDATA_1;
    input logic [31:0] SD_SR_1;
    output logic [31:0] SD_CR_2;
    output logic [31:0] SD_START_2;
    output logic [31:0] SD_STOP_2;
    output logic [31:0] SD_TOT_STEPS_2;
    output logic [31:0] SD_JERK_2;
    output logic [31:0] SD_JERK_DUR_2;
    output logic [31:0] SD_ACCEL_DUR_2;
    output logic [31:0] SD_RADDR_2;
    input logic [31:0] SD_RDATA_2;
    input logic [31:0] SD_SR_2;
    output logic [31:0] SD_CR_3;
    output logic [31:0] SD_START_3;
    output logic [31:0] SD_STOP_3;
    output logic [31:0] SD_TOT_STEPS_3;
    output logic [31:0] SD_JERK_3;
    output logic [31:0] SD_JERK_DUR_3;
    output logic [31:0] SD_ACCEL_DUR_3;
    output logic [31:0] SD_RADDR_3;
    input logic [31:0] SD_RDATA_3;
    input logic [31:0] SD_SR_3;
    output logic [31:0] SD_CR_4;
    output logic [31:0] SD_START_4;
    output logic [31:0] SD_STOP_4;
    output logic [31:0] SD_TOT_STEPS_4;
    output logic [31:0] SD_JERK_4;
    output logic [31:0] SD_JERK_DUR_4;
    output logic [31:0] SD_ACCEL_DUR_4;
    output logic [31:0] SD_RADDR_4;
    input logic [31:0] SD_RDATA_4;
    input logic [31:0] SD_SR_4;
    output logic [`SD_INST_NUM - 1: 0] SD_CR_WR;
    output logic [`SD_INST_NUM - 1: 0] SD_START_WR;
    output logic [`SD_INST_NUM - 1: 0] SD_STOP_WR;
    output logic [`SD_INST_NUM - 1: 0] SD_TOT_STEPS_WR;
    output logic [`SD_INST_NUM - 1: 0] SD_JERK_WR;
    output logic [`SD_INST_NUM - 1: 0] SD_JERK_DUR_WR;
    output logic [`SD_INST_NUM - 1: 0] SD_ACCEL_DUR_WR;
    output logic [`SD_INST_NUM - 1: 0] SD_RADDR_WR;
    output logic [31:0] QEM_CR_1;
    output logic [31:0] QEM_I_CNT_1;
    output logic [31:0] QEM_THRESH_1;
    input logic [31:0] QEM_SR_1;
    input logic [31:0] QEM_O_CNT_LATCH_1;
    input logic [31:0] QEM_O_CNT_1;
    output logic [31:0] QEM_CR_2;
    output logic [31:0] QEM_I_CNT_2;
    output logic [31:0] QEM_THRESH_2;
    input logic [31:0] QEM_SR_2;
    input logic [31:0] QEM_O_CNT_LATCH_2;
    input logic [31:0] QEM_O_CNT_2;
    output logic [31:0] QEM_CR_3;
    output logic [31:0] QEM_I_CNT_3;
    output logic [31:0] QEM_THRESH_3;
    input logic [31:0] QEM_SR_3;
    input logic [31:0] QEM_O_CNT_LATCH_3;
    input logic [31:0] QEM_O_CNT_3;
    output logic [31:0] QEM_CR_4;
    output logic [31:0] QEM_I_CNT_4;
    output logic [31:0] QEM_THRESH_4;
    input logic [31:0] QEM_SR_4;
    input logic [31:0] QEM_O_CNT_LATCH_4;
    input logic [31:0] QEM_O_CNT_4;
    output logic [`QEM_INST_NUM - 1:0] QEM_CR_WR;
    output logic [`QEM_INST_NUM - 1:0] QEM_I_CNT_WR;
    output logic [`QEM_INST_NUM - 1:0] QEM_THRESH_WR;
    output logic [1:0] GPIO_MOD_1;
    output logic [1:0] GPIO_SEL_1;
    output logic [1:0] GPIO_MOD_2;
    output logic [1:0] GPIO_SEL_2;
    output logic [1:0] GPIO_MOD_3;
    output logic [1:0] GPIO_SEL_3;
    output logic [1:0] GPIO_MOD_4;
    output logic [1:0] GPIO_SEL_4;
    output logic [1:0] GPIO_MOD_5;
    output logic [1:0] GPIO_SEL_5;
    output logic [1:0] GPIO_MOD_6;
    output logic [1:0] GPIO_SEL_6;
    output logic [1:0] GPIO_MOD_7;
    output logic [1:0] GPIO_SEL_7;
    output logic [1:0] GPIO_MOD_8;
    output logic [1:0] GPIO_SEL_8;
    output logic [1:0] GPIO_MOD_9;
    output logic [1:0] GPIO_SEL_9;
    output logic [1:0] GPIO_MOD_10;
    output logic [1:0] GPIO_SEL_10;
    output logic [1:0] GPIO_MOD_11;
    output logic [1:0] GPIO_SEL_11;
    output logic [1:0] GPIO_MOD_12;
    output logic [1:0] GPIO_SEL_12;
    output logic [1:0] GPIO_MOD_13;
    output logic [1:0] GPIO_SEL_13;
    output logic [1:0] GPIO_MOD_14;
    output logic [1:0] GPIO_SEL_14;
    output logic [1:0] GPIO_MOD_15;
    output logic [1:0] GPIO_SEL_15;
    output logic [1:0] GPIO_MOD_16;
    output logic [1:0] GPIO_SEL_16;
    output logic [1:0] GPIO_MOD_17;
    output logic [1:0] GPIO_SEL_17;
    output logic [1:0] GPIO_MOD_18;
    output logic [1:0] GPIO_SEL_18;
    output logic [1:0] GPIO_MOD_19;
    output logic [1:0] GPIO_SEL_19;
    output logic [1:0] GPIO_MOD_20;
    output logic [1:0] GPIO_SEL_20;
    output logic [1:0] GPIO_MOD_21;
    output logic [1:0] GPIO_SEL_21;
    output logic [1:0] GPIO_MOD_22;
    output logic [1:0] GPIO_SEL_22;
    output logic [1:0] GPIO_MOD_23;
    output logic [1:0] GPIO_SEL_23;
    output logic [1:0] GPIO_MOD_24;
    output logic [1:0] GPIO_SEL_24;
    output logic [`NUM_PINS - 1:0] GPIO_IRQEN;
    output logic [`NUM_PINS - 1:0] GPIO_IRQPOL;
    output logic [`NUM_PINS - 1:0] GPIO_IRQRES;
    input logic [`NUM_PINS - 1:0] GPIO_IN;
    output logic [`NUM_PINS - 1:0] GPIO_OUT;
    input logic [`NUM_PINS - 1:0] GPIO_INTR;
    
    localparam ADDR_SCALE=2;
    
    localparam SPI_ADDR_OFFSET = 1;
    localparam I2C_ADDR_OFFSET = SPI_ADDR_OFFSET + `SPI_INST_NUM * `NUM_SPI_REGS;
    localparam PWM_ADDR_OFFSET = I2C_ADDR_OFFSET + `I2C_INST_NUM * `NUM_I2C_REGS;
    localparam TIM_ADDR_OFFSET = PWM_ADDR_OFFSET + `PWM_INST_NUM * `NUM_PWM_REGS;
    localparam UART_ADDR_OFFSET = TIM_ADDR_OFFSET + `TIM_INST_NUM * `NUM_TIM_REGS;
    localparam SD_ADDR_OFFSET = UART_ADDR_OFFSET + `UART_INST_NUM * `NUM_UART_REGS;
    localparam QEM_ADDR_OFFSET = SD_ADDR_OFFSET + `SD_INST_NUM * `NUM_SD_REGS;
    localparam GPIO_ADDR_OFFSET = QEM_ADDR_OFFSET + `QEM_INST_NUM * `NUM_QEM_REGS;
    
    //Interrupt addressing and strobes
    localparam I2C_INTER_OFFSET = `SPI_INST_NUM * `SPI_NUM_INTER;
    localparam TIM_INTER_OFFSET = I2C_INTER_OFFSET + `I2C_INST_NUM * `I2C_NUM_INTER;
    localparam UART_INTER_OFFSET = TIM_INTER_OFFSET + `TIM_INST_NUM * `TIM_NUM_INTER;
    localparam SD_INTER_OFFSET = UART_INTER_OFFSET + `UART_INST_NUM * `UART_NUM_INTER;
    localparam QEM_INTER_OFFSET = SD_INTER_OFFSET + `SD_INST_NUM * `SD_NUM_INTER;
    localparam GPIO_INTER_OFFSET = QEM_INTER_OFFSET + `QEM_INST_NUM * `QEM_NUM_INTER;
    logic mem_access_err_buf1 = 0;
    logic mem_access_err_buf2 = 0;
    logic [`SPI_INST_NUM - 1: 0] spi_tx_ready_buf1 = 0;
    logic [`SPI_INST_NUM - 1: 0] spi_tx_ready_buf2 = 0;
    logic [`SPI_INST_NUM - 1: 0] spi_tx_ready;
    logic [`SPI_INST_NUM - 1: 0] spi_rx_done_buf1 = 0;
    logic [`SPI_INST_NUM - 1: 0] spi_rx_done_buf2 = 0;
    logic [`SPI_INST_NUM - 1: 0] spi_rx_done;
    logic [`I2C_INST_NUM - 1: 0] i2c_done_buf1 = 0;
    logic [`I2C_INST_NUM - 1: 0] i2c_done_buf2 = 0;
    logic [`I2C_INST_NUM - 1: 0] i2c_done;
    logic [`UART_INST_NUM - 1: 0] uart_tx_done_buf1 = 0;
    logic [`UART_INST_NUM - 1: 0] uart_tx_done_buf2 = 0;
    logic [`UART_INST_NUM - 1: 0] uart_tx_done;
    logic [`UART_INST_NUM - 1: 0] uart_rx_done_buf1 = 0;
    logic [`UART_INST_NUM - 1: 0] uart_rx_done_buf2 = 0;
    logic [`UART_INST_NUM - 1: 0] uart_rx_done;
    logic [`SD_INST_NUM - 1: 0] sd_done_buf1 = 0;
    logic [`SD_INST_NUM - 1: 0] sd_done_buf2 = 0;
    logic [`SD_INST_NUM - 1: 0] sd_done;
    logic [`QEM_INST_NUM - 1: 0] qem_calib_done_buf1;
    logic [`QEM_INST_NUM - 1: 0] qem_calib_done_buf2;
    logic [`QEM_INST_NUM - 1: 0] qem_calib_done;
    logic [`QEM_INST_NUM - 1: 0] qem_thresh_reached_buf1;
    logic [`QEM_INST_NUM - 1: 0] qem_thresh_reached_buf2;
    logic [`QEM_INST_NUM - 1: 0] qem_thresh_reached;
    logic [`NUM_PINS - 1: 0] gpio_intr_buf1;
    logic [`NUM_PINS - 1: 0] gpio_intr_buf2;
    logic [`NUM_PINS - 1: 0] gpio_intr;

    logic [`TIM_INST_NUM - 1: 0] TIM_INT_REG;
    logic [`TIM_INST_NUM - 1: 0] TIM_INT_REG_PREV;
    logic [`TIM_INST_NUM - 1: 0] TIM_INT_WIRE;
    logic [`NUM_INTER - `NUM_PINS - 1: 0] P_I_EN_REG;

    //Write strobes
    genvar g;
    generate
        for (g = 0; g < `SPI_INST_NUM; g++) begin
            assign SPI_TX_DATA_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == (SPI_ADDR_OFFSET + `NUM_SPI_REGS * g)) && WRITE)?1:0;
            assign SPI_CR_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == (SPI_ADDR_OFFSET + `NUM_SPI_REGS * g + 2)) && WRITE)?1:0;
        end
        for (g = 0; g < `I2C_INST_NUM; g++) begin
            assign I2C_CR_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == (I2C_ADDR_OFFSET + `NUM_I2C_REGS * g)) && WRITE)?1:0;
            assign I2C_MOSI_DATA_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == (I2C_ADDR_OFFSET + `NUM_I2C_REGS * g + 1)) && WRITE)?1:0;
            assign I2C_REG_ADDR_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == (I2C_ADDR_OFFSET + `NUM_I2C_REGS * g + 2)) && WRITE)?1:0;
            assign I2C_DEV_ADDR_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == (I2C_ADDR_OFFSET + `NUM_I2C_REGS * g + 3)) && WRITE)?1:0;
        end
        for (g = 0; g < `PWM_INST_NUM; g++) begin
            assign PWM_PERIOD_DIV_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == (PWM_ADDR_OFFSET + `NUM_PWM_REGS * g)) && WRITE)?1:0;
            assign PWM_MOD_SETPOINT_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == (PWM_ADDR_OFFSET + `NUM_PWM_REGS * g + 1)) && WRITE)?1:0;
            assign PWM_EN_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == (PWM_ADDR_OFFSET + `NUM_PWM_REGS * g + 2)) && WRITE)?1:0;
        end
        for (g = 0; g < `TIM_INST_NUM; g++) begin
            assign TIM_CTRL_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == (TIM_ADDR_OFFSET + `NUM_TIM_REGS * g)) && WRITE)?1:0;
            assign TIM_THRESH_H_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == (TIM_ADDR_OFFSET + `NUM_TIM_REGS * g + 1)) && WRITE)?1:0;
            assign TIM_THRESH_L_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == (TIM_ADDR_OFFSET + `NUM_TIM_REGS * g + 2)) && WRITE)?1:0;
        end
        for (g = 0; g < `UART_INST_NUM; g++) begin
            assign UART_CR_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == (UART_ADDR_OFFSET + `NUM_UART_REGS * g)) && WRITE)?1:0;
            assign UART_TX_RATE_DIV_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == (UART_ADDR_OFFSET + `NUM_UART_REGS * g + 1)) && WRITE)?1:0;
            assign UART_RX_RATE_DIV_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == (UART_ADDR_OFFSET + `NUM_UART_REGS * g + 2)) && WRITE)?1:0;
            assign UART_TX_DATA_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == (UART_ADDR_OFFSET + `NUM_UART_REGS * g + 3)) && WRITE)?1:0;
        end
        for (g = 0; g < `SD_INST_NUM; g++) begin
            assign SD_CR_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == (SD_ADDR_OFFSET + `NUM_SD_REGS * g)) && WRITE)?1:0;
            assign SD_START_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == (SD_ADDR_OFFSET + `NUM_SD_REGS * g + 1)) && WRITE)?1:0;
            assign SD_STOP_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == (SD_ADDR_OFFSET + `NUM_SD_REGS * g + 2)) && WRITE)?1:0;
            assign SD_TOT_STEPS_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == (SD_ADDR_OFFSET + `NUM_SD_REGS * g + 3)) && WRITE)?1:0;
            assign SD_JERK_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == (SD_ADDR_OFFSET + `NUM_SD_REGS * g + 4)) && WRITE)?1:0;
            assign SD_JERK_DUR_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == (SD_ADDR_OFFSET + `NUM_SD_REGS * g + 5)) && WRITE)?1:0;
            assign SD_ACCEL_DUR_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == (SD_ADDR_OFFSET + `NUM_SD_REGS * g + 6)) && WRITE)?1:0;
            assign SD_RADDR_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == (SD_ADDR_OFFSET + `NUM_SD_REGS * g + 7)) && WRITE)?1:0;
        end
        for (g = 0; g < `QEM_INST_NUM; g++) begin
            assign QEM_CR_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == (QEM_ADDR_OFFSET + `NUM_QEM_REGS * g)) && WRITE)?1:0;
            assign QEM_I_CNT_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == (QEM_ADDR_OFFSET + `NUM_QEM_REGS * g + 1)) && WRITE)?1:0;
            assign QEM_THRESH_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == (QEM_ADDR_OFFSET + `NUM_QEM_REGS * g + 2)) && WRITE)?1:0;
        end
    endgenerate
    
    always_ff @(posedge CLK) begin
        if (RST_N) begin
            mem_access_err_buf1 <= MEM_ACCESS_ERR;
            mem_access_err_buf2 <= mem_access_err_buf1;

            spi_tx_ready_buf1[0] <= SPI_SR_1[0];
            spi_rx_done_buf1[0] <= SPI_SR_1[1];
            spi_tx_ready_buf1[1] <= SPI_SR_2[0];
            spi_rx_done_buf1[1] <= SPI_SR_2[1];
            spi_tx_ready_buf2 <= spi_tx_ready_buf1;
            spi_rx_done_buf2 <= spi_rx_done_buf1;
    
            i2c_done_buf1[0] <= I2C_SR_1[0];
            i2c_done_buf1[1] <= I2C_SR_2[0];
            i2c_done_buf2 <= i2c_done_buf1;
            
            uart_tx_done_buf1[0] <= UART_SR_1[1];
            uart_rx_done_buf1[0] <= UART_SR_1[3];
            uart_tx_done_buf1[1] <= UART_SR_2[1];
            uart_rx_done_buf1[1] <= UART_SR_2[3];
            uart_tx_done_buf1[2] <= UART_SR_3[1];
            uart_rx_done_buf1[2] <= UART_SR_3[3];
            uart_tx_done_buf1[3] <= UART_SR_4[1];
            uart_rx_done_buf1[3] <= UART_SR_4[3];
            uart_tx_done_buf2 <= uart_tx_done_buf1;
            uart_rx_done_buf2 <= uart_rx_done_buf1;
            
            sd_done_buf1[0] <= SD_SR_1[0];
            sd_done_buf1[1] <= SD_SR_2[0];
            sd_done_buf1[2] <= SD_SR_3[0];
            sd_done_buf1[3] <= SD_SR_4[0];
            sd_done_buf2 <= sd_done_buf1;
            
            qem_calib_done_buf1[0] <= QEM_SR_1[1];
            qem_thresh_reached_buf1[0] <= QEM_SR_1[2];
            qem_calib_done_buf1[1] <= QEM_SR_2[1];
            qem_thresh_reached_buf1[1] <= QEM_SR_2[2];
            qem_calib_done_buf1[2] <= QEM_SR_3[1];
            qem_thresh_reached_buf1[2] <= QEM_SR_3[2];
            qem_calib_done_buf1[3] <= QEM_SR_4[1];
            qem_thresh_reached_buf1[3] <= QEM_SR_4[2];
            qem_calib_done_buf2 <= qem_calib_done_buf1;
            qem_thresh_reached_buf2 <= qem_thresh_reached_buf1;
            
            for (integer i = 0; i < `NUM_PINS; i++) begin
                gpio_intr_buf1[i] <= GPIO_INTR[i];
            end
            gpio_intr_buf2 <= gpio_intr_buf1;
        end
    end
    
    assign spi_tx_ready = spi_tx_ready_buf1 & ~spi_tx_ready_buf2;
    assign spi_rx_done = spi_rx_done_buf1 & ~spi_rx_done_buf2;
    assign i2c_done = ~i2c_done_buf1 & i2c_done_buf2;
    assign uart_tx_done = uart_tx_done_buf1 & ~uart_tx_done_buf2;
    assign uart_rx_done = uart_rx_done_buf1 & ~uart_rx_done_buf2;
    assign gpio_intr = gpio_intr_buf1 & ~gpio_intr_buf2;
    assign sd_done = sd_done_buf1 & ~sd_done_buf2;
    assign qem_calib_done = qem_calib_done_buf1 & ~qem_calib_done_buf2;
    assign qem_thresh_reached = qem_thresh_reached_buf1 & ~qem_thresh_reached_buf2;
    
    //Interrupt mappings
    always_ff @(posedge CLK) begin
        if (RST_N) begin
            MEM_ERR_INT <= mem_access_err_buf1 & ~mem_access_err_buf2;
            for (integer i = 0; i < `NUM_INTER; i++) begin
                if (i < I2C_INTER_OFFSET) begin
                    INTERRUPTS[i] <= spi_tx_ready[i / `SPI_NUM_INTER];
                    i = i + 1;
                    INTERRUPTS[i] <= spi_rx_done[i / `SPI_NUM_INTER];
                end
                else if (i < TIM_INTER_OFFSET) begin
                    INTERRUPTS[i] <= i2c_done[(i - I2C_INTER_OFFSET) / `I2C_NUM_INTER];
                end
                else if (i < UART_INTER_OFFSET) begin
                    INTERRUPTS[i] <= TIM_INT[(i - TIM_INTER_OFFSET) / `TIM_NUM_INTER];
                end
                else if (i < SD_INTER_OFFSET) begin
                    INTERRUPTS[i] <= uart_tx_done[(i - UART_INTER_OFFSET) / `UART_NUM_INTER];
                    i = i + 1;
                    INTERRUPTS[i] <= uart_rx_done[(i - UART_INTER_OFFSET) / `UART_NUM_INTER];
                end
                else if (i < QEM_INTER_OFFSET) begin
                    INTERRUPTS[i] <= sd_done[(i - SD_INTER_OFFSET) / `SD_NUM_INTER];
                end
                else if (i < GPIO_INTER_OFFSET) begin
                    INTERRUPTS[i] <= qem_calib_done[(i - QEM_INTER_OFFSET) / `QEM_NUM_INTER];
                    i = i + 1;
                    INTERRUPTS[i] <= qem_thresh_reached[(i - QEM_INTER_OFFSET) / `QEM_NUM_INTER];
                end
                else begin
                    INTERRUPTS[i] <= gpio_intr[(i - GPIO_INTER_OFFSET) / `GPIO_NUM_INTER];
                end
            end
        end
    end

    assign P_I_EN[`NUM_INTER - `NUM_PINS - 1: 0] = P_I_EN_REG[`NUM_INTER - `NUM_PINS - 1:0];
    
    generate
        for (g = `NUM_INTER - `NUM_PINS; g < `NUM_INTER; g++) begin
            assign P_I_EN[g] = GPIO_IRQEN[g - (`NUM_INTER - `NUM_PINS)];
        end
    endgenerate
    
    //Input strobe latches
    assign TIM_INT_WIRE = TIM_INT_REG;
    
    always_ff @(posedge CLK) begin
        if (~RST_N) begin
            TIM_INT_REG <= 0;
            TIM_INT_REG_PREV <= 0;
        end
        else begin
            TIM_INT_REG_PREV <= TIM_INT;
            for (integer k = 0; k < `TIM_INST_NUM; k++) begin
                if (TIM_INT[k] & ~TIM_INT_REG_PREV[k])
                    TIM_INT_REG[k] <= 1'b1;
                else if ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == (TIM_ADDR_OFFSET + `NUM_TIM_REGS * k + 5)) && ~WRITE)
                    TIM_INT_REG[k] <= 1'b0;
                else
                    TIM_INT_REG[k] <= TIM_INT_WIRE[k];
            end
        end
    end
    
    integer j;
    
    always_ff @(posedge CLK) begin
        if (~RST_N) begin
	    GNT <= 1'b1;
    	    RVALID <= 1'b0;
            SPI_TX_DATA_1 <= 0;
            SPI_TX_START_1 <= 0;
            SPI_CR_1 <= 0;
            SPI_TX_DATA_2 <= 0;
            SPI_TX_START_2 <= 0;
            SPI_CR_2 <= 0;
            I2C_CR_1 <= 0;
            I2C_MOSI_DATA_1 <= 0;
            I2C_REG_ADDR_1 <= 0;
            I2C_DEV_ADDR_1 <= 0;
            I2C_CR_2 <= 0;
            I2C_MOSI_DATA_2 <= 0;
            I2C_REG_ADDR_2 <= 0;
            I2C_DEV_ADDR_2 <= 0;
            PWM_PERIOD_DIV_1 <= 0;
            PWM_MOD_SETPOINT_1 <= 0;
            PWM_EN_1 <= 0;
            PWM_PERIOD_DIV_2 <= 0;
            PWM_MOD_SETPOINT_2 <= 0;
            PWM_EN_2 <= 0;
            PWM_PERIOD_DIV_3 <= 0;
            PWM_MOD_SETPOINT_3 <= 0;
            PWM_EN_3 <= 0;
            PWM_PERIOD_DIV_4 <= 0;
            PWM_MOD_SETPOINT_4 <= 0;
            PWM_EN_4 <= 0;
            TIM_CTRL_1 <= 0;
            TIM_THRESH_H_1 <= 0;
            TIM_THRESH_L_1 <= 0;
            TIM_CTRL_2 <= 0;
            TIM_THRESH_H_2 <= 0;
            TIM_THRESH_L_2 <= 0;
            TIM_CTRL_3 <= 0;
            TIM_THRESH_H_3 <= 0;
            TIM_THRESH_L_3 <= 0;
            TIM_CTRL_4 <= 0;
            TIM_THRESH_H_4 <= 0;
            TIM_THRESH_L_4 <= 0;
            UART_CR_1 <= 0;
            UART_TX_RATE_DIV_1 <= 0;
            UART_RX_RATE_DIV_1 <= 0;
            UART_TX_DATA_1 <= 0;
            UART_CR_2 <= 0;
            UART_TX_RATE_DIV_2 <= 0;
            UART_RX_RATE_DIV_2 <= 0;
            UART_TX_DATA_2 <= 0;
            UART_CR_3 <= 0;
            UART_TX_RATE_DIV_3 <= 0;
            UART_RX_RATE_DIV_3 <= 0;
            UART_TX_DATA_3 <= 0;
            UART_CR_4 <= 0;
            UART_TX_RATE_DIV_4 <= 0;
            UART_RX_RATE_DIV_4 <= 0;
            UART_TX_DATA_4 <= 0;
            SD_CR_1 <= 0;
            SD_START_1 <= 0;
            SD_STOP_1 <= 0;
            SD_TOT_STEPS_1 <= 0;
            SD_JERK_1 <= 0;
            SD_JERK_DUR_1 <= 0;
            SD_ACCEL_DUR_1 <= 0;
            SD_RADDR_1 <= 0;
            SD_CR_2 <= 0;
            SD_START_2 <= 0;
            SD_STOP_2 <= 0;
            SD_TOT_STEPS_2 <= 0;
            SD_JERK_2 <= 0;
            SD_JERK_DUR_2 <= 0;
            SD_ACCEL_DUR_2 <= 0;
            SD_RADDR_2 <= 0;
            SD_CR_3 <= 0;
            SD_START_3 <= 0;
            SD_STOP_3 <= 0;
            SD_TOT_STEPS_3 <= 0;
            SD_JERK_3 <= 0;
            SD_JERK_DUR_3 <= 0;
            SD_ACCEL_DUR_3 <= 0;
            SD_RADDR_3 <= 0;
            SD_CR_4 <= 0;
            SD_START_4 <= 0;
            SD_STOP_4 <= 0;
            SD_TOT_STEPS_4 <= 0;
            SD_JERK_4 <= 0;
            SD_JERK_DUR_4 <= 0;
            SD_ACCEL_DUR_4 <= 0;
            SD_RADDR_4 <= 0;
            QEM_CR_1 <= 0;
            QEM_I_CNT_1 <= 0;
            QEM_THRESH_1 <= 0;
            QEM_CR_2 <= 0;
            QEM_I_CNT_2 <= 0;
            QEM_THRESH_2 <= 0;
            QEM_CR_3 <= 0;
            QEM_I_CNT_3 <= 0;
            QEM_THRESH_3 <= 0;
            QEM_CR_4 <= 0;
            QEM_I_CNT_4 <= 0;
            QEM_THRESH_4 <= 0;
            GPIO_MOD_1 <= 0;
            GPIO_SEL_1 <= 0;
            GPIO_MOD_2 <= 0;
            GPIO_SEL_2 <= 0;
            GPIO_MOD_3 <= 0;
            GPIO_SEL_3 <= 0;
            GPIO_MOD_4 <= 0;
            GPIO_SEL_4 <= 0;
            GPIO_MOD_5 <= 0;
            GPIO_SEL_5 <= 0;
            GPIO_MOD_6 <= 0;
            GPIO_SEL_6 <= 0;
            GPIO_MOD_7 <= 0;
            GPIO_SEL_7 <= 0;
            GPIO_MOD_8 <= 0;
            GPIO_SEL_8 <= 0;
            GPIO_MOD_9 <= 0;
            GPIO_SEL_9 <= 0;
            GPIO_MOD_10 <= 0;
            GPIO_SEL_10 <= 0;
            GPIO_MOD_11 <= 0;
            GPIO_SEL_11 <= 0;
            GPIO_MOD_12 <= 0;
            GPIO_SEL_12 <= 0;
            GPIO_MOD_13 <= 0;
            GPIO_SEL_13 <= 0;
            GPIO_MOD_14 <= 0;
            GPIO_SEL_14 <= 0;
            GPIO_MOD_15 <= 0;
            GPIO_SEL_15 <= 0;
            GPIO_MOD_16 <= 0;
            GPIO_SEL_16 <= 0;
            GPIO_MOD_17 <= 0;
            GPIO_SEL_17 <= 0;
            GPIO_MOD_18 <= 0;
            GPIO_SEL_18 <= 0;
            GPIO_MOD_19 <= 0;
            GPIO_SEL_19 <= 0;
            GPIO_MOD_20 <= 0;
            GPIO_SEL_20 <= 0;
            GPIO_MOD_21 <= 0;
            GPIO_SEL_21 <= 0;
            GPIO_MOD_22 <= 0;
            GPIO_SEL_22 <= 0;
            GPIO_MOD_23 <= 0;
            GPIO_SEL_23 <= 0;
            GPIO_MOD_24 <= 0;
            GPIO_SEL_24 <= 0;
            GPIO_IRQEN <= 0;
            GPIO_IRQPOL <= 0;
            GPIO_IRQRES <= 0;
            GPIO_OUT <= 0;
            P_I_EN_REG <= 0;
        end
	else begin
	    GNT <= 1'b1;
	    RVALID <= 1'b1;
	    if (REQ && BE == 4'b1111) begin
            if (ADDR >= STARTING_ADDR) begin
	            // RVALID <= 1'b1;
                if (WRITE) begin
                    case ((ADDR & ~STARTING_ADDR) >> ADDR_SCALE)
                        0: ME_I_EN  <= DIN[0];
                        1: SPI_TX_DATA_1 <= DIN;
                        2: SPI_TX_START_1 <= DIN;
                        3: SPI_CR_1 <= DIN;
                        6: SPI_TX_DATA_2 <= DIN;
                        7: SPI_TX_START_2 <= DIN;
                        8: SPI_CR_2 <= DIN;
                        11: I2C_CR_1 <= DIN;
                        12: I2C_MOSI_DATA_1 <= DIN;
                        13: I2C_REG_ADDR_1 <= DIN;
                        14: I2C_DEV_ADDR_1 <= DIN;
                        17: I2C_CR_2 <= DIN;
                        18: I2C_MOSI_DATA_2 <= DIN;
                        19: I2C_REG_ADDR_2 <= DIN;
                        20: I2C_DEV_ADDR_2 <= DIN;
                        23: PWM_PERIOD_DIV_1 <= DIN;
                        24: PWM_MOD_SETPOINT_1 <= DIN;
                        25: PWM_EN_1 <= DIN;
                        27: PWM_PERIOD_DIV_2 <= DIN;
                        28: PWM_MOD_SETPOINT_2 <= DIN;
                        29: PWM_EN_2 <= DIN;
                        31: PWM_PERIOD_DIV_3 <= DIN;
                        32: PWM_MOD_SETPOINT_3 <= DIN;
                        33: PWM_EN_3 <= DIN;
                        35: PWM_PERIOD_DIV_4 <= DIN;
                        36: PWM_MOD_SETPOINT_4 <= DIN;
                        37: PWM_EN_4 <= DIN;
                        39: TIM_CTRL_1 <= DIN;
                        40: TIM_THRESH_H_1 <= DIN;
                        41: TIM_THRESH_L_1 <= DIN;
                        45: TIM_CTRL_2 <= DIN;
                        46: TIM_THRESH_H_2 <= DIN;
                        47: TIM_THRESH_L_2 <= DIN;
                        51: TIM_CTRL_3 <= DIN;
                        52: TIM_THRESH_H_3 <= DIN;
                        53: TIM_THRESH_L_3 <= DIN;
                        57: TIM_CTRL_4 <= DIN;
                        58: TIM_THRESH_H_4 <= DIN;
                        59: TIM_THRESH_L_4 <= DIN;
                        63: UART_CR_1 <= DIN;
                        64: UART_TX_RATE_DIV_1 <= DIN;
                        65: UART_RX_RATE_DIV_1 <= DIN;
                        66: UART_TX_DATA_1 <= DIN;
                        69: UART_CR_2 <= DIN;
                        70: UART_TX_RATE_DIV_2 <= DIN;
                        71: UART_RX_RATE_DIV_2 <= DIN;
                        72: UART_TX_DATA_2 <= DIN;
                        75: UART_CR_3 <= DIN;
                        76: UART_TX_RATE_DIV_3 <= DIN;
                        77: UART_RX_RATE_DIV_3 <= DIN;
                        78: UART_TX_DATA_3 <= DIN;
                        81: UART_CR_4 <= DIN;
                        82: UART_TX_RATE_DIV_4 <= DIN;
                        83: UART_RX_RATE_DIV_4 <= DIN;
                        84: UART_TX_DATA_4 <= DIN;
                        87: SD_CR_1 <= DIN;
                        88: SD_START_1 <= DIN;
                        89: SD_STOP_1 <= DIN;
                        90: SD_TOT_STEPS_1 <= DIN;
                        91: SD_JERK_1 <= DIN;
                        92: SD_JERK_DUR_1 <= DIN;
                        93: SD_ACCEL_DUR_1 <= DIN;
                        94: SD_RADDR_1 <= DIN;
                        97: SD_CR_2 <= DIN;
                        98: SD_START_2 <= DIN;
                        99: SD_STOP_2 <= DIN;
                        100: SD_TOT_STEPS_2 <= DIN;
                        101: SD_JERK_2 <= DIN;
                        102: SD_JERK_DUR_2 <= DIN;
                        103: SD_ACCEL_DUR_2 <= DIN;
                        104: SD_RADDR_2 <= DIN;
                        107: SD_CR_3 <= DIN;
                        108: SD_START_3 <= DIN;
                        109: SD_STOP_3 <= DIN;
                        110: SD_TOT_STEPS_3 <= DIN;
                        111: SD_JERK_3 <= DIN;
                        112: SD_JERK_DUR_3 <= DIN;
                        113: SD_ACCEL_DUR_3 <= DIN;
                        114: SD_RADDR_3 <= DIN;
                        117: SD_CR_4 <= DIN;
                        118: SD_START_4 <= DIN;
                        119: SD_STOP_4 <= DIN;
                        120: SD_TOT_STEPS_4 <= DIN;
                        121: SD_JERK_4 <= DIN;
                        122: SD_JERK_DUR_4 <= DIN;
                        123: SD_ACCEL_DUR_4 <= DIN;
                        124: SD_RADDR_4 <= DIN;
                        127: QEM_CR_1 <= DIN;
                        128: QEM_I_CNT_1 <= DIN;
                        129: QEM_THRESH_1 <= DIN;
                        133: QEM_CR_2 <= DIN;
                        134: QEM_I_CNT_2 <= DIN;
                        135: QEM_THRESH_2 <= DIN;
                        139: QEM_CR_3 <= DIN;
                        140: QEM_I_CNT_3 <= DIN;
                        141: QEM_THRESH_3 <= DIN;
                        145: QEM_CR_4 <= DIN;
                        146: QEM_I_CNT_4 <= DIN;
                        147: QEM_THRESH_4 <= DIN;
                        151: begin
                            GPIO_MOD_1 <= DIN[`MOD1_POS:`MOD0_POS];
                            GPIO_SEL_1 <= DIN[`SEL1_POS:`SEL0_POS];
                            GPIO_MOD_2 <= DIN[`MOD1_POS + 16:`MOD0_POS + 16];
                            GPIO_SEL_2 <= DIN[`SEL1_POS + 16:`SEL0_POS + 16];
                        end
                        152: begin
                            GPIO_MOD_3 <= DIN[`MOD1_POS:`MOD0_POS];
                            GPIO_SEL_3 <= DIN[`SEL1_POS:`SEL0_POS];
                            GPIO_MOD_4 <= DIN[`MOD1_POS + 16:`MOD0_POS + 16];
                            GPIO_SEL_4 <= DIN[`SEL1_POS + 16:`SEL0_POS + 16];
                        end
                        153: begin
                            GPIO_MOD_5 <= DIN[`MOD1_POS:`MOD0_POS];
                            GPIO_SEL_5 <= DIN[`SEL1_POS:`SEL0_POS];
                            GPIO_MOD_6 <= DIN[`MOD1_POS + 16:`MOD0_POS + 16];
                            GPIO_SEL_6 <= DIN[`SEL1_POS + 16:`SEL0_POS + 16];
                        end
                        154: begin
                            GPIO_MOD_7 <= DIN[`MOD1_POS:`MOD0_POS];
                            GPIO_SEL_7 <= DIN[`SEL1_POS:`SEL0_POS];
                            GPIO_MOD_8 <= DIN[`MOD1_POS + 16:`MOD0_POS + 16];
                            GPIO_SEL_8 <= DIN[`SEL1_POS + 16:`SEL0_POS + 16];
                        end
                        155: begin
                            GPIO_MOD_9 <= DIN[`MOD1_POS:`MOD0_POS];
                            GPIO_SEL_9 <= DIN[`SEL1_POS:`SEL0_POS];
                            GPIO_MOD_10 <= DIN[`MOD1_POS + 16:`MOD0_POS + 16];
                            GPIO_SEL_10 <= DIN[`SEL1_POS + 16:`SEL0_POS + 16];
                        end
                        156: begin
                            GPIO_MOD_11 <= DIN[`MOD1_POS:`MOD0_POS];
                            GPIO_SEL_11 <= DIN[`SEL1_POS:`SEL0_POS];
                            GPIO_MOD_12 <= DIN[`MOD1_POS + 16:`MOD0_POS + 16];
                            GPIO_SEL_12 <= DIN[`SEL1_POS + 16:`SEL0_POS + 16];
                        end
                        157: begin
                            GPIO_MOD_13 <= DIN[`MOD1_POS:`MOD0_POS];
                            GPIO_SEL_13 <= DIN[`SEL1_POS:`SEL0_POS];
                            GPIO_MOD_14 <= DIN[`MOD1_POS + 16:`MOD0_POS + 16];
                            GPIO_SEL_14 <= DIN[`SEL1_POS + 16:`SEL0_POS + 16];
                        end
                        158: begin
                            GPIO_MOD_15 <= DIN[`MOD1_POS:`MOD0_POS];
                            GPIO_SEL_15 <= DIN[`SEL1_POS:`SEL0_POS];
                            GPIO_MOD_16 <= DIN[`MOD1_POS + 16:`MOD0_POS + 16];
                            GPIO_SEL_16 <= DIN[`SEL1_POS + 16:`SEL0_POS + 16];
                        end
                        159: begin
                            GPIO_MOD_17 <= DIN[`MOD1_POS:`MOD0_POS];
                            GPIO_SEL_17 <= DIN[`SEL1_POS:`SEL0_POS];
                            GPIO_MOD_18 <= DIN[`MOD1_POS + 16:`MOD0_POS + 16];
                            GPIO_SEL_18 <= DIN[`SEL1_POS + 16:`SEL0_POS + 16];
                        end
                        160: begin
                            GPIO_MOD_19 <= DIN[`MOD1_POS:`MOD0_POS];
                            GPIO_SEL_19 <= DIN[`SEL1_POS:`SEL0_POS];
                            GPIO_MOD_20 <= DIN[`MOD1_POS + 16:`MOD0_POS + 16];
                            GPIO_SEL_20 <= DIN[`SEL1_POS + 16:`SEL0_POS + 16];
                        end
                        161: begin
                            GPIO_MOD_21 <= DIN[`MOD1_POS:`MOD0_POS];
                            GPIO_SEL_21 <= DIN[`SEL1_POS:`SEL0_POS];
                            GPIO_MOD_22 <= DIN[`MOD1_POS + 16:`MOD0_POS + 16];
                            GPIO_SEL_22 <= DIN[`SEL1_POS + 16:`SEL0_POS + 16];
                        end
                        162: begin
                            GPIO_MOD_23 <= DIN[`MOD1_POS:`MOD0_POS];
                            GPIO_SEL_23 <= DIN[`SEL1_POS:`SEL0_POS];
                            GPIO_MOD_24 <= DIN[`MOD1_POS + 16:`MOD0_POS + 16];
                            GPIO_SEL_24 <= DIN[`SEL1_POS + 16:`SEL0_POS + 16];
                        end
                        163: P_I_EN_REG <= DIN[(`NUM_INTER - `NUM_PINS - 1):0];
                        default: begin
                        end
                    endcase
                    for (integer i = 0; i < `NUM_PINS; i++) begin
                        case ((ADDR & ~STARTING_ADDR) >> ADDR_SCALE)
                        (GPIO_ADDR_OFFSET + i / 2): begin
                            GPIO_IRQEN[i]         <= (i[0] == 0) ? DIN[`IRQEN_POS] : DIN[`IRQEN_POS + 16];
                            GPIO_IRQPOL[i]        <= (i[0] == 0) ? DIN[`IRQPOL_POS] : DIN[`IRQPOL_POS + 16];
                            GPIO_IRQRES[i]        <= (i[0] == 0) ? DIN[`IRQRES_POS] : DIN[`IRQRES_POS + 16];
                            GPIO_OUT[i]           <= (i[0] == 0) ? DIN[`DATA_OUT_POS] : DIN[`DATA_OUT_POS + 16];
                        end
                        default: begin
                        end
                        endcase
                    end
                end
                else begin
                    case ((ADDR & ~STARTING_ADDR) >> ADDR_SCALE)
                        0: DOUT <= {31'b0, ME_I_EN};
                        1: DOUT <= SPI_TX_DATA_1;
                        2: DOUT <= SPI_TX_START_1;
                        3: DOUT <= SPI_CR_1;
                        4: DOUT <= SPI_SR_1;
                        5: DOUT <= SPI_RX_DATA_1;
                        6: DOUT <= SPI_TX_DATA_2;
                        7: DOUT <= SPI_TX_START_2;
                        8: DOUT <= SPI_CR_2;
                        9: DOUT <= SPI_SR_2;
                        10: DOUT <= SPI_RX_DATA_2;
                        11: DOUT <= I2C_CR_1;
                        12: DOUT <= I2C_MOSI_DATA_1;
                        13: DOUT <= I2C_REG_ADDR_1;
                        14: DOUT <= I2C_DEV_ADDR_1;
                        15: DOUT <= I2C_MISO_DATA_1;
                        16: DOUT <= I2C_SR_1;
                        17: DOUT <= I2C_CR_2;
                        18: DOUT <= I2C_MOSI_DATA_2;
                        19: DOUT <= I2C_REG_ADDR_2;
                        20: DOUT <= I2C_DEV_ADDR_2;
                        21: DOUT <= I2C_MISO_DATA_2;
                        22: DOUT <= I2C_SR_2;
                        23: DOUT <= PWM_PERIOD_DIV_1;
                        24: DOUT <= PWM_MOD_SETPOINT_1;
                        25: DOUT <= PWM_EN_1;
                        26: DOUT <= PWM_SR_1;
                        27: DOUT <= PWM_PERIOD_DIV_2;
                        28: DOUT <= PWM_MOD_SETPOINT_2;
                        29: DOUT <= PWM_EN_2;
                        30: DOUT <= PWM_SR_2;
                        31: DOUT <= PWM_PERIOD_DIV_3;
                        32: DOUT <= PWM_MOD_SETPOINT_3;
                        33: DOUT <= PWM_EN_3;
                        34: DOUT <= PWM_SR_3;
                        35: DOUT <= PWM_PERIOD_DIV_4;
                        36: DOUT <= PWM_MOD_SETPOINT_4;
                        37: DOUT <= PWM_EN_4;
                        38: DOUT <= PWM_SR_4;
                        39: DOUT <= TIM_CTRL_1;
                        40: DOUT <= TIM_THRESH_H_1;
                        41: DOUT <= TIM_THRESH_L_1;
                        42: DOUT <= TIM_OUT_H_1;
                        43: DOUT <= TIM_OUT_L_1;
                        44: DOUT <= {31'b0, TIM_INT_REG[0]};
                        45: DOUT <= TIM_CTRL_2;
                        46: DOUT <= TIM_THRESH_H_2;
                        47: DOUT <= TIM_THRESH_L_2;
                        48: DOUT <= TIM_OUT_H_2;
                        49: DOUT <= TIM_OUT_L_2;
                        50: DOUT <= {31'b0, TIM_INT_REG[1]};
                        51: DOUT <= TIM_CTRL_3;
                        52: DOUT <= TIM_THRESH_H_3;
                        53: DOUT <= TIM_THRESH_L_3;
                        54: DOUT <= TIM_OUT_H_3;
                        55: DOUT <= TIM_OUT_L_3;
                        56: DOUT <= {31'b0, TIM_INT_REG[2]};
                        57: DOUT <= TIM_CTRL_4;
                        58: DOUT <= TIM_THRESH_H_4;
                        59: DOUT <= TIM_THRESH_L_4;
                        60: DOUT <= TIM_OUT_H_4;
                        61: DOUT <= TIM_OUT_L_4;
                        62: DOUT <= {31'b0, TIM_INT_REG[3]};
                        63: DOUT <= UART_CR_1;
                        64: DOUT <= UART_TX_RATE_DIV_1;
                        65: DOUT <= UART_RX_RATE_DIV_1;
                        66: DOUT <= UART_TX_DATA_1;
                        67: DOUT <= UART_SR_1;
                        68: DOUT <= UART_RX_DATA_1;
                        69: DOUT <= UART_CR_2;
                        70: DOUT <= UART_TX_RATE_DIV_2;
                        71: DOUT <= UART_RX_RATE_DIV_2;
                        72: DOUT <= UART_TX_DATA_2;
                        73: DOUT <= UART_SR_2;
                        74: DOUT <= UART_RX_DATA_2;
                        75: DOUT <= UART_CR_3;
                        76: DOUT <= UART_TX_RATE_DIV_3;
                        77: DOUT <= UART_RX_RATE_DIV_3;
                        78: DOUT <= UART_TX_DATA_3;
                        79: DOUT <= UART_SR_3;
                        80: DOUT <= UART_RX_DATA_3;
                        81: DOUT <= UART_CR_4;
                        82: DOUT <= UART_TX_RATE_DIV_4;
                        83: DOUT <= UART_RX_RATE_DIV_4;
                        84: DOUT <= UART_TX_DATA_4;
                        85: DOUT <= UART_SR_4;
                        86: DOUT <= UART_RX_DATA_4;
                        87: DOUT <= SD_CR_1;
                        88: DOUT <= SD_START_1;
                        89: DOUT <= SD_STOP_1;
                        90: DOUT <= SD_TOT_STEPS_1;
                        91: DOUT <= SD_JERK_1;
                        92: DOUT <= SD_JERK_DUR_1;
                        93: DOUT <= SD_ACCEL_DUR_1;
                        94: DOUT <= SD_RADDR_1;
                        95: DOUT <= SD_RDATA_1;
                        96: DOUT <= SD_SR_1;
                        97: DOUT <= SD_CR_2;
                        98: DOUT <= SD_START_2;
                        99: DOUT <= SD_STOP_2;
                        100: DOUT <= SD_TOT_STEPS_2;
                        101: DOUT <= SD_JERK_2;
                        102: DOUT <= SD_JERK_DUR_2;
                        103: DOUT <= SD_ACCEL_DUR_2;
                        104: DOUT <= SD_RADDR_2;
                        105: DOUT <= SD_RDATA_2;
                        106: DOUT <= SD_SR_2;
                        107: DOUT <= SD_CR_3;
                        108: DOUT <= SD_START_3;
                        109: DOUT <= SD_STOP_3;
                        110: DOUT <= SD_TOT_STEPS_3;
                        111: DOUT <= SD_JERK_3;
                        112: DOUT <= SD_JERK_DUR_3;
                        113: DOUT <= SD_ACCEL_DUR_3;
                        114: DOUT <= SD_RADDR_3;
                        115: DOUT <= SD_RDATA_3;
                        116: DOUT <= SD_SR_3;
                        117: DOUT <= SD_CR_4;
                        118: DOUT <= SD_START_4;
                        119: DOUT <= SD_STOP_4;
                        120: DOUT <= SD_TOT_STEPS_4;
                        121: DOUT <= SD_JERK_4;
                        122: DOUT <= SD_JERK_DUR_4;
                        123: DOUT <= SD_ACCEL_DUR_4;
                        124: DOUT <= SD_RADDR_4;
                        125: DOUT <= SD_RDATA_4;
                        126: DOUT <= SD_SR_4;
                        127: DOUT <= QEM_CR_1;
                        128: DOUT <= QEM_I_CNT_1;
                        129: DOUT <= QEM_THRESH_1;
                        130: DOUT <= QEM_SR_1;
                        131: DOUT <= QEM_O_CNT_LATCH_1;
                        132: DOUT <= QEM_O_CNT_1;
                        133: DOUT <= QEM_CR_2;
                        134: DOUT <= QEM_I_CNT_2;
                        135: DOUT <= QEM_THRESH_2;
                        136: DOUT <= QEM_SR_2;
                        137: DOUT <= QEM_O_CNT_LATCH_2;
                        138: DOUT <= QEM_O_CNT_2;
                        139: DOUT <= QEM_CR_3;
                        140: DOUT <= QEM_I_CNT_3;
                        141: DOUT <= QEM_THRESH_3;
                        142: DOUT <= QEM_SR_3;
                        143: DOUT <= QEM_O_CNT_LATCH_3;
                        144: DOUT <= QEM_O_CNT_3;
                        145: DOUT <= QEM_CR_4;
                        146: DOUT <= QEM_I_CNT_4;
                        147: DOUT <= QEM_THRESH_4;
                        148: DOUT <= QEM_SR_4;
                        149: DOUT <= QEM_O_CNT_LATCH_4;
                        150: DOUT <= QEM_O_CNT_4;
                        151: begin
                            DOUT[`MOD1_POS:`MOD0_POS] <= GPIO_MOD_1;
                            DOUT[`SEL1_POS:`SEL0_POS] <= GPIO_SEL_1;
                            DOUT[`MOD1_POS + 16:`MOD0_POS + 16] <= GPIO_MOD_2;
                            DOUT[`SEL1_POS + 16:`SEL0_POS + 16] <= GPIO_SEL_2;
                        end
                        152: begin
                            DOUT[`MOD1_POS:`MOD0_POS] <= GPIO_MOD_3;
                            DOUT[`SEL1_POS:`SEL0_POS] <= GPIO_SEL_3;
                            DOUT[`MOD1_POS + 16:`MOD0_POS + 16] <= GPIO_MOD_4;
                            DOUT[`SEL1_POS + 16:`SEL0_POS + 16] <= GPIO_SEL_4;
                        end
                        153: begin
                            DOUT[`MOD1_POS:`MOD0_POS] <= GPIO_MOD_5;
                            DOUT[`SEL1_POS:`SEL0_POS] <= GPIO_SEL_5;
                            DOUT[`MOD1_POS + 16:`MOD0_POS + 16] <= GPIO_MOD_6;
                            DOUT[`SEL1_POS + 16:`SEL0_POS + 16] <= GPIO_SEL_6;
                        end
                        154: begin
                            DOUT[`MOD1_POS:`MOD0_POS] <= GPIO_MOD_7;
                            DOUT[`SEL1_POS:`SEL0_POS] <= GPIO_SEL_7;
                            DOUT[`MOD1_POS + 16:`MOD0_POS + 16] <= GPIO_MOD_8;
                            DOUT[`SEL1_POS + 16:`SEL0_POS + 16] <= GPIO_SEL_8;
                        end
                        155: begin
                            DOUT[`MOD1_POS:`MOD0_POS] <= GPIO_MOD_9;
                            DOUT[`SEL1_POS:`SEL0_POS] <= GPIO_SEL_9;
                            DOUT[`MOD1_POS + 16:`MOD0_POS + 16] <= GPIO_MOD_10;
                            DOUT[`SEL1_POS + 16:`SEL0_POS + 16] <= GPIO_SEL_10;
                        end
                        156: begin
                            DOUT[`MOD1_POS:`MOD0_POS] <= GPIO_MOD_11;
                            DOUT[`SEL1_POS:`SEL0_POS] <= GPIO_SEL_11;
                            DOUT[`MOD1_POS + 16:`MOD0_POS + 16] <= GPIO_MOD_12;
                            DOUT[`SEL1_POS + 16:`SEL0_POS + 16] <= GPIO_SEL_12;
                        end
                        157: begin
                            DOUT[`MOD1_POS:`MOD0_POS] <= GPIO_MOD_13;
                            DOUT[`SEL1_POS:`SEL0_POS] <= GPIO_SEL_13;
                            DOUT[`MOD1_POS + 16:`MOD0_POS + 16] <= GPIO_MOD_14;
                            DOUT[`SEL1_POS + 16:`SEL0_POS + 16] <= GPIO_SEL_14;
                        end
                        158: begin
                            DOUT[`MOD1_POS:`MOD0_POS] <= GPIO_MOD_15;
                            DOUT[`SEL1_POS:`SEL0_POS] <= GPIO_SEL_15;
                            DOUT[`MOD1_POS + 16:`MOD0_POS + 16] <= GPIO_MOD_16;
                            DOUT[`SEL1_POS + 16:`SEL0_POS + 16] <= GPIO_SEL_16;
                        end
                        159: begin
                            DOUT[`MOD1_POS:`MOD0_POS] <= GPIO_MOD_17;
                            DOUT[`SEL1_POS:`SEL0_POS] <= GPIO_SEL_17;
                            DOUT[`MOD1_POS + 16:`MOD0_POS + 16] <= GPIO_MOD_18;
                            DOUT[`SEL1_POS + 16:`SEL0_POS + 16] <= GPIO_SEL_18;
                        end
                        160: begin
                            DOUT[`MOD1_POS:`MOD0_POS] <= GPIO_MOD_19;
                            DOUT[`SEL1_POS:`SEL0_POS] <= GPIO_SEL_19;
                            DOUT[`MOD1_POS + 16:`MOD0_POS + 16] <= GPIO_MOD_20;
                            DOUT[`SEL1_POS + 16:`SEL0_POS + 16] <= GPIO_SEL_20;
                        end
                        161: begin
                            DOUT[`MOD1_POS:`MOD0_POS] <= GPIO_MOD_21;
                            DOUT[`SEL1_POS:`SEL0_POS] <= GPIO_SEL_21;
                            DOUT[`MOD1_POS + 16:`MOD0_POS + 16] <= GPIO_MOD_22;
                            DOUT[`SEL1_POS + 16:`SEL0_POS + 16] <= GPIO_SEL_22;
                        end
                        162: begin
                            DOUT[`MOD1_POS:`MOD0_POS] <= GPIO_MOD_23;
                            DOUT[`SEL1_POS:`SEL0_POS] <= GPIO_SEL_23;
                            DOUT[`MOD1_POS + 16:`MOD0_POS + 16] <= GPIO_MOD_24;
                            DOUT[`SEL1_POS + 16:`SEL0_POS + 16] <= GPIO_SEL_24;
                        end
                        163: DOUT <= {{32 - (`NUM_INTER - `NUM_PINS){1'b0}}, P_I_EN_REG};
                        default: DOUT <= 0;
                    endcase
                    for (j = 0; j < `NUM_PINS; j++) begin
                        case ((ADDR & ~STARTING_ADDR) >> ADDR_SCALE)
                            (GPIO_ADDR_OFFSET + j / 2): begin
                                case (j[0])
                                    0: begin
                                        DOUT[`IRQEN_POS]     <= GPIO_IRQEN[j];
                                        DOUT[`IRQPOL_POS]    <= GPIO_IRQPOL[j];
                                        DOUT[`IRQRES_POS]    <= GPIO_IRQRES[j];
                                        DOUT[`DATA_OUT_POS]  <= GPIO_OUT[j];
                                        DOUT[`DATA_IN_POS]   <= GPIO_IN[j];
                                        DOUT[`INTR_POS]      <= GPIO_INTR[j];
                                    end
                                    1: begin
                                        DOUT[`IRQEN_POS + 16]     <= GPIO_IRQEN[j];
                                        DOUT[`IRQPOL_POS + 16]    <= GPIO_IRQPOL[j];
                                        DOUT[`IRQRES_POS + 16]    <= GPIO_IRQRES[j];
                                        DOUT[`DATA_OUT_POS + 16]  <= GPIO_OUT[j];
                                        DOUT[`DATA_IN_POS + 16] <= GPIO_IN[j];
                                        DOUT[`INTR_POS + 16]    <= GPIO_INTR[j];
                                    end
                                endcase
                            end
                            default: DOUT <= 0;
                        endcase
                    end
                end
            end
	end
		//     else
		//          RVALID <= 1'b0;
    	// end
	    // else begin
        //      GNT <= 1'b1;
        //      RVALID <= 1'b0;
        end
    end
endmodule
