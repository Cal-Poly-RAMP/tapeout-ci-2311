module PeriphControlRegFile (
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
	PWM_START_STROBE_1,
	PWM_PERIOD_DIV_2,
	PWM_MOD_SETPOINT_2,
	PWM_EN_2,
	PWM_START_STROBE_2,
	PWM_PERIOD_DIV_3,
	PWM_MOD_SETPOINT_3,
	PWM_EN_3,
	PWM_START_STROBE_3,
	PWM_PERIOD_DIV_4,
	PWM_MOD_SETPOINT_4,
	PWM_EN_4,
	PWM_START_STROBE_4,
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
	GPIO_INTR
);
	parameter ACTUAL_WIDTH = 10;
	parameter STARTING_ADDR = 34'sd4294967296 - (2 ** ACTUAL_WIDTH);
	input CLK;
	input RST_N;
	input [31:0] ADDR;
	input [31:0] DIN;
	input [3:0] BE;
	input WRITE;
	output reg [31:0] DOUT;
	input REQ;
	output wire GNT;
	output wire RVALID;
	input MEM_ACCESS_ERR;
	output reg MEM_ERR_INT;
	output reg ME_I_EN;
	output reg [53:0] INTERRUPTS;
	output wire [53:0] P_I_EN;
	output reg [31:0] SPI_TX_DATA_1;
	output reg [31:0] SPI_TX_START_1;
	output reg [31:0] SPI_CR_1;
	input wire [31:0] SPI_SR_1;
	input wire [31:0] SPI_RX_DATA_1;
	output reg [31:0] SPI_TX_DATA_2;
	output reg [31:0] SPI_TX_START_2;
	output reg [31:0] SPI_CR_2;
	output wire [1:0] SPI_CR_WR;
	output wire [1:0] SPI_TX_DATA_WR;
	input wire [31:0] SPI_SR_2;
	input wire [31:0] SPI_RX_DATA_2;
	output reg [31:0] I2C_CR_1;
	output reg [31:0] I2C_MOSI_DATA_1;
	output reg [31:0] I2C_REG_ADDR_1;
	output reg [31:0] I2C_DEV_ADDR_1;
	input wire [31:0] I2C_MISO_DATA_1;
	input wire [31:0] I2C_SR_1;
	output reg [31:0] I2C_CR_2;
	output reg [31:0] I2C_MOSI_DATA_2;
	output reg [31:0] I2C_REG_ADDR_2;
	output reg [31:0] I2C_DEV_ADDR_2;
	input wire [31:0] I2C_MISO_DATA_2;
	input wire [31:0] I2C_SR_2;
	output wire [1:0] I2C_CR_WR;
	output wire [1:0] I2C_MOSI_DATA_WR;
	output wire [1:0] I2C_REG_ADDR_WR;
	output wire [1:0] I2C_DEV_ADDR_WR;
	output reg [31:0] PWM_PERIOD_DIV_1;
	output reg [31:0] PWM_MOD_SETPOINT_1;
	output reg [31:0] PWM_EN_1;
	input wire [31:0] PWM_START_STROBE_1;
	output reg [31:0] PWM_PERIOD_DIV_2;
	output reg [31:0] PWM_MOD_SETPOINT_2;
	output reg [31:0] PWM_EN_2;
	input wire [31:0] PWM_START_STROBE_2;
	output reg [31:0] PWM_PERIOD_DIV_3;
	output reg [31:0] PWM_MOD_SETPOINT_3;
	output reg [31:0] PWM_EN_3;
	input wire [31:0] PWM_START_STROBE_3;
	output reg [31:0] PWM_PERIOD_DIV_4;
	output reg [31:0] PWM_MOD_SETPOINT_4;
	output reg [31:0] PWM_EN_4;
	input wire [31:0] PWM_START_STROBE_4;
	output wire [3:0] PWM_PERIOD_DIV_WR;
	output wire [3:0] PWM_MOD_SETPOINT_WR;
	output wire [3:0] PWM_EN_WR;
	output reg [31:0] TIM_CTRL_1;
	output reg [31:0] TIM_THRESH_H_1;
	output reg [31:0] TIM_THRESH_L_1;
	input wire [31:0] TIM_OUT_H_1;
	input wire [31:0] TIM_OUT_L_1;
	output reg [31:0] TIM_CTRL_2;
	output reg [31:0] TIM_THRESH_H_2;
	output reg [31:0] TIM_THRESH_L_2;
	input wire [31:0] TIM_OUT_H_2;
	input wire [31:0] TIM_OUT_L_2;
	output reg [31:0] TIM_CTRL_3;
	output reg [31:0] TIM_THRESH_H_3;
	output reg [31:0] TIM_THRESH_L_3;
	input wire [31:0] TIM_OUT_H_3;
	input wire [31:0] TIM_OUT_L_3;
	output reg [31:0] TIM_CTRL_4;
	output reg [31:0] TIM_THRESH_H_4;
	output reg [31:0] TIM_THRESH_L_4;
	input wire [31:0] TIM_OUT_H_4;
	input wire [31:0] TIM_OUT_L_4;
	input wire [3:0] TIM_INT;
	output wire [3:0] TIM_CTRL_WR;
	output wire [3:0] TIM_THRESH_H_WR;
	output wire [3:0] TIM_THRESH_L_WR;
	output reg [31:0] UART_CR_1;
	output reg [31:0] UART_TX_RATE_DIV_1;
	output reg [31:0] UART_RX_RATE_DIV_1;
	output reg [31:0] UART_TX_DATA_1;
	input wire [31:0] UART_SR_1;
	input wire [31:0] UART_RX_DATA_1;
	output reg [31:0] UART_CR_2;
	output reg [31:0] UART_TX_RATE_DIV_2;
	output reg [31:0] UART_RX_RATE_DIV_2;
	output reg [31:0] UART_TX_DATA_2;
	input wire [31:0] UART_SR_2;
	input wire [31:0] UART_RX_DATA_2;
	output reg [31:0] UART_CR_3;
	output reg [31:0] UART_TX_RATE_DIV_3;
	output reg [31:0] UART_RX_RATE_DIV_3;
	output reg [31:0] UART_TX_DATA_3;
	input wire [31:0] UART_SR_3;
	input wire [31:0] UART_RX_DATA_3;
	output reg [31:0] UART_CR_4;
	output reg [31:0] UART_TX_RATE_DIV_4;
	output reg [31:0] UART_RX_RATE_DIV_4;
	output reg [31:0] UART_TX_DATA_4;
	input wire [31:0] UART_SR_4;
	input wire [31:0] UART_RX_DATA_4;
	output wire [3:0] UART_CR_WR;
	output wire [3:0] UART_TX_RATE_DIV_WR;
	output wire [3:0] UART_RX_RATE_DIV_WR;
	output wire [3:0] UART_TX_DATA_WR;
	output reg [31:0] SD_CR_1;
	output reg [31:0] SD_START_1;
	output reg [31:0] SD_STOP_1;
	output reg [31:0] SD_TOT_STEPS_1;
	output reg [31:0] SD_JERK_1;
	output reg [31:0] SD_JERK_DUR_1;
	output reg [31:0] SD_ACCEL_DUR_1;
	output reg [31:0] SD_RADDR_1;
	input wire [31:0] SD_RDATA_1;
	input wire [31:0] SD_SR_1;
	output reg [31:0] SD_CR_2;
	output reg [31:0] SD_START_2;
	output reg [31:0] SD_STOP_2;
	output reg [31:0] SD_TOT_STEPS_2;
	output reg [31:0] SD_JERK_2;
	output reg [31:0] SD_JERK_DUR_2;
	output reg [31:0] SD_ACCEL_DUR_2;
	output reg [31:0] SD_RADDR_2;
	input wire [31:0] SD_RDATA_2;
	input wire [31:0] SD_SR_2;
	output reg [31:0] SD_CR_3;
	output reg [31:0] SD_START_3;
	output reg [31:0] SD_STOP_3;
	output reg [31:0] SD_TOT_STEPS_3;
	output reg [31:0] SD_JERK_3;
	output reg [31:0] SD_JERK_DUR_3;
	output reg [31:0] SD_ACCEL_DUR_3;
	output reg [31:0] SD_RADDR_3;
	input wire [31:0] SD_RDATA_3;
	input wire [31:0] SD_SR_3;
	output reg [31:0] SD_CR_4;
	output reg [31:0] SD_START_4;
	output reg [31:0] SD_STOP_4;
	output reg [31:0] SD_TOT_STEPS_4;
	output reg [31:0] SD_JERK_4;
	output reg [31:0] SD_JERK_DUR_4;
	output reg [31:0] SD_ACCEL_DUR_4;
	output reg [31:0] SD_RADDR_4;
	input wire [31:0] SD_RDATA_4;
	input wire [31:0] SD_SR_4;
	output wire [3:0] SD_CR_WR;
	output wire [3:0] SD_START_WR;
	output wire [3:0] SD_STOP_WR;
	output wire [3:0] SD_TOT_STEPS_WR;
	output wire [3:0] SD_JERK_WR;
	output wire [3:0] SD_JERK_DUR_WR;
	output wire [3:0] SD_ACCEL_DUR_WR;
	output wire [3:0] SD_RADDR_WR;
	output reg [31:0] QEM_CR_1;
	output reg [31:0] QEM_I_CNT_1;
	output reg [31:0] QEM_THRESH_1;
	input wire [31:0] QEM_SR_1;
	input wire [31:0] QEM_O_CNT_LATCH_1;
	input wire [31:0] QEM_O_CNT_1;
	output reg [31:0] QEM_CR_2;
	output reg [31:0] QEM_I_CNT_2;
	output reg [31:0] QEM_THRESH_2;
	input wire [31:0] QEM_SR_2;
	input wire [31:0] QEM_O_CNT_LATCH_2;
	input wire [31:0] QEM_O_CNT_2;
	output reg [31:0] QEM_CR_3;
	output reg [31:0] QEM_I_CNT_3;
	output reg [31:0] QEM_THRESH_3;
	input wire [31:0] QEM_SR_3;
	input wire [31:0] QEM_O_CNT_LATCH_3;
	input wire [31:0] QEM_O_CNT_3;
	output reg [31:0] QEM_CR_4;
	output reg [31:0] QEM_I_CNT_4;
	output reg [31:0] QEM_THRESH_4;
	input wire [31:0] QEM_SR_4;
	input wire [31:0] QEM_O_CNT_LATCH_4;
	input wire [31:0] QEM_O_CNT_4;
	output wire [3:0] QEM_CR_WR;
	output wire [3:0] QEM_I_CNT_WR;
	output wire [3:0] QEM_THRESH_WR;
	output reg [1:0] GPIO_MOD_1;
	output reg [1:0] GPIO_SEL_1;
	output reg [1:0] GPIO_MOD_2;
	output reg [1:0] GPIO_SEL_2;
	output reg [1:0] GPIO_MOD_3;
	output reg [1:0] GPIO_SEL_3;
	output reg [1:0] GPIO_MOD_4;
	output reg [1:0] GPIO_SEL_4;
	output reg [1:0] GPIO_MOD_5;
	output reg [1:0] GPIO_SEL_5;
	output reg [1:0] GPIO_MOD_6;
	output reg [1:0] GPIO_SEL_6;
	output reg [1:0] GPIO_MOD_7;
	output reg [1:0] GPIO_SEL_7;
	output reg [1:0] GPIO_MOD_8;
	output reg [1:0] GPIO_SEL_8;
	output reg [1:0] GPIO_MOD_9;
	output reg [1:0] GPIO_SEL_9;
	output reg [1:0] GPIO_MOD_10;
	output reg [1:0] GPIO_SEL_10;
	output reg [1:0] GPIO_MOD_11;
	output reg [1:0] GPIO_SEL_11;
	output reg [1:0] GPIO_MOD_12;
	output reg [1:0] GPIO_SEL_12;
	output reg [1:0] GPIO_MOD_13;
	output reg [1:0] GPIO_SEL_13;
	output reg [1:0] GPIO_MOD_14;
	output reg [1:0] GPIO_SEL_14;
	output reg [1:0] GPIO_MOD_15;
	output reg [1:0] GPIO_SEL_15;
	output reg [1:0] GPIO_MOD_16;
	output reg [1:0] GPIO_SEL_16;
	output reg [1:0] GPIO_MOD_17;
	output reg [1:0] GPIO_SEL_17;
	output reg [1:0] GPIO_MOD_18;
	output reg [1:0] GPIO_SEL_18;
	output reg [1:0] GPIO_MOD_19;
	output reg [1:0] GPIO_SEL_19;
	output reg [1:0] GPIO_MOD_20;
	output reg [1:0] GPIO_SEL_20;
	output reg [1:0] GPIO_MOD_21;
	output reg [1:0] GPIO_SEL_21;
	output reg [1:0] GPIO_MOD_22;
	output reg [1:0] GPIO_SEL_22;
	output reg [1:0] GPIO_MOD_23;
	output reg [1:0] GPIO_SEL_23;
	output reg [1:0] GPIO_MOD_24;
	output reg [1:0] GPIO_SEL_24;
	output reg [23:0] GPIO_IRQEN;
	output reg [23:0] GPIO_IRQPOL;
	output reg [23:0] GPIO_IRQRES;
	input wire [23:0] GPIO_IN;
	output reg [23:0] GPIO_OUT;
	input wire [23:0] GPIO_INTR;
	localparam ADDR_SCALE = 2;
	localparam SPI_ADDR_OFFSET = 1;
	localparam I2C_ADDR_OFFSET = 13;
	localparam PWM_ADDR_OFFSET = 25;
	localparam TIM_ADDR_OFFSET = 41;
	localparam UART_ADDR_OFFSET = 65;
	localparam SD_ADDR_OFFSET = 89;
	localparam QEM_ADDR_OFFSET = 129;
	localparam GPIO_ADDR_OFFSET = 153;
	localparam I2C_INTER_OFFSET = 4;
	localparam TIM_INTER_OFFSET = 6;
	localparam UART_INTER_OFFSET = 10;
	localparam SD_INTER_OFFSET = 18;
	localparam QEM_INTER_OFFSET = 22;
	localparam GPIO_INTER_OFFSET = 30;
	reg mem_access_err_buf1 = 0;
	reg mem_access_err_buf2 = 0;
	reg [1:0] spi_tx_ready_buf1 = 0;
	reg [1:0] spi_tx_ready_buf2 = 0;
	wire [1:0] spi_tx_ready;
	reg [1:0] spi_rx_done_buf1 = 0;
	reg [1:0] spi_rx_done_buf2 = 0;
	wire [1:0] spi_rx_done;
	reg [1:0] i2c_done_buf1 = 0;
	reg [1:0] i2c_done_buf2 = 0;
	wire [1:0] i2c_done;
	reg [3:0] uart_tx_done_buf1 = 0;
	reg [3:0] uart_tx_done_buf2 = 0;
	wire [3:0] uart_tx_done;
	reg [3:0] uart_rx_done_buf1 = 0;
	reg [3:0] uart_rx_done_buf2 = 0;
	wire [3:0] uart_rx_done;
	reg [3:0] sd_done_buf1 = 0;
	reg [3:0] sd_done_buf2 = 0;
	wire [3:0] sd_done;
	reg [3:0] qem_calib_done_buf1;
	reg [3:0] qem_calib_done_buf2;
	wire [3:0] qem_calib_done;
	reg [3:0] qem_thresh_reached_buf1;
	reg [3:0] qem_thresh_reached_buf2;
	wire [3:0] qem_thresh_reached;
	reg [23:0] gpio_intr_buf1;
	reg [23:0] gpio_intr_buf2;
	wire [23:0] gpio_intr;
	reg [31:0] P_I_EN_REG [0:1];
	assign P_I_EN = {P_I_EN_REG[1][21:0], P_I_EN_REG[0]};
	genvar g;
	generate
		for (g = 0; g < 2; g = g + 1) begin : genblk1
			assign SPI_TX_DATA_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == (SPI_ADDR_OFFSET + (6 * g))) && WRITE ? 1 : 0);
			assign SPI_CR_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == ((SPI_ADDR_OFFSET + (6 * g)) + 2)) && WRITE ? 1 : 0);
		end
		for (g = 0; g < 2; g = g + 1) begin : genblk2
			assign I2C_CR_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == (I2C_ADDR_OFFSET + (6 * g))) && WRITE ? 1 : 0);
			assign I2C_MOSI_DATA_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == ((I2C_ADDR_OFFSET + (6 * g)) + 1)) && WRITE ? 1 : 0);
			assign I2C_REG_ADDR_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == ((I2C_ADDR_OFFSET + (6 * g)) + 2)) && WRITE ? 1 : 0);
			assign I2C_DEV_ADDR_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == ((I2C_ADDR_OFFSET + (6 * g)) + 3)) && WRITE ? 1 : 0);
		end
		for (g = 0; g < 4; g = g + 1) begin : genblk3
			assign PWM_PERIOD_DIV_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == (PWM_ADDR_OFFSET + (4 * g))) && WRITE ? 1 : 0);
			assign PWM_MOD_SETPOINT_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == ((PWM_ADDR_OFFSET + (4 * g)) + 1)) && WRITE ? 1 : 0);
			assign PWM_EN_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == ((PWM_ADDR_OFFSET + (4 * g)) + 2)) && WRITE ? 1 : 0);
		end
		for (g = 0; g < 4; g = g + 1) begin : genblk4
			assign TIM_CTRL_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == (TIM_ADDR_OFFSET + (6 * g))) && WRITE ? 1 : 0);
			assign TIM_THRESH_H_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == ((TIM_ADDR_OFFSET + (6 * g)) + 1)) && WRITE ? 1 : 0);
			assign TIM_THRESH_L_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == ((TIM_ADDR_OFFSET + (6 * g)) + 2)) && WRITE ? 1 : 0);
		end
		for (g = 0; g < 4; g = g + 1) begin : genblk5
			assign UART_CR_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == (UART_ADDR_OFFSET + (6 * g))) && WRITE ? 1 : 0);
			assign UART_TX_RATE_DIV_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == ((UART_ADDR_OFFSET + (6 * g)) + 1)) && WRITE ? 1 : 0);
			assign UART_RX_RATE_DIV_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == ((UART_ADDR_OFFSET + (6 * g)) + 2)) && WRITE ? 1 : 0);
			assign UART_TX_DATA_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == ((UART_ADDR_OFFSET + (6 * g)) + 3)) && WRITE ? 1 : 0);
		end
		for (g = 0; g < 4; g = g + 1) begin : genblk6
			assign SD_CR_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == (SD_ADDR_OFFSET + (10 * g))) && WRITE ? 1 : 0);
			assign SD_START_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == ((SD_ADDR_OFFSET + (10 * g)) + 1)) && WRITE ? 1 : 0);
			assign SD_STOP_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == ((SD_ADDR_OFFSET + (10 * g)) + 2)) && WRITE ? 1 : 0);
			assign SD_TOT_STEPS_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == ((SD_ADDR_OFFSET + (10 * g)) + 3)) && WRITE ? 1 : 0);
			assign SD_JERK_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == ((SD_ADDR_OFFSET + (10 * g)) + 4)) && WRITE ? 1 : 0);
			assign SD_JERK_DUR_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == ((SD_ADDR_OFFSET + (10 * g)) + 5)) && WRITE ? 1 : 0);
			assign SD_ACCEL_DUR_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == ((SD_ADDR_OFFSET + (10 * g)) + 6)) && WRITE ? 1 : 0);
			assign SD_RADDR_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == ((SD_ADDR_OFFSET + (10 * g)) + 7)) && WRITE ? 1 : 0);
		end
		for (g = 0; g < 4; g = g + 1) begin : genblk7
			assign QEM_CR_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == (QEM_ADDR_OFFSET + (6 * g))) && WRITE ? 1 : 0);
			assign QEM_I_CNT_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == ((QEM_ADDR_OFFSET + (6 * g)) + 1)) && WRITE ? 1 : 0);
			assign QEM_THRESH_WR[g] = ((((ADDR & ~STARTING_ADDR) >> ADDR_SCALE) == ((QEM_ADDR_OFFSET + (6 * g)) + 2)) && WRITE ? 1 : 0);
		end
	endgenerate
	always @(posedge CLK)
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
			begin : sv2v_autoblock_1
				integer i;
				for (i = 0; i < 24; i = i + 1)
					gpio_intr_buf1[i] <= GPIO_INTR[i];
			end
			gpio_intr_buf2 <= gpio_intr_buf1;
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
	integer i;
	always @(posedge CLK)
		if (RST_N) begin
			MEM_ERR_INT <= mem_access_err_buf1 & ~mem_access_err_buf2;
			for (i = 0; i < 54; i = i + 1)
				if (i < I2C_INTER_OFFSET) begin
					INTERRUPTS[i] <= spi_tx_ready[i / 2];
					i = i + 1;
					INTERRUPTS[i] <= spi_rx_done[i / 2];
				end
				else if (i < TIM_INTER_OFFSET)
					INTERRUPTS[i] <= i2c_done[(i - I2C_INTER_OFFSET) / 1];
				else if (i < UART_INTER_OFFSET)
					INTERRUPTS[i] <= TIM_INT[(i - TIM_INTER_OFFSET) / 1];
				else if (i < SD_INTER_OFFSET) begin
					INTERRUPTS[i] <= uart_tx_done[(i - UART_INTER_OFFSET) / 2];
					i = i + 1;
					INTERRUPTS[i] <= uart_rx_done[(i - UART_INTER_OFFSET) / 2];
				end
				else if (i < QEM_INTER_OFFSET)
					INTERRUPTS[i] <= sd_done[(i - SD_INTER_OFFSET) / 1];
				else if (i < GPIO_INTER_OFFSET) begin
					INTERRUPTS[i] <= qem_calib_done[(i - QEM_INTER_OFFSET) / 2];
					i = i + 1;
					INTERRUPTS[i] <= qem_thresh_reached[(i - QEM_INTER_OFFSET) / 2];
				end
				else
					INTERRUPTS[i] <= gpio_intr[(i - GPIO_INTER_OFFSET) / 1];
		end
	integer j;
	always @(posedge CLK)
		if (~RST_N) begin
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
		end
		else if (REQ)
			if (ADDR >= STARTING_ADDR)
				if (WRITE) begin
					case ((ADDR & ~STARTING_ADDR) >> ADDR_SCALE)
						0: ME_I_EN <= DIN[0];
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
						32: PWM_PERIOD_DIV_3 <= DIN;
						33: PWM_MOD_SETPOINT_3 <= DIN;
						34: PWM_EN_3 <= DIN;
						37: PWM_PERIOD_DIV_4 <= DIN;
						38: PWM_MOD_SETPOINT_4 <= DIN;
						39: PWM_EN_4 <= DIN;
						41: TIM_CTRL_1 <= DIN;
						42: TIM_THRESH_H_1 <= DIN;
						43: TIM_THRESH_L_1 <= DIN;
						47: TIM_CTRL_2 <= DIN;
						48: TIM_THRESH_H_2 <= DIN;
						49: TIM_THRESH_L_2 <= DIN;
						53: TIM_CTRL_3 <= DIN;
						54: TIM_THRESH_H_3 <= DIN;
						55: TIM_THRESH_L_3 <= DIN;
						59: TIM_CTRL_4 <= DIN;
						60: TIM_THRESH_H_4 <= DIN;
						61: TIM_THRESH_L_4 <= DIN;
						65: UART_CR_1 <= DIN;
						66: UART_TX_RATE_DIV_1 <= DIN;
						67: UART_RX_RATE_DIV_1 <= DIN;
						68: UART_TX_DATA_1 <= DIN;
						71: UART_CR_2 <= DIN;
						72: UART_TX_RATE_DIV_2 <= DIN;
						73: UART_RX_RATE_DIV_2 <= DIN;
						74: UART_TX_DATA_2 <= DIN;
						77: UART_CR_3 <= DIN;
						78: UART_TX_RATE_DIV_3 <= DIN;
						79: UART_RX_RATE_DIV_3 <= DIN;
						80: UART_TX_DATA_3 <= DIN;
						83: UART_CR_4 <= DIN;
						84: UART_TX_RATE_DIV_4 <= DIN;
						85: UART_RX_RATE_DIV_4 <= DIN;
						86: UART_TX_DATA_4 <= DIN;
						89: SD_CR_1 <= DIN;
						90: SD_START_1 <= DIN;
						91: SD_STOP_1 <= DIN;
						92: SD_TOT_STEPS_1 <= DIN;
						93: SD_JERK_1 <= DIN;
						94: SD_JERK_DUR_1 <= DIN;
						95: SD_ACCEL_DUR_1 <= DIN;
						96: SD_RADDR_1 <= DIN;
						99: SD_CR_2 <= DIN;
						100: SD_START_2 <= DIN;
						101: SD_STOP_2 <= DIN;
						102: SD_TOT_STEPS_2 <= DIN;
						103: SD_JERK_2 <= DIN;
						104: SD_JERK_DUR_2 <= DIN;
						105: SD_ACCEL_DUR_2 <= DIN;
						106: SD_RADDR_2 <= DIN;
						109: SD_CR_3 <= DIN;
						110: SD_START_3 <= DIN;
						111: SD_STOP_3 <= DIN;
						112: SD_TOT_STEPS_3 <= DIN;
						113: SD_JERK_3 <= DIN;
						114: SD_JERK_DUR_3 <= DIN;
						115: SD_ACCEL_DUR_3 <= DIN;
						116: SD_RADDR_3 <= DIN;
						119: SD_CR_4 <= DIN;
						120: SD_START_4 <= DIN;
						121: SD_STOP_4 <= DIN;
						122: SD_TOT_STEPS_4 <= DIN;
						123: SD_JERK_4 <= DIN;
						124: SD_JERK_DUR_4 <= DIN;
						125: SD_ACCEL_DUR_4 <= DIN;
						126: SD_RADDR_4 <= DIN;
						129: QEM_CR_1 <= DIN;
						130: QEM_I_CNT_1 <= DIN;
						131: QEM_THRESH_1 <= DIN;
						135: QEM_CR_2 <= DIN;
						136: QEM_I_CNT_2 <= DIN;
						137: QEM_THRESH_2 <= DIN;
						141: QEM_CR_3 <= DIN;
						142: QEM_I_CNT_3 <= DIN;
						143: QEM_THRESH_3 <= DIN;
						147: QEM_CR_4 <= DIN;
						148: QEM_I_CNT_4 <= DIN;
						149: QEM_THRESH_4 <= DIN;
						153: begin
							GPIO_MOD_1 <= DIN[9:8];
							GPIO_SEL_1 <= DIN[7:6];
							GPIO_MOD_2 <= DIN[25:24];
							GPIO_SEL_2 <= DIN[23:22];
						end
						154: begin
							GPIO_MOD_3 <= DIN[9:8];
							GPIO_SEL_3 <= DIN[7:6];
							GPIO_MOD_4 <= DIN[25:24];
							GPIO_SEL_4 <= DIN[23:22];
						end
						155: begin
							GPIO_MOD_5 <= DIN[9:8];
							GPIO_SEL_5 <= DIN[7:6];
							GPIO_MOD_6 <= DIN[25:24];
							GPIO_SEL_6 <= DIN[23:22];
						end
						156: begin
							GPIO_MOD_7 <= DIN[9:8];
							GPIO_SEL_7 <= DIN[7:6];
							GPIO_MOD_8 <= DIN[25:24];
							GPIO_SEL_8 <= DIN[23:22];
						end
						157: begin
							GPIO_MOD_9 <= DIN[9:8];
							GPIO_SEL_9 <= DIN[7:6];
							GPIO_MOD_10 <= DIN[25:24];
							GPIO_SEL_10 <= DIN[23:22];
						end
						158: begin
							GPIO_MOD_11 <= DIN[9:8];
							GPIO_SEL_11 <= DIN[7:6];
							GPIO_MOD_12 <= DIN[25:24];
							GPIO_SEL_12 <= DIN[23:22];
						end
						159: begin
							GPIO_MOD_13 <= DIN[9:8];
							GPIO_SEL_13 <= DIN[7:6];
							GPIO_MOD_14 <= DIN[25:24];
							GPIO_SEL_14 <= DIN[23:22];
						end
						160: begin
							GPIO_MOD_15 <= DIN[9:8];
							GPIO_SEL_15 <= DIN[7:6];
							GPIO_MOD_16 <= DIN[25:24];
							GPIO_SEL_16 <= DIN[23:22];
						end
						161: begin
							GPIO_MOD_17 <= DIN[9:8];
							GPIO_SEL_17 <= DIN[7:6];
							GPIO_MOD_18 <= DIN[25:24];
							GPIO_SEL_18 <= DIN[23:22];
						end
						162: begin
							GPIO_MOD_19 <= DIN[9:8];
							GPIO_SEL_19 <= DIN[7:6];
							GPIO_MOD_20 <= DIN[25:24];
							GPIO_SEL_20 <= DIN[23:22];
						end
						163: begin
							GPIO_MOD_21 <= DIN[9:8];
							GPIO_SEL_21 <= DIN[7:6];
							GPIO_MOD_22 <= DIN[25:24];
							GPIO_SEL_22 <= DIN[23:22];
						end
						164: begin
							GPIO_MOD_23 <= DIN[9:8];
							GPIO_SEL_23 <= DIN[7:6];
							GPIO_MOD_24 <= DIN[25:24];
							GPIO_SEL_24 <= DIN[23:22];
						end
						165: P_I_EN_REG[0] <= DIN;
						166: P_I_EN_REG[1] <= DIN;
						default:
							;
					endcase
					for (i = 0; i < 24; i = i + 1)
						case ((ADDR & ~STARTING_ADDR) >> ADDR_SCALE)
							GPIO_ADDR_OFFSET + (i / 2): begin
								GPIO_IRQEN[i] <= (i[0] == 0 ? DIN[5] : DIN[21]);
								GPIO_IRQPOL[i] <= (i[0] == 0 ? DIN[4] : DIN[20]);
								GPIO_IRQRES[i] <= (i[0] == 0 ? DIN[2] : DIN[18]);
								GPIO_OUT[i] <= (i[0] == 0 ? DIN[0] : DIN[16]);
							end
							default:
								;
						endcase
				end
				else begin
					case ((ADDR & ~STARTING_ADDR) >> ADDR_SCALE)
						0: DOUT <= {31'b0000000000000000000000000000000, ME_I_EN};
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
						26: DOUT <= PWM_START_STROBE_1;
						27: DOUT <= PWM_PERIOD_DIV_2;
						28: DOUT <= PWM_MOD_SETPOINT_2;
						29: DOUT <= PWM_EN_2;
						30: DOUT <= PWM_START_STROBE_2;
						31: DOUT <= PWM_PERIOD_DIV_3;
						32: DOUT <= PWM_MOD_SETPOINT_3;
						33: DOUT <= PWM_EN_3;
						34: DOUT <= PWM_START_STROBE_3;
						35: DOUT <= PWM_PERIOD_DIV_4;
						36: DOUT <= PWM_MOD_SETPOINT_4;
						37: DOUT <= PWM_EN_4;
						38: DOUT <= PWM_START_STROBE_4;
						39: DOUT <= TIM_CTRL_1;
						40: DOUT <= TIM_THRESH_H_1;
						41: DOUT <= TIM_THRESH_L_1;
						42: DOUT <= TIM_OUT_H_1;
						43: DOUT <= TIM_OUT_L_1;
						44: DOUT <= {31'b0000000000000000000000000000000, TIM_INT[0]};
						45: DOUT <= TIM_CTRL_2;
						46: DOUT <= TIM_THRESH_H_2;
						47: DOUT <= TIM_THRESH_L_2;
						48: DOUT <= TIM_OUT_H_2;
						49: DOUT <= TIM_OUT_L_2;
						50: DOUT <= {31'b0000000000000000000000000000000, TIM_INT[1]};
						51: DOUT <= TIM_CTRL_3;
						52: DOUT <= TIM_THRESH_H_3;
						53: DOUT <= TIM_THRESH_L_3;
						54: DOUT <= TIM_OUT_H_3;
						55: DOUT <= TIM_OUT_L_3;
						56: DOUT <= {31'b0000000000000000000000000000000, TIM_INT[2]};
						57: DOUT <= TIM_CTRL_4;
						58: DOUT <= TIM_THRESH_H_4;
						59: DOUT <= TIM_THRESH_L_4;
						60: DOUT <= TIM_OUT_H_4;
						61: DOUT <= TIM_OUT_L_4;
						62: DOUT <= {31'b0000000000000000000000000000000, TIM_INT[3]};
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
							DOUT[9:8] <= GPIO_MOD_1;
							DOUT[7:6] <= GPIO_SEL_1;
							DOUT[25:24] <= GPIO_MOD_2;
							DOUT[23:22] <= GPIO_SEL_2;
						end
						152: begin
							DOUT[9:8] <= GPIO_MOD_3;
							DOUT[7:6] <= GPIO_SEL_3;
							DOUT[25:24] <= GPIO_MOD_4;
							DOUT[23:22] <= GPIO_SEL_4;
						end
						153: begin
							DOUT[9:8] <= GPIO_MOD_5;
							DOUT[7:6] <= GPIO_SEL_5;
							DOUT[25:24] <= GPIO_MOD_6;
							DOUT[23:22] <= GPIO_SEL_6;
						end
						154: begin
							DOUT[9:8] <= GPIO_MOD_7;
							DOUT[7:6] <= GPIO_SEL_7;
							DOUT[25:24] <= GPIO_MOD_8;
							DOUT[23:22] <= GPIO_SEL_8;
						end
						155: begin
							DOUT[9:8] <= GPIO_MOD_9;
							DOUT[7:6] <= GPIO_SEL_9;
							DOUT[25:24] <= GPIO_MOD_10;
							DOUT[23:22] <= GPIO_SEL_10;
						end
						156: begin
							DOUT[9:8] <= GPIO_MOD_11;
							DOUT[7:6] <= GPIO_SEL_11;
							DOUT[25:24] <= GPIO_MOD_12;
							DOUT[23:22] <= GPIO_SEL_12;
						end
						157: begin
							DOUT[9:8] <= GPIO_MOD_13;
							DOUT[7:6] <= GPIO_SEL_13;
							DOUT[25:24] <= GPIO_MOD_14;
							DOUT[23:22] <= GPIO_SEL_14;
						end
						158: begin
							DOUT[9:8] <= GPIO_MOD_15;
							DOUT[7:6] <= GPIO_SEL_15;
							DOUT[25:24] <= GPIO_MOD_16;
							DOUT[23:22] <= GPIO_SEL_16;
						end
						159: begin
							DOUT[9:8] <= GPIO_MOD_17;
							DOUT[7:6] <= GPIO_SEL_17;
							DOUT[25:24] <= GPIO_MOD_18;
							DOUT[23:22] <= GPIO_SEL_18;
						end
						160: begin
							DOUT[9:8] <= GPIO_MOD_19;
							DOUT[7:6] <= GPIO_SEL_19;
							DOUT[25:24] <= GPIO_MOD_20;
							DOUT[23:22] <= GPIO_SEL_20;
						end
						161: begin
							DOUT[9:8] <= GPIO_MOD_21;
							DOUT[7:6] <= GPIO_SEL_21;
							DOUT[25:24] <= GPIO_MOD_22;
							DOUT[23:22] <= GPIO_SEL_22;
						end
						162: begin
							DOUT[9:8] <= GPIO_MOD_23;
							DOUT[7:6] <= GPIO_SEL_23;
							DOUT[25:24] <= GPIO_MOD_24;
							DOUT[23:22] <= GPIO_SEL_24;
						end
						163: DOUT <= P_I_EN_REG[0];
						164: DOUT <= P_I_EN_REG[1];
						default: DOUT <= 0;
					endcase
					for (j = 0; j < 24; j = j + 1)
						case ((ADDR & ~STARTING_ADDR) >> ADDR_SCALE)
							GPIO_ADDR_OFFSET + (j / 2):
								case (j[0])
									0: begin
										DOUT[5] <= GPIO_IRQEN[j];
										DOUT[4] <= GPIO_IRQPOL[j];
										DOUT[2] <= GPIO_IRQRES[j];
										DOUT[0] <= GPIO_OUT[j];
										DOUT[1] <= GPIO_IN[j];
										DOUT[3] <= GPIO_INTR[j];
									end
									1: begin
										DOUT[21] <= GPIO_IRQEN[j];
										DOUT[20] <= GPIO_IRQPOL[j];
										DOUT[18] <= GPIO_IRQRES[j];
										DOUT[16] <= GPIO_OUT[j];
										DOUT[17] <= GPIO_IN[j];
										DOUT[19] <= GPIO_INTR[j];
									end
								endcase
							default: DOUT <= 0;
						endcase
				end
endmodule
