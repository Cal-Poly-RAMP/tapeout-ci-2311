`timescale 1ns / 1ps

///////////////////////////////////////////////////////////////////////////////
// Description: SPI (Serial Peripheral Interface) Master
//              With multiple chip-select (AKA Slave Select) capability
//
//              Supports arbitrary data length transfers.
// 
//              Instantiates a SPI Master and adds NUM_CS chip selects.
//
// Note:        i_Clk must be at least 2x faster than i_SPI_Clk
//
// Config:      i_spi_mode, can be 0, 1, 2, or 3.  See above.
//              Can be configured in one of 4 modes:
//              Mode | Clock Polarity (CPOL/CKP) | Clock Phase (CPHA)
//               0   |             0             |        0
//               1   |             0             |        1
//               2   |             1             |        0
//               3   |             1             |        1
//
//              i_ticks_per_half_bit - Sets frequency of o_SPI_Clk.  o_SPI_Clk is
//              derived from i_Clk.  Set to integer number of clocks for each
//              half-bit of SPI data.  E.g. 100 MHz i_Clk, CLKS_PER_HALF_BIT = 2
//              would create o_SPI_CLK of 25 MHz.  Must be >= 2
//
//              MAX_BYTES_PER_CS - Set to the maximum number of bytes that
//              will be sent during a single CS-low pulse.
// 
//              CS_INACTIVE_CLKS - Sets the amount of time in clock cycles to
//              hold the state of Chip-Select high (inactive) before next 
//              command is allowed on the line.  Useful if chip requires some
//              time when CS is high between trasnfers.
//
//		NUM_CS - Sets number of chip selects
///////////////////////////////////////////////////////////////////////////////

module SPI_Master_With_Multiple_CS
  #(parameter MAX_BYTES_PER_CS = 8,
    parameter CS_INACTIVE_CLKS = 2,
    parameter NUM_CS = 4)
  (
   // Control/Data Signals,
   input        i_Rst_L,     // FPGA Reset
   input        i_Clk,       // FPGA Clock
   input        i_wr_cr,
   input        i_wr_data,
   input [NUM_CS - 1:0] i_SPI_CS_en,  // Chip select enables
   input [1:0]  i_spi_mode,           // 1: CPOL, 0: CPHA
   input [15:0] i_ticks_per_half_bit,
   input [3:0]  i_data_length,   // Length of data to be transmitted/received minus 1
   
   // TX (MOSI) Signals
   input [$clog2(MAX_BYTES_PER_CS+1)-1:0] i_TX_Count,  // # bytes per CS low
   input [15:0] i_TX_Data,       // Data to transmit on MOSI
   input        i_TX_MSB_first,  // Data sent MSB first
   input        i_TX_DV,         // Data Valid Pulse with i_TX_Byte
   output       o_TX_Ready,      // Transmit Ready for next byte
   
   // RX (MISO) Signals
   output logic [$clog2(MAX_BYTES_PER_CS+1)-1:0] o_RX_Count,  // Index RX byte
   input        i_RX_MSB_first,  // Data received MSB first
   output       o_RX_DV,     // Data Valid pulse (1 clock cycle)
   output [15:0] o_RX_Data,   // Data received on MISO

   // SPI Interface
   output o_SPI_Clk,
   input  i_SPI_MISO,
   output o_SPI_MOSI,
   output [NUM_CS - 1:0] o_SPI_CS_n
   );

  localparam IDLE        = 2'b00;
  localparam TRANSFER    = 2'b01;
  localparam CS_INACTIVE = 2'b10;

  logic [1:0] r_SM_CS;
  logic [NUM_CS - 1:0] r_CS_n;
  logic [NUM_CS - 1:0] r_SPI_CS_en;
  logic TX_DV_1, TX_DV_2;
  logic TX_DV;
  logic wr_cr_r1, wr_cr_r2, wr_cr_r;
  logic [$clog2(CS_INACTIVE_CLKS):0] r_CS_Inactive_Count;
  logic [$clog2(MAX_BYTES_PER_CS+1)-1:0] r_TX_Count;
  logic w_Master_Ready;

  // Instantiate Master
  SPI_Master SPI_Master_Inst
   (
   // Control/Data Signals,
   .i_Rst_L(i_Rst_L),     // FPGA Reset
   .i_Clk(i_Clk),         // FPGA Clock
   .i_wr_cr(i_wr_cr),
   .i_wr_data(i_wr_data),
   .i_spi_mode(i_spi_mode),
   .i_ticks_per_half_bit(i_ticks_per_half_bit),
   .i_data_length(i_data_length), // Length of data to be transmitted/received minus 1
   
   // TX (MOSI) Signals
   .i_TX_Data(i_TX_Data),         // Data to transmit
   .i_TX_MSB_first(i_TX_MSB_first),
   .i_TX_DV(TX_DV),             // Data Valid Pulse 
   .o_TX_Ready(w_Master_Ready),   // Transmit Ready for Byte
   
   // RX (MISO) Signals
   .i_RX_MSB_first(i_RX_MSB_first),
   .o_RX_DV(o_RX_DV),       // Data Valid pulse (1 clock cycle)
   .o_RX_Data(o_RX_Data),   // Byte received on MISO

   // SPI Interface
   .o_SPI_Clk(o_SPI_Clk),
   .i_SPI_MISO(i_SPI_MISO),
   .o_SPI_MOSI(o_SPI_MOSI)
   );

  initial begin
    TX_DV_1 = 1'b0;
    TX_DV_2 = 1'b0;
    wr_cr_r1 = 1'b0;
    wr_cr_r2 = 1'b0;
  end
  
  assign TX_DV = TX_DV_1 & ~TX_DV_2;
  assign wr_cr_r = wr_cr_r1 & ~wr_cr_r2;
  
  // Purpose: Control CS line using State Machine
  always @(posedge i_Clk)
  begin
    if (~i_Rst_L)
    begin
      r_SM_CS <= IDLE;
      r_CS_n  <= {NUM_CS{1'b1}};   // Resets to high
      r_SPI_CS_en <= {NUM_CS{1'b0}};
      r_TX_Count <= 0;
      r_CS_Inactive_Count <= CS_INACTIVE_CLKS[$clog2(CS_INACTIVE_CLKS):0];
      TX_DV_1 <= 1'b0;
      TX_DV_2 <= 1'b0;
    end
    else
    begin
      TX_DV_1 <= i_TX_DV;
      TX_DV_2 <= TX_DV_1;
      wr_cr_r1 <= i_wr_cr;
      wr_cr_r2 <= wr_cr_r1;
      case (r_SM_CS)      
      IDLE:
        begin
          if (wr_cr_r)
            r_SPI_CS_en <= i_SPI_CS_en;
          if (|(r_CS_n & r_SPI_CS_en) & TX_DV) // Start of transmission
          begin
            r_TX_Count <= i_TX_Count - 1'b1; // Register TX Count
            for (integer i = 0; i < NUM_CS; i++)
                if (r_SPI_CS_en[i])
                    r_CS_n[i]     <= 1'b0;       // Drive CS low
            r_SM_CS    <= TRANSFER;   // Transfer bytes
          end
        end

      TRANSFER:
        begin
          // Wait until SPI is done transferring do next thing
          if (w_Master_Ready)
          begin
            if (r_TX_Count > 0)
            begin
              if (TX_DV)
              begin
                r_TX_Count <= r_TX_Count - 1'b1;
              end
            end
            else
            begin
              r_CS_n  <= {NUM_CS{1'b1}}; // we done, so set CS high
              r_CS_Inactive_Count <= CS_INACTIVE_CLKS[$clog2(CS_INACTIVE_CLKS):0];
              r_SM_CS             <= CS_INACTIVE;
            end // else: !if(r_TX_Count > 0)
          end // if (w_Master_Ready)
        end // case: TRANSFER

      CS_INACTIVE:
        begin
          if (r_CS_Inactive_Count > 0)
          begin
            r_CS_Inactive_Count <= r_CS_Inactive_Count - 1'b1;
          end
          else
          begin
            r_SM_CS <= IDLE;
          end
        end

      default:
        begin
          r_CS_n  <= {NUM_CS{1'b1}}; // we done, so set CS high
          r_SM_CS <= IDLE;
        end
      endcase // case (r_SM_CS)
    end
  end // always @ (posedge i_Clk)


  // Purpose: Keep track of RX_Count
  always @(posedge i_Clk)
  begin
    begin
      if (&r_CS_n)
      begin
        o_RX_Count <= 0;
      end
      else if (o_RX_DV)
      begin
        o_RX_Count <= o_RX_Count + 1'b1;
      end
    end
  end

  assign o_SPI_CS_n = r_CS_n;

  assign o_TX_Ready  = ((r_SM_CS == IDLE) | (r_SM_CS == TRANSFER && w_Master_Ready == 1'b1 && r_TX_Count > 0)) & ~TX_DV;

endmodule // SPI_Master_With_Single_CS
