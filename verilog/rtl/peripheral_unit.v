module peripheral_unit (
	clk,
	reset_n,
	peripheral_req,
	peripheral_gnt,
	peripheral_we,
	peripheral_rvalid,
	peripheral_addr,
	peripheral_wdata,
	peripheral_rdata,
	peripheral_be,
	timer_intr,
	mem_access_err,
	mem_err_int,
	me_i_en,
	p_interrupts,
	p_i_enable,
	io_in,
	io_out,
	io_oeb_no
);
	input clk;
	input reset_n;
	input peripheral_req;
	output wire peripheral_gnt;
	input peripheral_we;
	output wire peripheral_rvalid;
	input [31:0] peripheral_addr;
	input [31:0] peripheral_wdata;
	output wire [31:0] peripheral_rdata;
	input [3:0] peripheral_be;
	output wire timer_intr;
	input mem_access_err;
	output wire mem_err_int;
	output wire me_i_en;
	output wire [53:0] p_interrupts;
	output wire [53:0] p_i_enable;
	input [23:0] io_in;
	output wire [23:0] io_out;
	output wire [23:0] io_oeb_no;
	wire [31:0] SPI_TX_DATA [1:0];
	wire [31:0] SPI_TX_START [1:0];
	wire [31:0] SPI_CR [1:0];
	wire [31:0] SPI_SR [1:0];
	wire [31:0] SPI_RX_DATA [1:0];
	wire [1:0] SPI_TX_DATA_WR;
	wire [1:0] SPI_CR_WR;
	reg SPI_MISO [0:1];
	wire SPI_CLK [0:1];
	wire [3:0] SPI_CS [0:1];
	wire SPI_MOSI [0:1];
	genvar i;
	generate
		for (i = 0; i < 2; i = i + 1) begin : genblk1
			assign SPI_SR[i][31:2] = 30'b000000000000000000000000000000;
			assign SPI_RX_DATA[i][31:16] = 16'b0000000000000000;
		end
		for (i = 0; i < 2; i = i + 1) begin : genblk2
			SPI_Master_With_Multiple_CS SPI_b(
				.i_Rst_L(reset_n),
				.i_Clk(clk),
				.i_wr_cr(SPI_CR_WR[i]),
				.i_wr_data(SPI_TX_DATA_WR[i]),
				.i_SPI_CS_en(SPI_CR[i][3:0]),
				.i_spi_mode(SPI_CR[i][13:12]),
				.i_ticks_per_half_bit(SPI_CR[i][31:16]),
				.i_TX_Count(3'b001),
				.i_TX_data_length(SPI_CR[i][7:4]),
				.i_TX_Data(SPI_TX_DATA[i][15:0]),
				.i_TX_DV(SPI_TX_START[i][0]),
				.o_TX_Ready(SPI_SR[i][0]),
				.i_RX_data_length(SPI_CR[i][11:8]),
				.o_RX_DV(SPI_SR[i][1]),
				.o_RX_Data(SPI_RX_DATA[i][15:0]),
				.o_SPI_Clk(SPI_CLK[i]),
				.i_SPI_MISO(SPI_MISO[i]),
				.o_SPI_MOSI(SPI_MOSI[i]),
				.o_SPI_CS_n(SPI_CS[i])
			);
		end
	endgenerate
	wire [31:0] I2C_CR [1:0];
	wire [31:0] I2C_MOSI_DATA [1:0];
	wire [31:0] I2C_REG_ADDR [1:0];
	wire [31:0] I2C_DEV_ADDR [1:0];
	wire [31:0] I2C_MISO_DATA [1:0];
	wire [31:0] I2C_SR [1:0];
	wire [1:0] I2C_CR_WR;
	wire [1:0] I2C_MOSI_DATA_WR;
	wire [1:0] I2C_REG_ADDR_WR;
	wire [1:0] I2C_DEV_ADDR_WR;
	reg [1:0] I2C_SDA_I;
	wire [1:0] I2C_SDA_O;
	wire [1:0] I2C_SCL;
	localparam I2C_DATA_WIDTH = 8;
	localparam I2C_REG_WIDTH = 8;
	localparam I2C_ADDR_WIDTH = 7;
	generate
		for (i = 0; i < 2; i = i + 1) begin : genblk3
			assign I2C_MISO_DATA[i][31:8] = 24'b000000000000000000000000;
			assign I2C_SR[i][31:1] = 31'b0000000000000000000000000000000;
		end
		for (i = 0; i < 2; i = i + 1) begin : genblk4
			I2C_Master #(
				.DATA_WIDTH(I2C_DATA_WIDTH),
				.REG_WIDTH(I2C_REG_WIDTH),
				.ADDR_WIDTH(I2C_ADDR_WIDTH)
			) I2C_b(
				.i_clk(clk),
				.i_rst_n(reset_n),
				.i_wr_cr(I2C_CR_WR[i]),
				.i_wr_mosi_data(I2C_MOSI_DATA_WR[i]),
				.i_wr_reg_addr(I2C_REG_ADDR_WR[i]),
				.i_wr_dev_addr(I2C_DEV_ADDR_WR[i]),
				.i_enable(I2C_CR[i][1]),
				.i_rw(I2C_CR[i][0]),
				.i_mosi_data(I2C_MOSI_DATA[i][7:0]),
				.i_reg_addr(I2C_REG_ADDR[i][7:0]),
				.i_device_addr(I2C_DEV_ADDR[i][6:0]),
				.i_clk_div(I2C_CR[i][31:16]),
				.o_miso_data(I2C_MISO_DATA[i][7:0]),
				.o_busy(I2C_SR[i][0]),
				.i_sda(I2C_SDA_I[i]),
				.o_sda(I2C_SDA_O[i]),
				.o_scl(I2C_SCL[i])
			);
		end
	endgenerate
	localparam MOD_WIDTH = 8;
	wire [31:0] PWM_PERIOD_DIV [3:0];
	wire [31:0] PWM_MOD_SETPOINT [3:0];
	wire [31:0] PWM_EN [3:0];
	wire [31:0] PWM_START_STROBE [3:0];
	wire [3:0] PWM_PERIOD_DIV_WR;
	wire [3:0] PWM_MOD_SETPOINT_WR;
	wire [3:0] PWM_EN_WR;
	wire PWM_OUT [0:3];
	generate
		for (i = 0; i < 4; i = i + 1) begin : genblk5
			assign PWM_START_STROBE[i][31:1] = 31'b0000000000000000000000000000000;
		end
		for (i = 0; i < 4; i = i + 1) begin : genblk6
			PWM_modulator #(.MOD_WIDTH(MOD_WIDTH)) PWM_b(
				.clk(clk),
				.nrst(reset_n),
				.en(PWM_EN[i][0]),
				.wr_en(PWM_EN_WR[i]),
				.wr_pwm_period_div(PWM_PERIOD_DIV_WR[i]),
				.wr_mod_setpoint(PWM_MOD_SETPOINT_WR[i]),
				.pwm_period_div(PWM_PERIOD_DIV[i][7:0]),
				.mod_setpoint(PWM_MOD_SETPOINT[i][7:0]),
				.pwm_out(PWM_OUT[i]),
				.start_strobe(PWM_START_STROBE[i][0])
			);
		end
	endgenerate
	wire [31:0] TIM_CTRL [3:0];
	wire [31:0] TIM_THRESH_H [3:0];
	wire [31:0] TIM_THRESH_L [3:0];
	wire [31:0] TIM_OUT_H [3:0];
	wire [31:0] TIM_OUT_L [3:0];
	wire [3:0] TIM_INT;
	wire [3:0] TIM_CTRL_WR;
	wire [3:0] TIM_THRESH_H_WR;
	wire [3:0] TIM_THRESH_L_WR;
	generate
		for (i = 0; i < 4; i = i + 1) begin : genblk7
			Timer TIMER_b(
				.CLK(clk),
				.RST_N(reset_n),
				.en(TIM_CTRL[i][0]),
				.wr_en(TIM_CTRL_WR[i]),
				.wr_mtimecmp_in_h(TIM_THRESH_H_WR[i]),
				.wr_mtimecmp_in_l(TIM_THRESH_L_WR[i]),
				.mtimecmp_in_h(TIM_THRESH_H[i]),
				.mtimecmp_in_l(TIM_THRESH_L[i]),
				.mtime_h(TIM_OUT_H[i]),
				.mtime_l(TIM_OUT_L[i]),
				.timer_int(TIM_INT[i])
			);
		end
	endgenerate
	wire [31:0] UART_CR [3:0];
	wire [31:0] UART_TX_RATE_DIV [3:0];
	wire [31:0] UART_RX_RATE_DIV [3:0];
	wire [31:0] UART_TX_DATA [3:0];
	wire [31:0] UART_SR [3:0];
	wire [31:0] UART_RX_DATA [3:0];
	wire [3:0] UART_CR_WR;
	wire [3:0] UART_TX_RATE_DIV_WR;
	wire [3:0] UART_RX_RATE_DIV_WR;
	wire [3:0] UART_TX_DATA_WR;
	reg UART_RX [0:3];
	wire UART_TX [0:3];
	generate
		for (i = 0; i < 4; i = i + 1) begin : genblk8
			assign UART_SR[i][31:5] = 27'b000000000000000000000000000;
			assign UART_RX_DATA[i][31:8] = 24'b000000000000000000000000;
		end
		for (i = 0; i < 4; i = i + 1) begin : genblk9
			UART UART_b(
				.clk(clk),
				.wr_cr(UART_CR_WR[i]),
				.wr_max_rate_rx(UART_RX_RATE_DIV_WR[i]),
				.wr_max_rate_tx(UART_TX_RATE_DIV_WR[i]),
				.wr_data(UART_TX_DATA_WR[i]),
				.max_rate_rx(UART_RX_RATE_DIV[i]),
				.max_rate_tx(UART_TX_RATE_DIV[i]),
				.rx(UART_RX[i]),
				.rxEn(UART_CR[i][2]),
				.out(UART_RX_DATA[i][7:0]),
				.rxDone(UART_SR[i][3]),
				.rxBusy(UART_SR[i][2]),
				.rxErr(UART_SR[i][4]),
				.tx(UART_TX[i]),
				.txEn(UART_CR[i][0]),
				.txStart(UART_CR[i][1]),
				.in(UART_TX_DATA[i][7:0]),
				.txDone(UART_SR[i][1]),
				.txBusy(UART_SR[i][0])
			);
		end
	endgenerate
	wire [31:0] SD_CR [3:0];
	wire [31:0] SD_START [3:0];
	wire [31:0] SD_STOP [3:0];
	wire [31:0] SD_TOT_STEPS [3:0];
	wire [31:0] SD_JERK [3:0];
	wire [31:0] SD_JERK_DUR [3:0];
	wire [31:0] SD_ACCEL_DUR [3:0];
	wire [31:0] SD_RADDR [3:0];
	wire [31:0] SD_RDATA [3:0];
	wire [31:0] SD_SR [3:0];
	wire [3:0] SD_CR_WR;
	wire [3:0] SD_START_WR;
	wire [3:0] SD_STOP_WR;
	wire [3:0] SD_TOT_STEPS_WR;
	wire [3:0] SD_JERK_WR;
	wire [3:0] SD_JERK_DUR_WR;
	wire [3:0] SD_ACCEL_DUR_WR;
	wire [3:0] SD_RADDR_WR;
	wire SD_A_P [0:3];
	wire SD_A_M [0:3];
	wire SD_B_P [0:3];
	wire SD_B_M [0:3];
	wire [3:0] drv_bypass;
	wire [3:0] drv_dir;
	wire [3:0] drv_step;
	generate
		for (i = 0; i < 4; i = i + 1) begin : genblk10
			assign SD_SR[i][31:2] = 30'b000000000000000000000000000000;
		end
		for (i = 0; i < 4; i = i + 1) begin : genblk11
			S_Curve_Gen SCG_b(
				.clk_i(clk),
				.reset_n(reset_n),
				.wr_cr(SD_CR_WR[i]),
				.wr_start(SD_START_WR[i]),
				.wr_stop(SD_STOP_WR[i]),
				.wr_total_steps(SD_TOT_STEPS_WR[i]),
				.wr_jerk(SD_JERK_WR[i]),
				.wr_c_jerk_dur(SD_JERK_DUR_WR[i]),
				.wr_c_accel_dur(SD_ACCEL_DUR_WR[i]),
				.wr_raddr(SD_RADDR_WR[i]),
				.clk_div_i(SD_CR[i][31:16]),
				.start_i(SD_START[i][0]),
				.done(SD_SR[i][0]),
				.busy(SD_SR[i][1]),
				.estop_i(SD_STOP[i][0]),
				.swstop_i(SD_STOP[i][1]),
				.zero(0),
				.dir_i(SD_CR[i][0]),
				.bypass_i(SD_CR[i][1]),
				.total_steps_i(SD_TOT_STEPS[i]),
				.c_jerk_dur_i(SD_JERK_DUR[i]),
				.c_accel_dur_i(SD_ACCEL_DUR[i]),
				.jerk_i(SD_JERK[i]),
				.raddr_i(SD_RADDR[i][3:0]),
				.rdata(SD_RDATA[i]),
				.drv_bypass(drv_bypass[i]),
				.drv_dir(drv_dir[i]),
				.drv_step(drv_step[i])
			);
			Stepper_Driver SD_P(
				.step(drv_step[i]),
				.dir(drv_dir[i]),
				.bypass(drv_bypass[i]),
				.A_P(SD_A_P[i]),
				.A_M(SD_A_M[i]),
				.B_P(SD_B_P[i]),
				.B_M(SD_B_M[i])
			);
		end
	endgenerate
	wire [31:0] QEM_CR [3:0];
	wire [31:0] QEM_I_CNT [3:0];
	wire [31:0] QEM_THRESH [3:0];
	wire [31:0] QEM_SR [3:0];
	wire [31:0] QEM_O_CNT_LATCH [3:0];
	wire [31:0] QEM_O_CNT [3:0];
	wire [3:0] QEM_CR_WR;
	wire [3:0] QEM_I_CNT_WR;
	wire [3:0] QEM_THRESH_WR;
	reg ENC_IDX [0:3];
	reg ENC_A [0:3];
	reg ENC_B [0:3];
	generate
		for (i = 0; i < 4; i = i + 1) begin : genblk12
			assign QEM_SR[i][31:3] = 29'b00000000000000000000000000000;
		end
		for (i = 0; i < 4; i = i + 1) begin : genblk13
			Quad_Enc_Man QEM_b(
				.clk_i(clk),
				.reset_n(reset_n),
				.index_strobe(ENC_IDX[i]),
				.quadA(ENC_A[i]),
				.quadB(ENC_B[i]),
				.thresh_wr(QEM_THRESH_WR[i]),
				.count_wr(QEM_I_CNT_WR[i]),
				.cr_wr(QEM_CR_WR[i]),
				.clk_div_i(QEM_CR[i][31:16]),
				.count_i(QEM_I_CNT[i]),
				.count_thresh(QEM_THRESH[i]),
				.calib_mode(QEM_CR[i][0]),
				.calib_motor_stopped(QEM_CR[i][1]),
				.calib_stop_motor(QEM_SR[i][0]),
				.calib_finished(QEM_SR[i][1]),
				.thresh_reached(QEM_SR[i][2]),
				.latched_count(QEM_O_CNT_LATCH[i]),
				.count(QEM_O_CNT[i])
			);
		end
	endgenerate
	wire [1:0] GPIO_MOD [23:0];
	wire [1:0] GPIO_SEL [23:0];
	wire [23:0] GPIO_IRQEN;
	wire [23:0] GPIO_IRQPOL;
	wire [23:0] GPIO_IRQRES;
	wire [3:0] GPIO_MUX_IN [23:0];
	reg [3:0] GPIO_MUX_OUT [23:0];
	reg [23:0] GPIO_IN;
	wire [23:0] GPIO_OUT;
	wire [23:0] GPIO_INTR;
	wire [23:0] io_oeb;
	assign io_oeb_no = ~io_oeb;
	Pin_Mux pin_mux(
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
	always @(*) begin
		begin : sv2v_autoblock_1
			integer i;
			for (i = 0; i < 24; i = i + 1)
				GPIO_MUX_OUT[i][0] = GPIO_OUT[i];
		end
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
		GPIO_MUX_OUT[0][2] = I2C_SCL[0];
		GPIO_MUX_OUT[1][2] = I2C_SDA_O[0];
		GPIO_MUX_OUT[2][2] = I2C_SCL[1];
		GPIO_MUX_OUT[3][2] = I2C_SDA_O[1];
		GPIO_MUX_OUT[4][2] = UART_TX[0];
		GPIO_MUX_OUT[5][2] = PWM_OUT[2];
		GPIO_MUX_OUT[6][2] = UART_TX[1];
		GPIO_MUX_OUT[8][2] = I2C_SCL[0];
		GPIO_MUX_OUT[9][2] = I2C_SDA_O[0];
		GPIO_MUX_OUT[10][2] = I2C_SCL[1];
		GPIO_MUX_OUT[11][2] = I2C_SDA_O[1];
		GPIO_MUX_OUT[12][2] = UART_TX[2];
		GPIO_MUX_OUT[13][2] = PWM_OUT[0];
		GPIO_MUX_OUT[14][2] = UART_TX[3];
		GPIO_MUX_OUT[16][2] = I2C_SCL[0];
		GPIO_MUX_OUT[17][2] = I2C_SDA_O[0];
		GPIO_MUX_OUT[18][2] = UART_TX[0];
		GPIO_MUX_OUT[19][2] = PWM_OUT[1];
		GPIO_MUX_OUT[20][2] = I2C_SCL[1];
		GPIO_MUX_OUT[21][2] = I2C_SDA_O[1];
		GPIO_MUX_OUT[22][2] = UART_TX[1];
		GPIO_MUX_OUT[23][2] = PWM_OUT[3];
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
	always @(*) begin
		begin : sv2v_autoblock_2
			integer i;
			for (i = 0; i < 24; i = i + 1)
				GPIO_IN[i] = GPIO_MUX_IN[i][0];
		end
		SPI_MISO[0] = ((GPIO_MUX_IN[3][1] | GPIO_MUX_IN[4][1]) | GPIO_MUX_IN[5][1]) | GPIO_MUX_IN[6][1];
		SPI_MISO[1] = ((GPIO_MUX_IN[11][1] | GPIO_MUX_IN[12][1]) | GPIO_MUX_IN[13][1]) | GPIO_MUX_IN[14][1];
		UART_RX[0] = GPIO_MUX_IN[5][2] | GPIO_MUX_IN[19][2];
		UART_RX[1] = GPIO_MUX_IN[7][2] | GPIO_MUX_IN[23][2];
		UART_RX[2] = GPIO_MUX_IN[17][1] | GPIO_MUX_IN[13][2];
		UART_RX[3] = GPIO_MUX_IN[21][1] | GPIO_MUX_IN[15][2];
		I2C_SDA_I[0] = ((GPIO_MUX_IN[19][1] | GPIO_MUX_IN[1][2]) | GPIO_MUX_IN[9][2]) | GPIO_MUX_IN[17][2];
		I2C_SDA_I[1] = ((GPIO_MUX_IN[23][1] | GPIO_MUX_IN[3][2]) | GPIO_MUX_IN[11][2]) | GPIO_MUX_IN[21][2];
		ENC_IDX[0] = GPIO_MUX_IN[1][3] | GPIO_MUX_IN[8][3];
		ENC_A[0] = GPIO_MUX_IN[2][3];
		ENC_B[0] = GPIO_MUX_IN[3][3];
		ENC_IDX[1] = GPIO_MUX_IN[5][3] | GPIO_MUX_IN[9][3];
		ENC_A[1] = GPIO_MUX_IN[6][3] | GPIO_MUX_IN[10][3];
		ENC_B[1] = GPIO_MUX_IN[7][3] | GPIO_MUX_IN[11][3];
		ENC_IDX[2] = GPIO_MUX_IN[13][3] | GPIO_MUX_IN[17][3];
		ENC_A[2] = GPIO_MUX_IN[14][3] | GPIO_MUX_IN[18][3];
		ENC_B[2] = GPIO_MUX_IN[15][3] | GPIO_MUX_IN[19][3];
		ENC_IDX[3] = GPIO_MUX_IN[16][3] | GPIO_MUX_IN[21][3];
		ENC_A[3] = GPIO_MUX_IN[22][3];
		ENC_B[3] = GPIO_MUX_IN[23][3];
	end
	assign timer_intr = TIM_INT[0];
	PeriphControlRegFile #(.STARTING_ADDR(32'h10000000)) P_REG_FILE(
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
		.PWM_START_STROBE_1(PWM_START_STROBE[0]),
		.PWM_PERIOD_DIV_2(PWM_PERIOD_DIV[1]),
		.PWM_MOD_SETPOINT_2(PWM_MOD_SETPOINT[1]),
		.PWM_EN_2(PWM_EN[1]),
		.PWM_START_STROBE_2(PWM_START_STROBE[1]),
		.PWM_PERIOD_DIV_3(PWM_PERIOD_DIV[2]),
		.PWM_MOD_SETPOINT_3(PWM_MOD_SETPOINT[2]),
		.PWM_EN_3(PWM_EN[2]),
		.PWM_START_STROBE_3(PWM_START_STROBE[2]),
		.PWM_PERIOD_DIV_4(PWM_PERIOD_DIV[3]),
		.PWM_MOD_SETPOINT_4(PWM_MOD_SETPOINT[3]),
		.PWM_EN_4(PWM_EN[3]),
		.PWM_START_STROBE_4(PWM_START_STROBE[3]),
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
		.GPIO_INTR(GPIO_INTR)
	);
endmodule
