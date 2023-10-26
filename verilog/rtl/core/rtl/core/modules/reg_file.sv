`timescale 1ns/1ps
//////////////////////////////////////////////////////////////////////////////////
//
// Module Name: reg_file
// Description: A 32 x 32-bit register file. Writes are syncronous and negedge 
//              sensitive, but reads are asyncronous from 2 ports. x0 is 
//              read-only and always returns 0.
//
//     reg_file i_reg_file (
//                .clk_i        (),
//                .read1_i      (),
//                .read2_i      (),
//                .wr_reg_i     (),
//                .wr_data_i    (),
//                .wr_en_i      (),
//                .data1_ao     (),
//                .data2_ao     () );
//
// SPDX-License-Identifier: Apache-2.0 
//
//////////////////////////////////////////////////////////////////////////////////


module reg_file(
    input               clk_i,     // System clock (negedge sensitive!)

    input         [4:0] read1_i,   // Register 1 Number (read)
    input         [4:0] read2_i,   // Register 2 Number (read)
    input         [4:0] wr_reg_i,  // Destination Register Number (write)

    input        [31:0] wr_data_i, // Data to write
    input               wr_en_i,   // Write control
    
    output logic [31:0] data1_ao,  // Read 1 data output
    output logic [31:0] data2_ao   // Read 2 data output
    );
    
    // Register File Declaration
    logic [31:0] RF [31:0]; 
    
    // Read control. Returns 0 if reading from x0.
    assign data1_ao = (read1_i != 0) ? RF[read1_i] : '0;
    assign data2_ao = (read2_i != 0) ? RF[read2_i] : '0;
    
    // Write control (ON NEGEDGE). Will not write to x0.
    always_ff @ (negedge clk_i) begin
        if(wr_en_i && wr_reg_i != 0) 
            RF[wr_reg_i] <= wr_data_i;
    end

 endmodule
