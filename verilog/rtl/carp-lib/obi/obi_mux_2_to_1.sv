`timescale 1ns/1ps
//////////////////////////////////////////////////////////////////////////////////
//
// Module Name: obi_mux_2_to_1
// Description: This is a 2-to-1 OBI (Open Bus Interface) MUX designed for use
//              the Cal Poly San Luis Obispo Computer Architecture Research 
//              Project (CARP)'s subset of the Open Hardware Group's OBI protocol.
//
//              The MUX accepts at most 1 outstanding transaction at a time, so
//              Multiple reads can not be performed concurrently.
//
//              The MUX has 2 masters connected to a single slave. The primary
//              Master gets priority over the secondary master, meaning if the 
//              primary master and the secondary master are in the address phase,
//              only the primary can advance to the response phase of a read 
//              transaction or close a write transaction. If the secondary master
//              is already in the response phase of a read transaction, it will
//              not be interrupted.
// 
// obi_mux_2_to_1 obi_mux_inst (
//     .clk_i        (),
//     .rst_ni       (),
//
//     .pri_req_i    (),
//     .pri_gnt_o    (),
//     .pri_addr_i   (),
//     .pri_we_i     (),
//     .pri_be_i     (),
//     .pri_wdata_i  (),
//     .pri_rvalid_o (),
//     .pri_rdata_o  (),
//
//     .sec_req_i    (),
//     .sec_gnt_o    (),
//     .sec_addr_i   (),
//     .sec_we_i     (),
//     .sec_be_i     (),
//     .sec_wdata_i  (),
//     .sec_rvalid_o (),
//     .sec_rdata_o  (),
//
//     .shr_req_o    (),
//     .shr_gnt_i    (),
//     .shr_addr_o   (),
//     .shr_we_o     (),
//     .shr_be_o     (),
//     .shr_wdata_o  (),
//     .shr_rvalid_i (),
//     .shr_rdata_i  (),
//
//     .bad_state_o  () );
// 
// SPDX-License-Identifier: Apache-2.0
//
//////////////////////////////////////////////////////////////////////////////////


module obi_mux_2_to_1 (
        input  logic        clk_i,
        input  logic        rst_ni,

        // Primary OBI interface
        input  logic        pri_req_i,
        output logic        pri_gnt_o,
        input  logic [31:0] pri_addr_i,
        input  logic        pri_we_i,
        input  logic [3:0]  pri_be_i,
        input  logic [31:0] pri_wdata_i,
        output logic        pri_rvalid_o,
        output logic [31:0] pri_rdata_o,

        // Secondary OBI interface
        input  logic        sec_req_i,
        output logic        sec_gnt_o,
        input  logic [31:0] sec_addr_i,
        input  logic        sec_we_i,
        input  logic [3:0]  sec_be_i,
        input  logic [31:0] sec_wdata_i,
        output logic        sec_rvalid_o,
        output logic [31:0] sec_rdata_o,

        // Shared OBI interface (slave)
        output logic        shr_req_o,
        input  logic        shr_gnt_i,
        output logic [31:0] shr_addr_o,
        output logic        shr_we_o,
        output logic [3:0]  shr_be_o,
        output logic [31:0] shr_wdata_o,
        input  logic        shr_rvalid_i,
        input  logic [31:0] shr_rdata_i,

        output logic        bad_state_o
);

  ///////////////////////////
  // Address Phase Routing //
  ///////////////////////////

  logic pri_accepted, sec_accepted;
  logic sec_posession, gnt_masked, available;

  assign sec_posession = ~pri_req_i;
  assign available     = shr_rvalid_i || !(pri_read_outstanding || sec_read_outstanding) ;
  assign gnt_masked    = shr_gnt_i && available;
  assign pri_accepted  = pri_req_i && pri_gnt_o && !pri_we_i;
  assign sec_accepted  = sec_req_i && sec_gnt_o && !sec_we_i;

  // gnt demux
  assign sec_gnt_o = (sec_posession ? gnt_masked : '0);
  assign pri_gnt_o = (sec_posession ? '0 : gnt_masked);
  
  // address signal mux
  assign shr_req_o   = sec_posession ? sec_req_i   : pri_req_i ;
  assign shr_addr_o  = sec_posession ? sec_addr_i  : pri_addr_i ;
  assign shr_we_o    = sec_posession ? sec_we_i    : pri_we_i ;
  assign shr_be_o    = sec_posession ? sec_be_i    : pri_be_i ;
  assign shr_wdata_o = sec_posession ? sec_wdata_i : pri_wdata_i ;

  ////////////////////////////
  // Response Phase Routing //
  ////////////////////////////

  logic pri_read_outstanding, sec_read_outstanding;

  // response signal demux
  assign sec_rvalid_o = sec_read_outstanding ? shr_rvalid_i : '0;
  assign sec_rdata_o  = sec_read_outstanding ? shr_rdata_i  : '0;
  assign pri_rvalid_o = pri_read_outstanding ? shr_rvalid_i : '0;
  assign pri_rdata_o  = pri_read_outstanding ? shr_rdata_i  : '0;

  // Response tracker
  always_ff @(posedge clk_i) begin
    if (!rst_ni) begin
        pri_read_outstanding <= '0;
        sec_read_outstanding <= '0;
    end else if (available) begin
        pri_read_outstanding <= pri_accepted;
        sec_read_outstanding <= sec_accepted;
    end
  end

  assign bad_state_o = (pri_read_outstanding && sec_read_outstanding);

endmodule // obi_mux_2_to_1
