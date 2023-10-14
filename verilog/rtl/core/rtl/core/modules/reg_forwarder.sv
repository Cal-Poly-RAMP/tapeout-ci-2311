`timescale 1ns/1ps
//////////////////////////////////////////////////////////////////////////////////
//
// Module Name: reg_forwarder
// Description: A simple 2-stage forward unit for a source register. Load use
//              hazards are detected by this unit, but acting on them is left
//              to the user.
//
//   reg_forwarder i_rsx_forwarder (
//                      .ex_stage_i,        (),
//                      .mem_stage_i,       (),
//                      .rs_i               (),
//                      .rs_data_i          (),
//                      .rs_used_i          (),
//                  
//                      .rs_data_ao         (),
//                      .load_use_hazard_ao () );
// 
//////////////////////////////////////////////////////////////////////////////////

`include "pipe_regs.sv"

module reg_forwarder (
    input  data_fwd_t  ex_stage_i, mem_stage_i,
    input logic  [4:0] rs_i,
    input logic [31:0] rs_data_i,
    input logic        rs_used_i,

    output logic [31:0] rs_data_ao,
    output logic        load_use_hazard_ao
);

  // Signals to identify if a RAW conflict is possible (registers_i match)
  logic mem_conflict, ex_conflict;

  // Signals to identify 
  logic mem_raw, ex_raw;

  // Updated data after mem stage
  logic [31:0] data_updated_mem;

  always_comb begin
    mem_conflict = (rs_i == mem_stage_i.rd);
    ex_conflict  = (rs_i == ex_stage_i.rd);

    mem_raw = (mem_conflict && mem_stage_i.rf_wr_en && mem_stage_i.valid && rs_used_i);
    ex_raw = (ex_conflict && ex_stage_i.rf_wr_en && ex_stage_i.valid && rs_used_i);

    // Forward from the last stage, with lower precedence
    data_updated_mem = mem_raw ? mem_stage_i.rd_data : rs_data_i;

    // Forward from the execture stage and signal a LU hazard if needed
    rs_data_ao = ex_raw ? ex_stage_i.rd_data : data_updated_mem;
    load_use_hazard_ao = ex_raw && ex_stage_i.mem_read;
  end

`ifdef VERILATOR
  logic _unused;
  assign _unused = mem_stage_i.mem_read;
`endif

endmodule // reg_forwarder
