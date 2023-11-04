`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
// Module Name: wb_to_obi
// 
// SPDX-License-Identifier: Apache-2.0
//
//////////////////////////////////////////////////////////////////////////////////

module wb_to_obi (
    input               clk_i,
    // WishBone Master Ports
    input               wb_rst_i,  // Active high!
    input               wbs_stb_i, // Done
    input               wbs_cyc_i, // Not Used in OBI
    input               wbs_we_i,  // Done
    input [3:0]         wbs_sel_i, // Done
    input [31:0]        wbs_dat_i, // Done
    input [31:0]        wbs_adr_i, // Done
    output logic        wbs_ack_o, // Done
    output logic [31:0] wbs_dat_o, // Done

    // OBI Slave Ports
    output logic        req_o,    // Done
    input               gnt_i,    
    output logic [31:0] addr_o,   // Done 
    output logic        we_o,     // Done  
    output logic [3:0]  be_o,     // Done
    output logic [31:0] wdata_o,  // Done
    input               rvalid_i, 
    input [31:0]        rdata_i   // Done
    );

    logic read_outstanding, write_completed, read_accepted_a, write_accepted_a;
    assign read_accepted_a  = (req_o && gnt_i) && !wbs_we_i;
    assign write_accepted_a = (req_o && gnt_i) && wbs_we_i;

    // Read transaction tracker
    always_ff @(posedge clk_i) begin
        if (wb_rst_i)
            read_outstanding <= '0;
        else begin
            if (read_outstanding && (rvalid_i && !read_accepted_a))
                read_outstanding <= '0;
            if (!read_outstanding && read_accepted_a)
                read_outstanding <= '1;
        end
    end
        
    // Write completion tracker
    always_ff @(posedge clk_i) begin
        write_completed <= write_accepted_a;
    end

    // Address Signals
    assign req_o     = wbs_stb_i && !read_outstanding;
    assign addr_o    = wbs_adr_i;
    assign we_o      = wbs_we_i;
    assign be_o      = wbs_sel_i;
    assign wdata_o   = wbs_dat_i;

    // Response Signals
    assign wbs_dat_o = rdata_i;
    assign wbs_ack_o = write_completed || 
                      (read_accepted_a && rvalid_i) ||
                      (read_outstanding && rvalid_i);

    `ifdef verilator
        logic _unused;
        assign _unused = wbs_cyc_i;
    `endif 

endmodule
