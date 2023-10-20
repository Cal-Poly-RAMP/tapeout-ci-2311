`timescale 1ns/1ps
//SRAM Wrapper for 48 kB SRAM

module sram_wrap #(
    parameter SRAM_BASE_ADDR      = 32'h8000_0000,
    parameter SRAM_NUM_BLOCKS     = 16,
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
        sram_d_rdata_o = 0;
        sram_i_rdata_o = 0;
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

    genvar j;
    generate 
        for (j = 0; j < SRAM_NUM_BLOCKS; j++ ) begin : sram_blocks
            sky130_sram_2kbyte_1rw1r_32x512_8
            #(.DELAY(0))
            sram1 (
            `ifdef USE_POWER_PINS
                .vccd1(vccd1),	// User area 1 1.8V power
                .vssd1(vssd1),	// User area 1 digital ground
            `endif
                .clk0      (clk_i),
                .csb0      (~cs_data[j]),   // Active Low
                .web0      (~sram_d_we_i),  // Active Low
                .wmask0    (sram_d_be_i),
                .addr0     (sram_d_addr_i[SRAM_LOG_BLOCK_SIZE+2 -1 : 2]),
                .din0      (sram_d_wdata_i), 
                .dout0     (sram_d_read_vec[j]), 
                .clk1      (clk_i),
                .csb1      (~cs_inst[j]),    // Active Low
                .addr1     (sram_i_addr_i[SRAM_LOG_BLOCK_SIZE+2-1 : 2]), 
                .dout1     (sram_i_read_vec[j]) 
            );
        end
    endgenerate

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

