`timescale 1ns/1ps
//////////////////////////////////////////////////////////////////////////////////
//
// Module Name: obi_req_driver
// Description: This module drives the req and stall signals for an OBI (Open Bus
//              Interface) master. The rd and wr inputs indicate that a read or 
//              write transaction is desired, and the gnt and rvalid signal come 
//              from the OBI slave device directly. The stall signal is routed 
//              back to the master for hazard management and the req signal is 
//              output onto the OBI bus.
//
//              The unit does not support multiple outstanding reads.
// 
// obi_req_driver obi_req_driver_inst (
//     .clk_i    (),
//     .rst_ni   (),
//     .rd_i     (),
//     .wr_i     (),
//     .gnt_i    (),
//     .rvalid_i (),
//     .stall_o  (),
//     .req_o    () );
//
// SPDX-License-Identifier: Apache-2.0
//
//////////////////////////////////////////////////////////////////////////////////


typedef enum logic { ADDRESS, RESPONSE } obi_phase_e;


module obi_req_driver(
        input logic     clk_i,
        input logic     rst_ni,

        input logic     rd_i,
        input logic     wr_i,

        input logic     gnt_i,
        input logic     rvalid_i,

        output logic    stall_o,
        output logic    req_o
);

  obi_phase_e NS, PS;

  logic stall_a, stall_next, stall_next_a;

  //////////////////
  // Stall Buffer //
  //////////////////

  always_ff @( negedge clk_i ) begin
    stall_o <= stall_a || stall_next;
    stall_next <= stall_next_a;
  end

  ////////////////
  // NS Decoder //
  ////////////////

  always_comb begin
    case (PS)
      
      ADDRESS: 
        NS = (rd_i && gnt_i) ? RESPONSE : ADDRESS;

      RESPONSE: 
        //NS = (rvalid_i && (!rd_i || (rd_i && !gnt_i))) ? ADDRESS : RESPONSE;
        NS = (rvalid_i && !(rd_i && gnt_i)) ? ADDRESS : RESPONSE;

      default:
        NS = ADDRESS;
    endcase
  end

  /////////////////
  // NS Register //
  /////////////////

  always_ff @(posedge clk_i) begin
    if (!rst_ni) begin
      PS <= ADDRESS;
    end
    else begin
      PS <= NS;
    end
  end


  ////////////////////
  // Output Decoder //
  ////////////////////

  always_comb begin
    case (PS)
      ADDRESS: begin
        req_o     = !rst_ni ? '0 : (rd_i || wr_i);
        stall_a = ((rd_i || wr_i) && !gnt_i);
        stall_next_a = ((rd_i || wr_i) && !gnt_i);
      end

      RESPONSE: begin
        req_o   = !rst_ni ? '0 : (rd_i || wr_i) && rvalid_i;
        stall_a = !rvalid_i;
        stall_next_a = (((rd_i || wr_i) && rvalid_i) && !gnt_i);
      end

      default: begin
        req_o   = '0;
        stall_a = '0;
        stall_next_a = 0;
      end
    endcase
  end


endmodule // obi_req_driver
