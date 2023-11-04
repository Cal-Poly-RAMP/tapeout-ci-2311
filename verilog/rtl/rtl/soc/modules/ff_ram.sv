`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
// Module Name: ff_ram
// Description: 
// 
// SPDX-License-Identifier: Apache-2.0
//
//////////////////////////////////////////////////////////////////////////////////

module ff_ram #(
    parameter SRAM_BASE_ADDR = 32'h8000_0000,       // Base address for the memory
    parameter SRAM_SIZE      = 16,                  // Memory size in bytes
    parameter WORD_SIZE      = 32,                  // Size of a word in bits
    parameter ADDR_WIDTH     = $clog2(SRAM_SIZE/4)  // Number of address bits
) (
    input  wire                   clk_i,

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

    // Illegal memory access output
    output reg                    illegal_memory_o
    );

    // Internal memory declaration
    reg [WORD_SIZE-1:0] memory_array [0:(SRAM_SIZE/4)-1];

    // Word address calculation
    wire [ADDR_WIDTH-1:0] sram_d_word_addr = (sram_d_addr_i - SRAM_BASE_ADDR) >> 2;
    wire [ADDR_WIDTH-1:0] sram_i_word_addr = (sram_i_addr_i - SRAM_BASE_ADDR) >> 2;

    // Always ready
    assign sram_i_gnt_o = 1'b1;
    assign sram_d_gnt_o = 1'b1;

    /////////////////////////
    // 1 Read/Write 1 Read //
    /////////////////////////

    always @(posedge clk_i) 
    begin
        illegal_memory_o <= 0;
        
        // Data Read Operation
        sram_d_rvalid_o <= sram_d_req_i && !sram_d_we_i;
        if (sram_d_req_i && !sram_d_we_i) 
        begin
            if (sram_d_addr_i >= SRAM_BASE_ADDR && sram_d_addr_i < SRAM_BASE_ADDR + SRAM_SIZE) 
            begin
                sram_d_rdata_o <= memory_array[sram_d_word_addr];
            end else 
            begin
                sram_d_rdata_o <= 32'hDEADBEEF;
                illegal_memory_o <= 1'b1;
            end
        end

        // Data Write Operation
        if (sram_d_req_i && sram_d_we_i) 
        begin
            if (sram_d_addr_i >= SRAM_BASE_ADDR && 
                sram_d_addr_i <  SRAM_BASE_ADDR + SRAM_SIZE) 
            begin
                for (int i = 0; i < 4; i++) 
                    if (sram_d_be_i[i]) 
                        memory_array[sram_d_word_addr][i*8 +: 8] <= sram_d_wdata_i[i*8 +: 8];
            end else
                illegal_memory_o <= 1'b1;
        end
        
        // Instruction Read Operation
        sram_i_rvalid_o <= sram_i_req_i;
        if (sram_i_req_i) 
        begin
            if (sram_i_addr_i >= SRAM_BASE_ADDR && 
                sram_i_addr_i < SRAM_BASE_ADDR + SRAM_SIZE) 
            begin
                sram_i_rdata_o <= memory_array[sram_i_word_addr];
            end else 
            begin
                sram_i_rdata_o <= 32'hDEADBEEF;
                illegal_memory_o <= 1'b1;
            end
        end

        if (sram_i_we_i)
            illegal_memory_o <= 1'b1;
    end

    /////////////////////////
    // Linter Terminations //
    /////////////////////////

`ifdef VERILATOR
    logic [31:0] _unused;
    
    always_comb begin : terminations
        // NOT USED
        _unused[31:0]  = sram_i_addr_i[31:0];
        _unused[31:0]  = sram_d_addr_i[31:0];
        _unused[31:0]  = sram_i_word_addr[ADDR_WIDTH-1:0];
        _unused[31:0]  = sram_d_word_addr[ADDR_WIDTH-1:0];
        _unused[0]     = sram_i_we_i;
        _unused[3:0]   = sram_i_be_i;
        _unused[31:0]  = sram_i_wdata_i;
    end
`endif

endmodule
