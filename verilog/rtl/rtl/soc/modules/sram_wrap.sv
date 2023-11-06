`timescale 1ns/1ps
//////////////////////////////////////////////////////////////////////////////////
//
// Module Name: sram_wrap
// Description: A wrapper that instantiates multiple SRAM macros from OpenRAM.
//              Each macro is 2kB 1rw1r. Bad reqs respond with DEAD_BEEF and set
//              an illegal_memory_o flag.
// 
// SPDX-License-Identifier: Apache-2.0
//
//////////////////////////////////////////////////////////////////////////////////

module sram_wrap #(
    parameter SRAM_BASE_ADDR      = 32'h8000_0000,
    parameter SRAM_NUM_BLOCKS     = 12,
    parameter SRAM_BLOCK_SIZE     = 512,
    parameter SRAM_LOG_BLOCK_SIZE = $clog2(SRAM_BLOCK_SIZE),
    parameter SRAM_END_ADDR       = (SRAM_BASE_ADDR + (SRAM_NUM_BLOCKS * SRAM_BLOCK_SIZE)),
    parameter SRAM_LOG_BLOCKS     = $clog2(SRAM_NUM_BLOCKS) )
(
`ifdef USE_POWER_PINS
    inout vccd1,	// 1.8V supply
    inout vssd1,	// 1 digital ground
