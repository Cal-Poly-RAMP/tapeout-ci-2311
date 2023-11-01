`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
// Module Name: peripheral_unit
// 
// SPDX-License-Identifier: Apache-2.0
//
//////////////////////////////////////////////////////////////////////////////////

`include "Peripheral_Unit_Defs.svh"

module peripheral_unit (
    //Core interface
    input clk,
    input reset_n,
    input peripheral_req,
    output peripheral_gnt,
    input peripheral_we,
    output peripheral_rvalid,
    input [31:0] peripheral_addr,
    input [31:0] peripheral_wdata,
    output logic [31:0] peripheral_rdata,
    input [3:0] peripheral_be,
    output timer_intr,

    //Memory interface
    input mem_access_err,

    //Interrupt controller interface
    output logic mem_err_int,
    output logic me_i_en,
    output logic [`NUM_INTER - 1:0] p_interrupts,
    output logic [`NUM_INTER - 1:0] p_i_enable,

    //I/O interface
    input [`NUM_PINS - 1:0] io_in,
    output logic [`NUM_PINS - 1:0] io_out,
    output logic [`NUM_PINS - 1:0] io_oeb_no
);

   // Peripheral additions
   /////////////////////////
   // SPI Master Interface
   logic [31:0] SPI_TX_DATA [`SPI_INST_NUM - 1: 0];
   logic [31:0] SPI_TX_START [`SPI_INST_NUM - 1: 0];
   logic [31:0] SPI_CR [`SPI_INST_NUM - 1: 0];
   logic [31:0] SPI_SR [`SPI_INST_NUM - 1: 0];
   logic [31:0] SPI_RX_DATA [`SPI_INST_NUM - 1: 0];
   logic [`SPI_INST_NUM - 1: 0] SPI_TX_DATA_WR;
   logic [`SPI_INST_NUM - 1: 0] SPI_CR_WR;

   logic SPI_MISO[`SPI_INST_NUM];
   logic SPI_CLK[`SPI_INST_NUM];
   logic [`SPI_NUM_CS - 1:0] SPI_CS [`SPI_INST_NUM];
   logic SPI_MOSI[`SPI_INST_NUM];
   
   genvar spi_gv1;
   generate
        for (spi_gv1 = 0; spi_gv1 < `SPI_INST_NUM; spi_gv1++) begin
            assign SPI_SR[spi_gv1][31:2] = 30'b0;
            assign SPI_RX_DATA[spi_gv1][31:16] = 16'b0;
        end
   endgenerate
   
   genvar spi_gv2;
   generate
       for (spi_gv2 = 0; spi_gv2 < `SPI_INST_NUM; spi_gv2++) begin
           SPI_Master_With_Multiple_CS SPI_b (
                .i_Rst_L(reset_n),
                .i_Clk(clk),
                .i_wr_cr(SPI_CR_WR[spi_gv2]),
                .i_wr_data(SPI_TX_DATA_WR[spi_gv2]),
                .i_SPI_CS_en(SPI_CR[spi_gv2][3:0]),
                .i_spi_mode(SPI_CR[spi_gv2][9:8]),
                .i_ticks_per_half_bit(SPI_CR[spi_gv2][31:16]),
                .i_TX_Count(SPI_CR[spi_gv2][15:12]),
                .i_data_length(SPI_CR[spi_gv2][7:4]),
                .i_TX_Data(SPI_TX_DATA[spi_gv2][15:0]),
                .i_TX_MSB_first(SPI_CR[spi_gv2][10]),
	            .i_TX_DV(SPI_TX_START[spi_gv2][0]),
	            .o_TX_Ready(SPI_SR[spi_gv2][0]),
	            .o_RX_Count(SPI_SR[spi_gv2][5:2]),
	            .i_RX_MSB_first(SPI_CR[spi_gv2][11]),
	            .o_RX_DV(SPI_SR[spi_gv2][1]),
	            .o_RX_Data(SPI_RX_DATA[spi_gv2][15:0]),
	            .o_SPI_Clk(SPI_CLK[spi_gv2]),
	            .i_SPI_MISO(SPI_MISO[spi_gv2]),
	            .o_SPI_MOSI(SPI_MOSI[spi_gv2]),
	            .o_SPI_CS_n(SPI_CS[spi_gv2]));
	   end
   endgenerate
   
    // I2C Master Interface
    logic [31:0] I2C_CR [`I2C_INST_NUM - 1: 0];
    logic [31:0] I2C_MOSI_DATA [`I2C_INST_NUM - 1: 0];
    logic [31:0] I2C_REG_ADDR [`I2C_INST_NUM - 1: 0];
    logic [31:0] I2C_DEV_ADDR [`I2C_INST_NUM - 1: 0];
    logic [31:0] I2C_MISO_DATA [`I2C_INST_NUM - 1: 0];
    logic [31:0] I2C_SR [`I2C_INST_NUM - 1: 0];
    logic [`I2C_INST_NUM - 1: 0] I2C_CR_WR;
    logic [`I2C_INST_NUM - 1: 0] I2C_MOSI_DATA_WR;
    logic [`I2C_INST_NUM - 1: 0] I2C_REG_ADDR_WR;
    logic [`I2C_INST_NUM - 1: 0] I2C_DEV_ADDR_WR;

    logic [`I2C_INST_NUM - 1: 0] I2C_SDA_I;
    logic [`I2C_INST_NUM - 1: 0] I2C_SDA_O;
    logic [`I2C_INST_NUM - 1: 0] I2C_SCL;

    localparam I2C_DATA_WIDTH = 8;
    localparam I2C_REG_WIDTH = 8;
    localparam I2C_ADDR_WIDTH = 7;
    
    genvar i2c_gv1;
    generate
        for (i2c_gv1 = 0; i2c_gv1 < `I2C_INST_NUM; i2c_gv1++) begin
            assign I2C_MISO_DATA[i2c_gv1][31:8] = 24'b0;
            assign I2C_SR[i2c_gv1][31:1] = 31'b0;
        end
    endgenerate

    genvar i2c_gv2;
    generate
        for (i2c_gv2 = 0; i2c_gv2 < `I2C_INST_NUM; i2c_gv2++) begin
            I2C_Master #(.DATA_WIDTH(I2C_DATA_WIDTH),.REG_WIDTH(I2C_REG_WIDTH),.ADDR_WIDTH(I2C_ADDR_WIDTH))
                I2C_b (
                    .i_clk(clk),
                    .i_rst_n(reset_n),
                    .i_wr_cr(I2C_CR_WR[i2c_gv2]),
                    .i_wr_mosi_data(I2C_MOSI_DATA_WR[i2c_gv2]),
                    .i_wr_reg_addr(I2C_REG_ADDR_WR[i2c_gv2]),
                    .i_wr_dev_addr(I2C_DEV_ADDR_WR[i2c_gv2]),
                    .i_enable(I2C_CR[i2c_gv2][1]),
                    .i_rw(I2C_CR[i2c_gv2][0]),
                    .i_mosi_data(I2C_MOSI_DATA[i2c_gv2][I2C_DATA_WIDTH - 1:0]),
                    .i_reg_addr(I2C_REG_ADDR[i2c_gv2][I2C_REG_WIDTH - 1:0]),
                    .i_device_addr(I2C_DEV_ADDR[i2c_gv2][I2C_ADDR_WIDTH - 1:0]),
                    .i_clk_div(I2C_CR[i2c_gv2][31:16]),
                    .o_miso_data(I2C_MISO_DATA[i2c_gv2][I2C_DATA_WIDTH - 1:0]),
                    .o_busy(I2C_SR[i2c_gv2][0]),
                    .i_sda(I2C_SDA_I[i2c_gv2]),
                    .o_sda(I2C_SDA_O[i2c_gv2]),
                    .o_scl(I2C_SCL[i2c_gv2]));
        end
    endgenerate
   
   //PWM Interface
   localparam MOD_WIDTH = 8;                    // from 0 to 255
   logic [31:0] PWM_PERIOD_DIV [`PWM_INST_NUM - 1: 0];
   logic [31:0] PWM_MOD_SETPOINT [`PWM_INST_NUM - 1: 0];
   logic [31:0] PWM_EN [`PWM_INST_NUM - 1: 0];
   logic [31:0] PWM_SR [`PWM_INST_NUM - 1: 0];
   logic [`PWM_INST_NUM - 1: 0] PWM_PERIOD_DIV_WR;
   logic [`PWM_INST_NUM - 1: 0] PWM_MOD_SETPOINT_WR;
   logic [`PWM_INST_NUM - 1: 0] PWM_EN_WR;

   logic PWM_OUT[`PWM_INST_NUM];
   
   genvar pwm_gv1;
   generate
        for (pwm_gv1 = 0; pwm_gv1 < `PWM_INST_NUM; pwm_gv1++) begin
            assign PWM_SR[pwm_gv1][31:1] = 31'b0;
        end
   endgenerate
   
   genvar pwm_gv2;
   generate
        for (pwm_gv2 = 0; pwm_gv2 < `PWM_INST_NUM; pwm_gv2++) begin
           PWM_modulator #(
              .MOD_WIDTH(MOD_WIDTH)
            ) PWM_b (
              .clk(clk),
              .nrst(reset_n),
              .en(PWM_EN[pwm_gv2][0]),
              .wr_en(PWM_EN_WR[pwm_gv2]),
              .wr_pwm_period_div(PWM_PERIOD_DIV_WR[pwm_gv2]),
              .wr_mod_setpoint(PWM_MOD_SETPOINT_WR[pwm_gv2]),
              .pwm_period_div(PWM_PERIOD_DIV[pwm_gv2][7:0]),
              .mod_setpoint(PWM_MOD_SETPOINT[pwm_gv2][MOD_WIDTH - 1:0]),
              .pwm_out(PWM_OUT[pwm_gv2]),
              .start_strobe(PWM_SR[pwm_gv2][0]),
              .busy(PWM_SR[pwm_gv2][1]));
         end
    endgenerate
   
    //Timer interface
    logic [31:0] TIM_CTRL [`TIM_INST_NUM - 1: 0];
    logic [31:0] TIM_THRESH_H [`TIM_INST_NUM - 1: 0];
    logic [31:0] TIM_THRESH_L [`TIM_INST_NUM - 1: 0];
    logic [31:0] TIM_OUT_H [`TIM_INST_NUM - 1: 0];
    logic [31:0] TIM_OUT_L [`TIM_INST_NUM - 1: 0];
    logic [`TIM_INST_NUM - 1: 0] TIM_INT;
    logic [`TIM_INST_NUM - 1: 0] TIM_CTRL_WR;
    logic [`TIM_INST_NUM - 1: 0] TIM_THRESH_H_WR;
    logic [`TIM_INST_NUM - 1: 0] TIM_THRESH_L_WR;
   
   genvar tim_gv1;
   generate
       for (tim_gv1 = 0; tim_gv1 < `TIM_INST_NUM; tim_gv1++) begin
           Timer TIMER_b (
               .CLK(clk),
               .RST_N(reset_n),
               .en(TIM_CTRL[tim_gv1][0]),
               .wr_en(TIM_CTRL_WR[tim_gv1]),
               .wr_mtimecmp_in_h(TIM_THRESH_H_WR[tim_gv1]),
               .wr_mtimecmp_in_l(TIM_THRESH_L_WR[tim_gv1]),
               .mtimecmp_in_h(TIM_THRESH_H[tim_gv1]),
               .mtimecmp_in_l(TIM_THRESH_L[tim_gv1]),
               .mtime_h(TIM_OUT_H[tim_gv1]),
               .mtime_l(TIM_OUT_L[tim_gv1]),
               .timer_int(TIM_INT[tim_gv1]));
       end
   endgenerate
   
   //UART Interface
   logic [31:0] UART_CR [`UART_INST_NUM - 1: 0];
   logic [31:0] UART_TX_RATE_DIV [`UART_INST_NUM - 1: 0];
   logic [31:0] UART_RX_RATE_DIV [`UART_INST_NUM - 1: 0];
   logic [31:0] UART_TX_DATA [`UART_INST_NUM - 1: 0];
   logic [31:0] UART_SR [`UART_INST_NUM - 1: 0];
   logic [31:0] UART_RX_DATA [`UART_INST_NUM - 1: 0];
   logic [`UART_INST_NUM - 1: 0] UART_CR_WR;
   logic [`UART_INST_NUM - 1: 0] UART_TX_RATE_DIV_WR;
   logic [`UART_INST_NUM - 1: 0] UART_RX_RATE_DIV_WR;
   logic [`UART_INST_NUM - 1: 0] UART_TX_DATA_WR;

   logic UART_RX[`UART_INST_NUM];
   logic UART_TX[`UART_INST_NUM];
   
   genvar uart_gv1;
   generate
        for (uart_gv1 = 0; uart_gv1 < `UART_INST_NUM; uart_gv1++) begin
            assign UART_SR[uart_gv1][31:5] = 27'b0;
            assign UART_RX_DATA[uart_gv1][31:8] = 24'b0;
        end
   endgenerate
   
   genvar uart_gv2;
   generate
       for (uart_gv2 = 0; uart_gv2 < `UART_INST_NUM; uart_gv2++) begin
           UART UART_b (
               .clk(clk),
               .wr_cr(UART_CR_WR[uart_gv2]),
               .wr_max_rate_rx(UART_RX_RATE_DIV_WR[uart_gv2]),
               .wr_max_rate_tx(UART_TX_RATE_DIV_WR[uart_gv2]),
               .wr_data(UART_TX_DATA_WR[uart_gv2]),
               .max_rate_rx(UART_RX_RATE_DIV[uart_gv2]),
               .max_rate_tx(UART_TX_RATE_DIV[uart_gv2]),
               .rx(UART_RX[uart_gv2]),
               .rxEn(UART_CR[uart_gv2][2]),
               .out(UART_RX_DATA[uart_gv2][7:0]),
               .rxDone(UART_SR[uart_gv2][3]),
               .rxBusy(UART_SR[uart_gv2][2]),
               .rxErr(UART_SR[uart_gv2][4]),
               .tx(UART_TX[uart_gv2]),
               .txEn(UART_CR[uart_gv2][0]),
               .txStart(UART_CR[uart_gv2][1]),
               .in(UART_TX_DATA[uart_gv2][7:0]),
               .txDone(UART_SR[uart_gv2][1]),
               .txBusy(UART_SR[uart_gv2][0]));
       end
   endgenerate
   
   //Stepper Driver Interface
   logic [31:0] SD_CR [`SD_INST_NUM - 1: 0];
   logic [31:0] SD_START [`SD_INST_NUM - 1: 0];
   logic [31:0] SD_STOP [`SD_INST_NUM - 1: 0];
   logic [31:0] SD_TOT_STEPS [`SD_INST_NUM - 1: 0];
   logic [31:0] SD_JERK [`SD_INST_NUM - 1: 0];
   logic [31:0] SD_JERK_DUR [`SD_INST_NUM - 1: 0];
   logic [31:0] SD_ACCEL_DUR [`SD_INST_NUM - 1: 0];
   logic [31:0] SD_RADDR [`SD_INST_NUM - 1: 0];
   logic [31:0] SD_RDATA [`SD_INST_NUM - 1: 0];
   logic [31:0] SD_SR [`SD_INST_NUM - 1: 0];
   logic [`SD_INST_NUM - 1: 0] SD_CR_WR;
   logic [`SD_INST_NUM - 1: 0] SD_START_WR;
   logic [`SD_INST_NUM - 1: 0] SD_STOP_WR;
   logic [`SD_INST_NUM - 1: 0] SD_TOT_STEPS_WR;
   logic [`SD_INST_NUM - 1: 0] SD_JERK_WR;
   logic [`SD_INST_NUM - 1: 0] SD_JERK_DUR_WR;
   logic [`SD_INST_NUM - 1: 0] SD_ACCEL_DUR_WR;
   logic [`SD_INST_NUM - 1: 0] SD_RADDR_WR;

   logic SD_A_P[`SD_INST_NUM];
   logic SD_A_M[`SD_INST_NUM];
   logic SD_B_P[`SD_INST_NUM];
   logic SD_B_M[`SD_INST_NUM];
   
   logic [`SD_INST_NUM - 1: 0] drv_bypass;
   logic [`SD_INST_NUM - 1: 0] drv_dir;
   logic [`SD_INST_NUM - 1: 0] drv_step;
   
   genvar sd_gv1;
   generate
        for (sd_gv1 = 0; sd_gv1 < `SD_INST_NUM; sd_gv1++) begin
            assign SD_SR[sd_gv1][31:2] = 30'b0;
        end
   endgenerate
   
   genvar sd_gv2;
   generate
       for (sd_gv2 = 0; sd_gv2 < `SD_INST_NUM; sd_gv2++) begin
           S_Curve_Gen SCG_b (
                .clk_i(clk),
                .reset_n(reset_n),
                .wr_cr(SD_CR_WR[sd_gv2]),
                .wr_start(SD_START_WR[sd_gv2]),
                .wr_stop(SD_STOP_WR[sd_gv2]),
                .wr_total_steps(SD_TOT_STEPS_WR[sd_gv2]),
                .wr_jerk(SD_JERK_WR[sd_gv2]),
                .wr_c_jerk_dur(SD_JERK_DUR_WR[sd_gv2]),
                .wr_c_accel_dur(SD_ACCEL_DUR_WR[sd_gv2]),
                .wr_raddr(SD_RADDR_WR[sd_gv2]),
                .clk_div_i(SD_CR[sd_gv2][31:16]),
                .start_i(SD_START[sd_gv2][0]),
                .done(SD_SR[sd_gv2][0]),
                .busy(SD_SR[sd_gv2][1]),
                .estop_i(SD_STOP[sd_gv2][0]),
                .swstop_i(SD_STOP[sd_gv2][1]),
                .zero(0),
                .dir_i(SD_CR[sd_gv2][0]),
                .bypass_i(SD_CR[sd_gv2][1]),
                .total_steps_i(SD_TOT_STEPS[sd_gv2]),
                .c_jerk_dur_i(SD_JERK_DUR[sd_gv2]),
                .c_accel_dur_i(SD_ACCEL_DUR[sd_gv2]),
                .jerk_i(SD_JERK[sd_gv2]),
                .raddr_i(SD_RADDR[sd_gv2][3:0]),
                .rdata(SD_RDATA[sd_gv2]),
                .drv_bypass(drv_bypass[sd_gv2]),
                .drv_dir(drv_dir[sd_gv2]),
                .drv_step(drv_step[sd_gv2]));
                
            Stepper_Driver SD_P (
                .step(drv_step[sd_gv2]), 
                .dir(drv_dir[sd_gv2]),
                .bypass(drv_bypass[sd_gv2]),
                .A_P(SD_A_P[sd_gv2]),
                .A_M(SD_A_M[sd_gv2]),
                .B_P(SD_B_P[sd_gv2]),
                .B_M(SD_B_M[sd_gv2]));
        end
    endgenerate
    
    // Quadrature Decoder Interface
    logic [31:0] QEM_CR [`QEM_INST_NUM - 1:0];
    logic [31:0] QEM_I_CNT [`QEM_INST_NUM - 1:0];
    logic [31:0] QEM_THRESH [`QEM_INST_NUM - 1:0];
    logic [31:0] QEM_SR [`QEM_INST_NUM - 1:0];
    logic [31:0] QEM_O_CNT_LATCH [`QEM_INST_NUM - 1:0];
    logic [31:0] QEM_O_CNT [`QEM_INST_NUM - 1:0];
    logic [`QEM_INST_NUM - 1:0] QEM_CR_WR;
    logic [`QEM_INST_NUM - 1:0] QEM_I_CNT_WR;
    logic [`QEM_INST_NUM - 1:0] QEM_THRESH_WR;

    logic ENC_IDX[`QEM_INST_NUM];
    logic ENC_A[`QEM_INST_NUM];
    logic ENC_B[`QEM_INST_NUM];
   
    genvar qem_gv1;
    generate
        for (qem_gv1 = 0; qem_gv1 < `QEM_INST_NUM; qem_gv1++) begin
            assign QEM_SR[qem_gv1][31:3] = 29'b0;
        end
    endgenerate
   
    genvar qem_gv2;
    generate
       for (qem_gv2 = 0; qem_gv2 < `QEM_INST_NUM; qem_gv2++) begin
            Quad_Enc_Man QEM_b(
                .clk_i(clk),
                .reset_n(reset_n),
                .index_strobe(ENC_IDX[qem_gv2]),
                .quadA(ENC_A[qem_gv2]),
                .quadB(ENC_B[qem_gv2]),
                .thresh_wr(QEM_THRESH_WR[qem_gv2]),
                .count_wr(QEM_I_CNT_WR[qem_gv2]),
                .cr_wr(QEM_CR_WR[qem_gv2]),
                .count_i(QEM_I_CNT[qem_gv2]),
                .count_thresh(QEM_THRESH[qem_gv2]),
                .calib_mode(QEM_CR[qem_gv2][0]),
                .calib_motor_stopped(QEM_CR[qem_gv2][1]),
                .calib_stop_motor(QEM_SR[qem_gv2][0]),
                .calib_finished(QEM_SR[qem_gv2][1]),
                .thresh_reached(QEM_SR[qem_gv2][2]),
                .latched_count(QEM_O_CNT_LATCH[qem_gv2]),
                .count(QEM_O_CNT[qem_gv2]));
        end
    endgenerate

   
   //Pin Mux
    logic [1:0] GPIO_MOD [`NUM_PINS - 1:0];
    logic [1:0] GPIO_SEL [`NUM_PINS - 1:0];
    logic [`NUM_PINS - 1:0] GPIO_IRQEN;
    logic [`NUM_PINS - 1:0] GPIO_IRQPOL;
    logic [`NUM_PINS - 1:0] GPIO_IRQRES;
    logic [3:0] GPIO_MUX_IN [`NUM_PINS - 1:0];
    logic [3:0] GPIO_MUX_OUT [`NUM_PINS - 1:0];
    logic [`NUM_PINS - 1:0] GPIO_IN;
    logic [`NUM_PINS - 1:0] GPIO_OUT;
    logic [`NUM_PINS - 1:0] GPIO_INTR;

    logic [`NUM_PINS - 1:0] io_oeb;
    assign io_oeb_no = ~io_oeb;
    
    Pin_Mux pin_mux  (
        .CLK(clk),
        .MOD_1(GPIO_MOD[0]),
        .SEL_1(GPIO_SEL[0]),
        .MOD_2(GPIO_MOD[1]),
        .SEL_2(GPIO_SEL[1]),
        .MOD_3(GPIO_MOD[2]),
        .SEL_3(GPIO_SEL[2]),
        .MOD_4(GPIO_MOD[3]),
        .SEL_4(GPIO_SEL[3]),
        .MOD_5(GPIO_MOD[4]),
        .SEL_5(GPIO_SEL[4]),
        .MOD_6(GPIO_MOD[5]),
        .SEL_6(GPIO_SEL[5]),
        .MOD_7(GPIO_MOD[6]),
        .SEL_7(GPIO_SEL[6]),
        .MOD_8(GPIO_MOD[7]),
        .SEL_8(GPIO_SEL[7]),
        .MOD_9(GPIO_MOD[8]),
        .SEL_9(GPIO_SEL[8]),
        .MOD_10(GPIO_MOD[9]),
        .SEL_10(GPIO_SEL[9]),
        .MOD_11(GPIO_MOD[10]),
        .SEL_11(GPIO_SEL[10]),
        .MOD_12(GPIO_MOD[11]),
        .SEL_12(GPIO_SEL[11]),
        .MOD_13(GPIO_MOD[12]),
        .SEL_13(GPIO_SEL[12]),
        .MOD_14(GPIO_MOD[13]),
        .SEL_14(GPIO_SEL[13]),
        .MOD_15(GPIO_MOD[14]),
        .SEL_15(GPIO_SEL[14]),
        .MOD_16(GPIO_MOD[15]),
        .SEL_16(GPIO_SEL[15]),
        .MOD_17(GPIO_MOD[16]),
        .SEL_17(GPIO_SEL[16]),
        .MOD_18(GPIO_MOD[17]),
        .SEL_18(GPIO_SEL[17]),
        .MOD_19(GPIO_MOD[18]),
        .SEL_19(GPIO_SEL[18]),
        .MOD_20(GPIO_MOD[19]),
        .SEL_20(GPIO_SEL[19]),
        .MOD_21(GPIO_MOD[20]),
        .SEL_21(GPIO_SEL[20]),
        .MOD_22(GPIO_MOD[21]),
        .SEL_22(GPIO_SEL[21]),
        .MOD_23(GPIO_MOD[22]),
        .SEL_23(GPIO_SEL[22]),
        .MOD_24(GPIO_MOD[23]),
        .SEL_24(GPIO_SEL[23]),
        .IRQEN(GPIO_IRQEN),
        .IRQPOL(GPIO_IRQPOL),
        .IRQRES(GPIO_IRQRES),
        .MUX_IN_1(GPIO_MUX_IN[0]),
        .MUX_OUT_1(GPIO_MUX_OUT[0]),
        .MUX_IN_2(GPIO_MUX_IN[1]),
        .MUX_OUT_2(GPIO_MUX_OUT[1]),
        .MUX_IN_3(GPIO_MUX_IN[2]),
        .MUX_OUT_3(GPIO_MUX_OUT[2]),
        .MUX_IN_4(GPIO_MUX_IN[3]),
        .MUX_OUT_4(GPIO_MUX_OUT[3]),
        .MUX_IN_5(GPIO_MUX_IN[4]),
        .MUX_OUT_5(GPIO_MUX_OUT[4]),
        .MUX_IN_6(GPIO_MUX_IN[5]),
        .MUX_OUT_6(GPIO_MUX_OUT[5]),
        .MUX_IN_7(GPIO_MUX_IN[6]),
        .MUX_OUT_7(GPIO_MUX_OUT[6]),
        .MUX_IN_8(GPIO_MUX_IN[7]),
        .MUX_OUT_8(GPIO_MUX_OUT[7]),
        .MUX_IN_9(GPIO_MUX_IN[8]),
        .MUX_OUT_9(GPIO_MUX_OUT[8]),
        .MUX_IN_10(GPIO_MUX_IN[9]),
        .MUX_OUT_10(GPIO_MUX_OUT[9]),
        .MUX_IN_11(GPIO_MUX_IN[10]),
        .MUX_OUT_11(GPIO_MUX_OUT[10]),
        .MUX_IN_12(GPIO_MUX_IN[11]),
        .MUX_OUT_12(GPIO_MUX_OUT[11]),
        .MUX_IN_13(GPIO_MUX_IN[12]),
        .MUX_OUT_13(GPIO_MUX_OUT[12]),
        .MUX_IN_14(GPIO_MUX_IN[13]),
        .MUX_OUT_14(GPIO_MUX_OUT[13]),
        .MUX_IN_15(GPIO_MUX_IN[14]),
        .MUX_OUT_15(GPIO_MUX_OUT[14]),
        .MUX_IN_16(GPIO_MUX_IN[15]),
        .MUX_OUT_16(GPIO_MUX_OUT[15]),
        .MUX_IN_17(GPIO_MUX_IN[16]),
        .MUX_OUT_17(GPIO_MUX_OUT[16]),
        .MUX_IN_18(GPIO_MUX_IN[17]),
        .MUX_OUT_18(GPIO_MUX_OUT[17]),
        .MUX_IN_19(GPIO_MUX_IN[18]),
        .MUX_OUT_19(GPIO_MUX_OUT[18]),
        .MUX_IN_20(GPIO_MUX_IN[19]),
        .MUX_OUT_20(GPIO_MUX_OUT[19]),
        .MUX_IN_21(GPIO_MUX_IN[20]),
        .MUX_OUT_21(GPIO_MUX_OUT[20]),
        .MUX_IN_22(GPIO_MUX_IN[21]),
        .MUX_OUT_22(GPIO_MUX_OUT[21]),
        .MUX_IN_23(GPIO_MUX_IN[22]),
        .MUX_OUT_23(GPIO_MUX_OUT[22]),
        .MUX_IN_24(GPIO_MUX_IN[23]),
        .MUX_OUT_24(GPIO_MUX_OUT[23]),
        .INTR(GPIO_INTR),
        .IN(io_in),
        .OUT(io_out),
        .OEB(io_oeb)
    );
    
    //Pin Mux Output mappings
    /////////////////////////
    
    always_comb begin
        //SEL 0
        for (integer j = 0; j < `NUM_PINS; j++) begin
            GPIO_MUX_OUT[j][0] = GPIO_OUT[j];
        end
        
        //SEL 1
        GPIO_MUX_OUT[0][1] = SPI_CLK[0];
        GPIO_MUX_OUT[1][1] = SPI_MOSI[0];
        GPIO_MUX_OUT[2][1] = SPI_CS[0][0];
        GPIO_MUX_OUT[3][1] = SPI_CS[0][1];
        GPIO_MUX_OUT[4][1] = SPI_CS[0][2];
        GPIO_MUX_OUT[5][1] = SPI_CS[0][3];
        GPIO_MUX_OUT[6][1] = PWM_OUT[0];
        GPIO_MUX_OUT[7][1] = PWM_OUT[1];
        GPIO_MUX_OUT[8][1] = SPI_CLK[1];
        GPIO_MUX_OUT[9][1] = SPI_MOSI[1];
        GPIO_MUX_OUT[10][1] = SPI_CS[1][0];
        GPIO_MUX_OUT[11][1] = SPI_CS[1][1];
        GPIO_MUX_OUT[12][1] = SPI_CS[1][2];
        GPIO_MUX_OUT[13][1] = SPI_CS[1][3];
        GPIO_MUX_OUT[14][1] = PWM_OUT[2];
        GPIO_MUX_OUT[15][1] = PWM_OUT[3];
        GPIO_MUX_OUT[16][1] = UART_TX[2];
        GPIO_MUX_OUT[17][1] = PWM_OUT[0];
        GPIO_MUX_OUT[18][1] = I2C_SCL[0];
        GPIO_MUX_OUT[19][1] = I2C_SDA_O[0];
        GPIO_MUX_OUT[20][1] = UART_TX[3];
        GPIO_MUX_OUT[21][1] = PWM_OUT[2];
        GPIO_MUX_OUT[22][1] = I2C_SCL[1];
        GPIO_MUX_OUT[23][1] = I2C_SDA_O[1];
        
        //SEL 2
        GPIO_MUX_OUT[0][2] = I2C_SCL[0];
        GPIO_MUX_OUT[1][2] = I2C_SDA_O[0];
        GPIO_MUX_OUT[2][2] = I2C_SCL[1];
        GPIO_MUX_OUT[3][2] = I2C_SDA_O[1];
        GPIO_MUX_OUT[4][2] = UART_TX[0];
        GPIO_MUX_OUT[5][2] = PWM_OUT[2];
        GPIO_MUX_OUT[6][2] = UART_TX[1];
        GPIO_MUX_OUT[7][2] = 1'b0;
        GPIO_MUX_OUT[8][2] = I2C_SCL[0];
        GPIO_MUX_OUT[9][2] = I2C_SDA_O[0];
        GPIO_MUX_OUT[10][2] = I2C_SCL[1];
        GPIO_MUX_OUT[11][2] = I2C_SDA_O[1];
        GPIO_MUX_OUT[12][2] = UART_TX[2];
        GPIO_MUX_OUT[13][2] = PWM_OUT[0];
        GPIO_MUX_OUT[14][2] = UART_TX[3];
        GPIO_MUX_OUT[15][2] = 1'b0;
        GPIO_MUX_OUT[16][2] = I2C_SCL[0];
        GPIO_MUX_OUT[17][2] = I2C_SDA_O[0];
        GPIO_MUX_OUT[18][2] = UART_TX[0];
        GPIO_MUX_OUT[19][2] = PWM_OUT[1];
        GPIO_MUX_OUT[20][2] = I2C_SCL[1];
        GPIO_MUX_OUT[21][2] = I2C_SDA_O[1];
        GPIO_MUX_OUT[22][2] = UART_TX[1];
        GPIO_MUX_OUT[23][2] = PWM_OUT[3];
        
        //SEL 3
        GPIO_MUX_OUT[0][3] = SD_A_P[0];
        GPIO_MUX_OUT[1][3] = SD_B_P[0];
        GPIO_MUX_OUT[2][3] = SD_A_M[0];
        GPIO_MUX_OUT[3][3] = SD_B_M[0];
        GPIO_MUX_OUT[4][3] = SD_A_P[1];
        GPIO_MUX_OUT[5][3] = SD_B_P[1];
        GPIO_MUX_OUT[6][3] = SD_A_M[1];
        GPIO_MUX_OUT[7][3] = SD_B_M[1];
        GPIO_MUX_OUT[8][3] = SD_A_P[1];
        GPIO_MUX_OUT[9][3] = SD_B_P[1];
        GPIO_MUX_OUT[10][3] = SD_A_M[1];
        GPIO_MUX_OUT[11][3] = SD_B_M[1];
        GPIO_MUX_OUT[12][3] = SD_A_P[2];
        GPIO_MUX_OUT[13][3] = SD_B_P[2];
        GPIO_MUX_OUT[14][3] = SD_A_M[2];
        GPIO_MUX_OUT[15][3] = SD_B_M[2];
        GPIO_MUX_OUT[16][3] = SD_A_P[2];
        GPIO_MUX_OUT[17][3] = SD_B_P[2];
        GPIO_MUX_OUT[18][3] = SD_A_M[2];
        GPIO_MUX_OUT[19][3] = SD_B_M[2];
        GPIO_MUX_OUT[20][3] = SD_A_P[3];
        GPIO_MUX_OUT[21][3] = SD_B_P[3];
        GPIO_MUX_OUT[22][3] = SD_A_M[3];
        GPIO_MUX_OUT[23][3] = SD_B_M[3];
    end
    
    
    //Pin Mux Input mappings
    /////////////////////////
    
    always_comb begin
        //SEL 0
        for (integer j = 0; j < `NUM_PINS; j++) begin
            GPIO_IN[j] = GPIO_MUX_IN[j][0];
        end
        
        //SEL 1-3
        SPI_MISO[0] = GPIO_MUX_IN[3][1] |
                      GPIO_MUX_IN[4][1] |
                      GPIO_MUX_IN[5][1] |
                      GPIO_MUX_IN[6][1];
        SPI_MISO[1] = GPIO_MUX_IN[11][1] |
                      GPIO_MUX_IN[12][1] |
                      GPIO_MUX_IN[13][1] |
                      GPIO_MUX_IN[14][1];
        UART_RX[0]  = GPIO_MUX_IN[5][2] |
                      GPIO_MUX_IN[19][2];
        UART_RX[1]  = GPIO_MUX_IN[7][2] |
                      GPIO_MUX_IN[23][2];
        UART_RX[2]  = GPIO_MUX_IN[17][1] |
                      GPIO_MUX_IN[13][2];
        UART_RX[3]  = GPIO_MUX_IN[21][1] |
                      GPIO_MUX_IN[15][2];
        I2C_SDA_I[0]  = GPIO_MUX_IN[19][1] |
                      GPIO_MUX_IN[1][2] |
                      GPIO_MUX_IN[9][2] |
                      GPIO_MUX_IN[17][2];
        I2C_SDA_I[1]  = GPIO_MUX_IN[23][1] |
                      GPIO_MUX_IN[3][2] |
                      GPIO_MUX_IN[11][2] |
                      GPIO_MUX_IN[21][2];
        ENC_IDX[0]  = GPIO_MUX_IN[1][3] |
                      GPIO_MUX_IN[8][3];
        ENC_A[0]    = GPIO_MUX_IN[2][3];
        ENC_B[0]    = GPIO_MUX_IN[3][3];
        ENC_IDX[1]  = GPIO_MUX_IN[5][3] |
                      GPIO_MUX_IN[9][3];
        ENC_A[1]    = GPIO_MUX_IN[6][3] |
                      GPIO_MUX_IN[10][3];
        ENC_B[1]    = GPIO_MUX_IN[7][3] |
                      GPIO_MUX_IN[11][3];
        ENC_IDX[2]  = GPIO_MUX_IN[13][3] |
                      GPIO_MUX_IN[17][3];
        ENC_A[2]    = GPIO_MUX_IN[14][3] |
                      GPIO_MUX_IN[18][3];
        ENC_B[2]    = GPIO_MUX_IN[15][3] |
                      GPIO_MUX_IN[19][3];
        ENC_IDX[3]  = GPIO_MUX_IN[16][3] |
                      GPIO_MUX_IN[21][3];
        ENC_A[3]    = GPIO_MUX_IN[22][3];
        ENC_B[3]    = GPIO_MUX_IN[23][3];
    end

    assign timer_intr = TIM_INT[0];

    PeriphControlRegFile #(.STARTING_ADDR (32'h10000000) )
        P_REG_FILE (
            .CLK(clk),
            .RST_N(reset_n),
            .ADDR(peripheral_addr),
            .DIN(peripheral_wdata),
            .BE(peripheral_be),
            .WRITE(peripheral_we),
            .DOUT(peripheral_rdata),
            .REQ(peripheral_req),
            .GNT(peripheral_gnt),
            .RVALID(peripheral_rvalid),
            .MEM_ACCESS_ERR(mem_access_err),
            .MEM_ERR_INT(mem_err_int),
            .ME_I_EN(me_i_en),
            .INTERRUPTS(p_interrupts),
            .P_I_EN(p_i_enable),
            .SPI_TX_DATA_1(SPI_TX_DATA[0]),    
            .SPI_TX_START_1(SPI_TX_START[0]),
            .SPI_CR_1(SPI_CR[0]),
            .SPI_SR_1(SPI_SR[0]),
            .SPI_RX_DATA_1(SPI_RX_DATA[1]),
            .SPI_TX_DATA_2(SPI_TX_DATA[1]),
            .SPI_TX_START_2(SPI_TX_START[1]),
            .SPI_CR_2(SPI_CR[1]),
            .SPI_SR_2(SPI_SR[1]),
            .SPI_RX_DATA_2(SPI_RX_DATA[1]),
            .SPI_CR_WR(SPI_CR_WR),
            .SPI_TX_DATA_WR(SPI_TX_DATA_WR),
            .I2C_CR_1(I2C_CR[0]),
            .I2C_MOSI_DATA_1(I2C_MOSI_DATA[0]),
            .I2C_REG_ADDR_1(I2C_REG_ADDR[0]),
            .I2C_DEV_ADDR_1(I2C_DEV_ADDR[0]),
            .I2C_MISO_DATA_1(I2C_MISO_DATA[0]),
            .I2C_SR_1(I2C_SR[0]),
            .I2C_CR_2(I2C_CR[1]),
            .I2C_MOSI_DATA_2(I2C_MOSI_DATA[1]),
            .I2C_REG_ADDR_2(I2C_REG_ADDR[1]),
            .I2C_DEV_ADDR_2(I2C_DEV_ADDR[1]),
            .I2C_MISO_DATA_2(I2C_MISO_DATA[1]),
            .I2C_SR_2(I2C_SR[1]),
            .I2C_CR_WR(I2C_CR_WR),
            .I2C_MOSI_DATA_WR(I2C_MOSI_DATA_WR),
            .I2C_REG_ADDR_WR(I2C_REG_ADDR_WR),
            .I2C_DEV_ADDR_WR(I2C_DEV_ADDR_WR),
            .PWM_PERIOD_DIV_1(PWM_PERIOD_DIV[0]),
            .PWM_MOD_SETPOINT_1(PWM_MOD_SETPOINT[0]),
            .PWM_EN_1(PWM_EN[0]),
            .PWM_SR_1(PWM_SR[0]),
            .PWM_PERIOD_DIV_2(PWM_PERIOD_DIV[1]),
            .PWM_MOD_SETPOINT_2(PWM_MOD_SETPOINT[1]),
            .PWM_EN_2(PWM_EN[1]),
            .PWM_SR_2(PWM_SR[1]),
            .PWM_PERIOD_DIV_3(PWM_PERIOD_DIV[2]),
            .PWM_MOD_SETPOINT_3(PWM_MOD_SETPOINT[2]),
            .PWM_EN_3(PWM_EN[2]),
            .PWM_SR_3(PWM_SR[2]),
            .PWM_PERIOD_DIV_4(PWM_PERIOD_DIV[3]),
            .PWM_MOD_SETPOINT_4(PWM_MOD_SETPOINT[3]),
            .PWM_EN_4(PWM_EN[3]),
            .PWM_SR_4(PWM_SR[3]),
            .PWM_PERIOD_DIV_WR(PWM_PERIOD_DIV_WR),
            .PWM_MOD_SETPOINT_WR(PWM_MOD_SETPOINT_WR),
            .PWM_EN_WR(PWM_EN_WR),
            .TIM_CTRL_1(TIM_CTRL[0]),
            .TIM_THRESH_H_1(TIM_THRESH_H[0]),
            .TIM_THRESH_L_1(TIM_THRESH_L[0]),
            .TIM_OUT_H_1(TIM_OUT_H[0]),
            .TIM_OUT_L_1(TIM_OUT_L[0]),
            .TIM_CTRL_2(TIM_CTRL[1]),
            .TIM_THRESH_H_2(TIM_THRESH_H[1]),
            .TIM_THRESH_L_2(TIM_THRESH_L[1]),
            .TIM_OUT_H_2(TIM_OUT_H[1]),
            .TIM_OUT_L_2(TIM_OUT_L[1]),
            .TIM_CTRL_3(TIM_CTRL[2]),
            .TIM_THRESH_H_3(TIM_THRESH_H[2]),
            .TIM_THRESH_L_3(TIM_THRESH_L[2]),
            .TIM_OUT_H_3(TIM_OUT_H[2]),
            .TIM_OUT_L_3(TIM_OUT_L[2]),
            .TIM_CTRL_4(TIM_CTRL[3]),
            .TIM_THRESH_H_4(TIM_THRESH_H[3]),
            .TIM_THRESH_L_4(TIM_THRESH_L[3]),
            .TIM_OUT_H_4(TIM_OUT_H[3]),
            .TIM_OUT_L_4(TIM_OUT_L[3]),
            .TIM_INT(TIM_INT),
            .TIM_CTRL_WR(TIM_CTRL_WR),
            .TIM_THRESH_H_WR(TIM_THRESH_H_WR),
            .TIM_THRESH_L_WR(TIM_THRESH_L_WR),
            .UART_CR_1(UART_CR[0]),
            .UART_TX_RATE_DIV_1(UART_TX_RATE_DIV[0]),
            .UART_RX_RATE_DIV_1(UART_RX_RATE_DIV[0]),
            .UART_TX_DATA_1(UART_TX_DATA[0]),
            .UART_SR_1(UART_SR[0]),
            .UART_RX_DATA_1(UART_RX_DATA[0]),
            .UART_CR_2(UART_CR[1]),
            .UART_TX_RATE_DIV_2(UART_TX_RATE_DIV[1]),
            .UART_RX_RATE_DIV_2(UART_RX_RATE_DIV[1]),
            .UART_TX_DATA_2(UART_TX_DATA[1]),
            .UART_SR_2(UART_SR[1]),
            .UART_RX_DATA_2(UART_RX_DATA[1]),
            .UART_CR_3(UART_CR[2]),
            .UART_TX_RATE_DIV_3(UART_TX_RATE_DIV[2]),
            .UART_RX_RATE_DIV_3(UART_RX_RATE_DIV[2]),
            .UART_TX_DATA_3(UART_TX_DATA[2]),
            .UART_SR_3(UART_SR[2]),
            .UART_RX_DATA_3(UART_RX_DATA[2]),
            .UART_CR_4(UART_CR[3]),
            .UART_TX_RATE_DIV_4(UART_TX_RATE_DIV[3]),
            .UART_RX_RATE_DIV_4(UART_RX_RATE_DIV[3]),
            .UART_TX_DATA_4(UART_TX_DATA[3]),
            .UART_SR_4(UART_SR[3]),
            .UART_RX_DATA_4(UART_RX_DATA[3]),
            .UART_CR_WR(UART_CR_WR),
            .UART_TX_RATE_DIV_WR(UART_TX_RATE_DIV_WR),
            .UART_RX_RATE_DIV_WR(UART_RX_RATE_DIV_WR),
            .UART_TX_DATA_WR(UART_TX_DATA_WR),
            .SD_CR_1(SD_CR[0]),
            .SD_START_1(SD_START[0]),
            .SD_STOP_1(SD_STOP[0]),
            .SD_TOT_STEPS_1(SD_TOT_STEPS[0]),
            .SD_JERK_1(SD_JERK[0]),
            .SD_JERK_DUR_1(SD_JERK_DUR[0]),
            .SD_ACCEL_DUR_1(SD_ACCEL_DUR[0]),
            .SD_RADDR_1(SD_RADDR[0]),
            .SD_RDATA_1(SD_RDATA[0]),
            .SD_SR_1(SD_SR[0]),
            .SD_CR_2(SD_CR[1]),
            .SD_START_2(SD_START[1]),
            .SD_STOP_2(SD_STOP[1]),
            .SD_TOT_STEPS_2(SD_TOT_STEPS[1]),
            .SD_JERK_2(SD_JERK[1]),
            .SD_JERK_DUR_2(SD_JERK_DUR[1]),
            .SD_ACCEL_DUR_2(SD_ACCEL_DUR[1]),
            .SD_RADDR_2(SD_RADDR[1]),
            .SD_RDATA_2(SD_RDATA[1]),
            .SD_SR_2(SD_SR[1]),
            .SD_CR_3(SD_CR[2]),
            .SD_START_3(SD_START[2]),
            .SD_STOP_3(SD_STOP[2]),
            .SD_TOT_STEPS_3(SD_TOT_STEPS[2]),
            .SD_JERK_3(SD_JERK[2]),
            .SD_JERK_DUR_3(SD_JERK_DUR[2]),
            .SD_ACCEL_DUR_3(SD_ACCEL_DUR[2]),
            .SD_RADDR_3(SD_RADDR[2]),
            .SD_RDATA_3(SD_RDATA[2]),
            .SD_SR_3(SD_SR[2]),
            .SD_CR_4(SD_CR[3]),
            .SD_START_4(SD_START[3]),
            .SD_STOP_4(SD_STOP[3]),
            .SD_TOT_STEPS_4(SD_TOT_STEPS[3]),
            .SD_JERK_4(SD_JERK[3]),
            .SD_JERK_DUR_4(SD_JERK_DUR[3]),
            .SD_ACCEL_DUR_4(SD_ACCEL_DUR[3]),
            .SD_RADDR_4(SD_RADDR[3]),
            .SD_RDATA_4(SD_RDATA[3]),
            .SD_SR_4(SD_SR[3]),
            .SD_CR_WR(SD_CR_WR),
            .SD_START_WR(SD_START_WR),
            .SD_STOP_WR(SD_STOP_WR),
            .SD_TOT_STEPS_WR(SD_TOT_STEPS_WR),
            .SD_JERK_WR(SD_JERK_WR),
            .SD_JERK_DUR_WR(SD_JERK_DUR_WR),
            .SD_ACCEL_DUR_WR(SD_ACCEL_DUR_WR),
            .SD_RADDR_WR(SD_RADDR_WR),
            .QEM_CR_1(QEM_CR[0]),
            .QEM_I_CNT_1(QEM_I_CNT[0]),
            .QEM_THRESH_1(QEM_THRESH[0]),
            .QEM_SR_1(QEM_SR[0]),
            .QEM_O_CNT_LATCH_1(QEM_O_CNT_LATCH[0]),
            .QEM_O_CNT_1(QEM_O_CNT[0]),
            .QEM_CR_2(QEM_CR[1]),
            .QEM_I_CNT_2(QEM_I_CNT[1]),
            .QEM_THRESH_2(QEM_THRESH[1]),
            .QEM_SR_2(QEM_SR[1]),
            .QEM_O_CNT_LATCH_2(QEM_O_CNT_LATCH[1]),
            .QEM_O_CNT_2(QEM_O_CNT[1]),
            .QEM_CR_3(QEM_CR[2]),
            .QEM_I_CNT_3(QEM_I_CNT[2]),
            .QEM_THRESH_3(QEM_THRESH[2]),
            .QEM_SR_3(QEM_SR[2]),
            .QEM_O_CNT_LATCH_3(QEM_O_CNT_LATCH[2]),
            .QEM_O_CNT_3(QEM_O_CNT[2]),
            .QEM_CR_4(QEM_CR[3]),
            .QEM_I_CNT_4(QEM_I_CNT[3]),
            .QEM_THRESH_4(QEM_THRESH[3]),
            .QEM_SR_4(QEM_SR[3]),
            .QEM_O_CNT_LATCH_4(QEM_O_CNT_LATCH[3]),
            .QEM_O_CNT_4(QEM_O_CNT[3]),
            .QEM_CR_WR(QEM_CR_WR),
            .QEM_I_CNT_WR(QEM_I_CNT_WR),
            .QEM_THRESH_WR(QEM_THRESH_WR),
            .GPIO_MOD_1(GPIO_MOD[0]),
            .GPIO_SEL_1(GPIO_SEL[0]),
            .GPIO_MOD_2(GPIO_MOD[1]),
            .GPIO_SEL_2(GPIO_SEL[1]),
            .GPIO_MOD_3(GPIO_MOD[2]),
            .GPIO_SEL_3(GPIO_SEL[2]),
            .GPIO_MOD_4(GPIO_MOD[3]),
            .GPIO_SEL_4(GPIO_SEL[3]),
            .GPIO_MOD_5(GPIO_MOD[4]),
            .GPIO_SEL_5(GPIO_SEL[4]),
            .GPIO_MOD_6(GPIO_MOD[5]),
            .GPIO_SEL_6(GPIO_SEL[5]),
            .GPIO_MOD_7(GPIO_MOD[6]),
            .GPIO_SEL_7(GPIO_SEL[6]),
            .GPIO_MOD_8(GPIO_MOD[7]),
            .GPIO_SEL_8(GPIO_SEL[7]),
            .GPIO_MOD_9(GPIO_MOD[8]),
            .GPIO_SEL_9(GPIO_SEL[8]),
            .GPIO_MOD_10(GPIO_MOD[9]),
            .GPIO_SEL_10(GPIO_SEL[9]),
            .GPIO_MOD_11(GPIO_MOD[10]),
            .GPIO_SEL_11(GPIO_SEL[10]),
            .GPIO_MOD_12(GPIO_MOD[11]),
            .GPIO_SEL_12(GPIO_SEL[11]),
            .GPIO_MOD_13(GPIO_MOD[12]),
            .GPIO_SEL_13(GPIO_SEL[12]),
            .GPIO_MOD_14(GPIO_MOD[13]),
            .GPIO_SEL_14(GPIO_SEL[13]),
            .GPIO_MOD_15(GPIO_MOD[14]),
            .GPIO_SEL_15(GPIO_SEL[14]),
            .GPIO_MOD_16(GPIO_MOD[15]),
            .GPIO_SEL_16(GPIO_SEL[15]),
            .GPIO_MOD_17(GPIO_MOD[16]),
            .GPIO_SEL_17(GPIO_SEL[16]),
            .GPIO_MOD_18(GPIO_MOD[17]),
            .GPIO_SEL_18(GPIO_SEL[17]),
            .GPIO_MOD_19(GPIO_MOD[18]),
            .GPIO_SEL_19(GPIO_SEL[18]),
            .GPIO_MOD_20(GPIO_MOD[19]),
            .GPIO_SEL_20(GPIO_SEL[19]),
            .GPIO_MOD_21(GPIO_MOD[20]),
            .GPIO_SEL_21(GPIO_SEL[20]),
            .GPIO_MOD_22(GPIO_MOD[21]),
            .GPIO_SEL_22(GPIO_SEL[21]),
            .GPIO_MOD_23(GPIO_MOD[22]),
            .GPIO_SEL_23(GPIO_SEL[22]),
            .GPIO_MOD_24(GPIO_MOD[23]),
            .GPIO_SEL_24(GPIO_SEL[23]),
            .GPIO_IRQEN(GPIO_IRQEN),
            .GPIO_IRQPOL(GPIO_IRQPOL),
            .GPIO_IRQRES(GPIO_IRQRES),
            .GPIO_IN(GPIO_IN),
            .GPIO_OUT(GPIO_OUT),
            .GPIO_INTR(GPIO_INTR));

endmodule