`endif
    input  logic   clk_i,

    // sram_d OBI interface from muxed output
    input  logic        sram_d_req_i,
    output logic        sram_d_gnt_o,
    input  logic [31:0] sram_d_addr_i,
    input  logic        sram_d_we_i,
    input  logic [3:0]  sram_d_be_i,
    input  logic [31:0] sram_d_wdata_i,
    output logic        sram_d_rvalid_o,
    output logic [31:0] sram_d_rdata_o,
    
    // sram_i OBI interface from and to Mem Interface
    input  logic        sram_i_req_i,
    output logic        sram_i_gnt_o,
    input  logic [31:0] sram_i_addr_i,
    input  logic        sram_i_we_i,
    input  logic [3:0]  sram_i_be_i,
    input  logic [31:0] sram_i_wdata_i,
    output logic        sram_i_rvalid_o,
    output logic [31:0] sram_i_rdata_o,

    //illegal out
    output logic        illegal_memory_o                       
);

    //internal signals for OBI
    wire  [31:0] sram_d_read_vec [SRAM_NUM_BLOCKS - 1 : 0 ];
    wire  [31:0] sram_i_read_vec [SRAM_NUM_BLOCKS - 1 : 0 ];


    //Synchronous OBI interface
    always_comb
    begin
        sram_i_gnt_o = sram_i_req_i;
        sram_d_gnt_o = sram_d_req_i;
        illegal_memory_o = (sram_i_req_i && 
                            (sram_i_addr_i < SRAM_BASE_ADDR || 
                             sram_i_addr_i > SRAM_END_ADDR  ||
                             sram_i_we_i) )
                        || (sram_d_req_i && 
                            (sram_d_addr_i < SRAM_BASE_ADDR || 
                             sram_d_addr_i > SRAM_END_ADDR) );
    end
    always_ff @(posedge clk_i) 
    begin
        sram_i_rvalid_o <= sram_i_req_i;
        sram_d_rvalid_o <= sram_d_req_i;
    end

    // SRAM Address Select Lines
    logic [SRAM_NUM_BLOCKS-1:0] cs_data, cs_inst, cs_data_prev, cs_inst_prev ;
    logic [SRAM_LOG_BLOCKS-1:0] sram_d_cs_addr, sram_i_cs_addr;
    assign sram_d_cs_addr = sram_d_addr_i[SRAM_LOG_BLOCKS - 1 + SRAM_LOG_BLOCK_SIZE +2 : SRAM_LOG_BLOCK_SIZE +2];
    assign sram_i_cs_addr = sram_i_addr_i[SRAM_LOG_BLOCKS - 1 + SRAM_LOG_BLOCK_SIZE +2: SRAM_LOG_BLOCK_SIZE +2];
    always_comb 
    begin
        cs_data = 0;
        cs_inst = 0;
        // Output Muxing
        sram_d_rdata_o = 32'hDEAD_BEEF;
        sram_i_rdata_o = 32'hDEAD_BEEF;
        for (int i = 0; i < SRAM_NUM_BLOCKS; i++ )
        begin
            // CS selection
            if ( sram_d_req_i && i == {28'b0, sram_d_cs_addr}) cs_data[i] = 1;
            if ( sram_i_req_i && i == {28'b0, sram_i_cs_addr}) cs_inst[i] = 1;

            if (cs_data_prev[i] == 1'b1) sram_d_rdata_o = sram_d_read_vec[i];
            if (cs_inst_prev[i] == 1'b1) sram_i_rdata_o = sram_i_read_vec[i];
        end 
    // Save Previous CS
    end
    always_ff @ (posedge clk_i)
    begin
        cs_data_prev <= cs_data;
        cs_inst_prev <= cs_inst;
    end

    sky130_sram_2kbyte_1rw1r_32x512_8 #(.DELAY(0)) sram0 (
    `ifdef USE_POWER_PINS
        .vccd1(vccd1), // 1.8V
        .vssd1(vssd1), // Digital ground
    `endif
        .clk0      (clk_i),
        .csb0      (~cs_data[0]),   // Active Low
        .web0      (~sram_d_we_i),  // Active Low
        .wmask0    (sram_d_be_i),
        .addr0     (sram_d_addr_i[SRAM_LOG_BLOCK_SIZE+2 -1 : 2]),
        .din0      (sram_d_wdata_i), 
        .dout0     (sram_d_read_vec[0]), 
        .clk1      (clk_i),
        .csb1      (~cs_inst[0]),    // Active Low
        .addr1     (sram_i_addr_i[SRAM_LOG_BLOCK_SIZE+2-1 : 2]), 
        .dout1     (sram_i_read_vec[0]) 
    );

    sky130_sram_2kbyte_1rw1r_32x512_8 #(.DELAY(0)) sram1 (
    `ifdef USE_POWER_PINS
        .vccd1(vccd1), // 1.8V
        .vssd1(vssd1), // Digital ground
    `endif
        .clk0      (clk_i),
        .csb0      (~cs_data[1]),   // Active Low
        .web0      (~sram_d_we_i),  // Active Low
        .wmask0    (sram_d_be_i),
        .addr0     (sram_d_addr_i[SRAM_LOG_BLOCK_SIZE+2 -1 : 2]),
        .din0      (sram_d_wdata_i), 
        .dout0     (sram_d_read_vec[1]), 
        .clk1      (clk_i),
        .csb1      (~cs_inst[1]),    // Active Low
        .addr1     (sram_i_addr_i[SRAM_LOG_BLOCK_SIZE+2-1 : 2]), 
        .dout1     (sram_i_read_vec[1]) 
    );

    sky130_sram_2kbyte_1rw1r_32x512_8 #(.DELAY(0)) sram2 (
    `ifdef USE_POWER_PINS
        .vccd1(vccd1), // 1.8V
        .vssd1(vssd1), // Digital ground
    `endif
        .clk0      (clk_i),
        .csb0      (~cs_data[2]),   // Active Low
        .web0      (~sram_d_we_i),  // Active Low
        .wmask0    (sram_d_be_i),
        .addr0     (sram_d_addr_i[SRAM_LOG_BLOCK_SIZE+2 -1 : 2]),
        .din0      (sram_d_wdata_i), 
        .dout0     (sram_d_read_vec[2]), 
        .clk1      (clk_i),
        .csb1      (~cs_inst[2]),    // Active Low
        .addr1     (sram_i_addr_i[SRAM_LOG_BLOCK_SIZE+2-1 : 2]), 
        .dout1     (sram_i_read_vec[2]) 
    );

    sky130_sram_2kbyte_1rw1r_32x512_8 #(.DELAY(0)) sram3 (
    `ifdef USE_POWER_PINS
        .vccd1(vccd1), // 1.8V
        .vssd1(vssd1), // Digital ground
    `endif
        .clk0      (clk_i),
        .csb0      (~cs_data[3]),   // Active Low
        .web0      (~sram_d_we_i),  // Active Low
        .wmask0    (sram_d_be_i),
        .addr0     (sram_d_addr_i[SRAM_LOG_BLOCK_SIZE+2 -1 : 2]),
        .din0      (sram_d_wdata_i), 
        .dout0     (sram_d_read_vec[3]), 
        .clk1      (clk_i),
        .csb1      (~cs_inst[3]),    // Active Low
        .addr1     (sram_i_addr_i[SRAM_LOG_BLOCK_SIZE+2-1 : 2]), 
        .dout1     (sram_i_read_vec[3]) 
    );

    sky130_sram_2kbyte_1rw1r_32x512_8 #(.DELAY(0)) sram4 (
    `ifdef USE_POWER_PINS
        .vccd1(vccd1), // 1.8V
        .vssd1(vssd1), // Digital ground
    `endif
        .clk0      (clk_i),
        .csb0      (~cs_data[4]),   // Active Low
        .web0      (~sram_d_we_i),  // Active Low
        .wmask0    (sram_d_be_i),
        .addr0     (sram_d_addr_i[SRAM_LOG_BLOCK_SIZE+2 -1 : 2]),
        .din0      (sram_d_wdata_i), 
        .dout0     (sram_d_read_vec[4]), 
        .clk1      (clk_i),
        .csb1      (~cs_inst[4]),    // Active Low
        .addr1     (sram_i_addr_i[SRAM_LOG_BLOCK_SIZE+2-1 : 2]), 
        .dout1     (sram_i_read_vec[4]) 
    );

    sky130_sram_2kbyte_1rw1r_32x512_8 #(.DELAY(0)) sram5 (
    `ifdef USE_POWER_PINS
        .vccd1(vccd1), // 1.8V
        .vssd1(vssd1), // Digital ground
    `endif
        .clk0      (clk_i),
        .csb0      (~cs_data[5]),   // Active Low
        .web0      (~sram_d_we_i),  // Active Low
        .wmask0    (sram_d_be_i),
        .addr0     (sram_d_addr_i[SRAM_LOG_BLOCK_SIZE+2 -1 : 2]),
        .din0      (sram_d_wdata_i), 
        .dout0     (sram_d_read_vec[5]), 
        .clk1      (clk_i),
        .csb1      (~cs_inst[5]),    // Active Low
        .addr1     (sram_i_addr_i[SRAM_LOG_BLOCK_SIZE+2-1 : 2]), 
        .dout1     (sram_i_read_vec[5]) 
    );

    sky130_sram_2kbyte_1rw1r_32x512_8 #(.DELAY(0)) sram6 (
    `ifdef USE_POWER_PINS
        .vccd1(vccd1), // 1.8V
        .vssd1(vssd1), // Digital ground
    `endif
        .clk0      (clk_i),
        .csb0      (~cs_data[6]),   // Active Low
        .web0      (~sram_d_we_i),  // Active Low
        .wmask0    (sram_d_be_i),
        .addr0     (sram_d_addr_i[SRAM_LOG_BLOCK_SIZE+2 -1 : 2]),
        .din0      (sram_d_wdata_i), 
        .dout0     (sram_d_read_vec[6]), 
        .clk1      (clk_i),
        .csb1      (~cs_inst[6]),    // Active Low
        .addr1     (sram_i_addr_i[SRAM_LOG_BLOCK_SIZE+2-1 : 2]), 
        .dout1     (sram_i_read_vec[6]) 
    );

    sky130_sram_2kbyte_1rw1r_32x512_8 #(.DELAY(0)) sram7 (
    `ifdef USE_POWER_PINS
        .vccd1(vccd1), // 1.8V
        .vssd1(vssd1), // Digital ground
    `endif
        .clk0      (clk_i),
        .csb0      (~cs_data[7]),   // Active Low
        .web0      (~sram_d_we_i),  // Active Low
        .wmask0    (sram_d_be_i),
        .addr0     (sram_d_addr_i[SRAM_LOG_BLOCK_SIZE+2 -1 : 2]),
        .din0      (sram_d_wdata_i), 
        .dout0     (sram_d_read_vec[7]), 
        .clk1      (clk_i),
        .csb1      (~cs_inst[7]),    // Active Low
        .addr1     (sram_i_addr_i[SRAM_LOG_BLOCK_SIZE+2-1 : 2]), 
        .dout1     (sram_i_read_vec[7]) 
    );
    sky130_sram_2kbyte_1rw1r_32x512_8 #(.DELAY(0)) sram8 (
    `ifdef USE_POWER_PINS
        .vccd1(vccd1), // 1.8V
        .vssd1(vssd1), // Digital ground
    `endif
        .clk0      (clk_i),
        .csb0      (~cs_data[8]),   // Active Low
        .web0      (~sram_d_we_i),  // Active Low
        .wmask0    (sram_d_be_i),
        .addr0     (sram_d_addr_i[SRAM_LOG_BLOCK_SIZE+2 -1 : 2]),
        .din0      (sram_d_wdata_i), 
        .dout0     (sram_d_read_vec[8]), 
        .clk1      (clk_i),
        .csb1      (~cs_inst[8]),    // Active Low
        .addr1     (sram_i_addr_i[SRAM_LOG_BLOCK_SIZE+2-1 : 2]), 
        .dout1     (sram_i_read_vec[8]) 
    );

    sky130_sram_2kbyte_1rw1r_32x512_8 #(.DELAY(0)) sram9 (
    `ifdef USE_POWER_PINS
        .vccd1(vccd1), // 1.8V
        .vssd1(vssd1), // Digital ground
    `endif
        .clk0      (clk_i),
        .csb0      (~cs_data[9]),   // Active Low
        .web0      (~sram_d_we_i),  // Active Low
        .wmask0    (sram_d_be_i),
        .addr0     (sram_d_addr_i[SRAM_LOG_BLOCK_SIZE+2 -1 : 2]),
        .din0      (sram_d_wdata_i), 
        .dout0     (sram_d_read_vec[9]), 
        .clk1      (clk_i),
        .csb1      (~cs_inst[9]),    // Active Low
        .addr1     (sram_i_addr_i[SRAM_LOG_BLOCK_SIZE+2-1 : 2]), 
        .dout1     (sram_i_read_vec[9]) 
    );

    sky130_sram_2kbyte_1rw1r_32x512_8 #(.DELAY(0)) sram10 (
    `ifdef USE_POWER_PINS
        .vccd1(vccd1), // 1.8V
        .vssd1(vssd1), // Digital ground
    `endif
        .clk0      (clk_i),
        .csb0      (~cs_data[10]),   // Active Low
        .web0      (~sram_d_we_i),  // Active Low
        .wmask0    (sram_d_be_i),
        .addr0     (sram_d_addr_i[SRAM_LOG_BLOCK_SIZE+2 -1 : 2]),
        .din0      (sram_d_wdata_i), 
        .dout0     (sram_d_read_vec[10]), 
        .clk1      (clk_i),
        .csb1      (~cs_inst[10]),    // Active Low
        .addr1     (sram_i_addr_i[SRAM_LOG_BLOCK_SIZE+2-1 : 2]), 
        .dout1     (sram_i_read_vec[10]) 
    );

    sky130_sram_2kbyte_1rw1r_32x512_8 #(.DELAY(0)) sram11 (
    `ifdef USE_POWER_PINS
        .vccd1(vccd1), // 1.8V
        .vssd1(vssd1), // Digital ground
    `endif
        .clk0      (clk_i),
        .csb0      (~cs_data[11]),   // Active Low
        .web0      (~sram_d_we_i),  // Active Low
        .wmask0    (sram_d_be_i),
        .addr0     (sram_d_addr_i[SRAM_LOG_BLOCK_SIZE+2 -1 : 2]),
        .din0      (sram_d_wdata_i), 
        .dout0     (sram_d_read_vec[11]), 
        .clk1      (clk_i),
        .csb1      (~cs_inst[11]),    // Active Low
        .addr1     (sram_i_addr_i[SRAM_LOG_BLOCK_SIZE+2-1 : 2]), 
        .dout1     (sram_i_read_vec[11]) 
    );


`ifdef VERILATOR
    logic [31:0] _unused;
    
    always_comb begin : terminations
        // NOT USED
        _unused[31:0]  = sram_i_addr_i[31:0];
        _unused[1:0]   = sram_i_addr_i[1:0];
        _unused[31:0]  = sram_d_addr_i[31:0];
        _unused[1:0]   = sram_d_addr_i[1:0];
        _unused[0]     = sram_i_we_i;
        _unused[3:0]   = sram_i_be_i;
        _unused[31:0]  = sram_i_wdata_i;
    end

`endif

endmodule
