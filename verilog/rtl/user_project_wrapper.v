`timescale 1ns/1ps
//////////////////////////////////////////////////////////////////////////////////
//
// Module Name: user_project_wrapper
// Description: This is Cal Poly's Computer Architecture Research Project (CARP)'s
//              first design tapeout. The design is a system on chip with 24kB of
//              SRAM, a RV32I core with a 5-stage pipeline, and a set of
//              peripherals for general use as a microcontroller.
//
//              The design is equipped with logic analyzer probes, clock and reset
//              controls, and the ability for the management core to read and write
//              to main memory; the intent is to measure reliability and wear of 
//              the Sky130 process and architectural components in Low Earth 
//              Orbit (LEO).
// 
// SPDX-License-Identifier: Apache-2.0
//
//////////////////////////////////////////////////////////////////////////////////

`default_nettype none

module user_project_wrapper #(
    parameter BITS = 32
) (
`ifdef USE_POWER_PINS
    inout vdda1,	// User area 1 3.3V supply
    inout vdda2,	// User area 2 3.3V supply
    inout vssa1,	// User area 1 analog ground
    inout vssa2,	// User area 2 analog ground
    inout vccd1,	// User area 1 1.8V supply
    inout vccd2,	// User area 2 1.8v supply
    inout vssd1,	// User area 1 digital ground
    inout vssd2,	// User area 2 digital ground
`endif

    // Wishbone Slave ports (WB MI A)
    input wb_clk_i,
    input wb_rst_i,
    input wbs_stb_i,
    input wbs_cyc_i,
    input wbs_we_i,
    input [3:0] wbs_sel_i,
    input [31:0] wbs_dat_i,
    input [31:0] wbs_adr_i,
    output wbs_ack_o,
    output [31:0] wbs_dat_o,

    // Logic Analyzer Signals
    input  [127:0] la_data_in,
    output [127:0] la_data_out,
    input  [127:0] la_oenb,

    // IOs
    input  [37:0] io_in,
    output [37:0] io_out,
    output [37:0] io_oeb,

    // Analog (direct connection to GPIO pad---use with caution)
    // Note that analog I/O is not available on the 7 lowest-numbered
    // GPIO pads, and so the analog_io indexing is offset from the
    // GPIO indexing by 7 (also upper 2 GPIOs do not have analog_io).
    inout [28:0] analog_io,

    // Independent clock (on independent integer divider)
    input   user_clock2,

    // User maskable interrupt signals
    output [2:0] user_irq
);

wire [37:0] soc_io_oeb_no;
assign io_oeb = soc_io_oeb_no;

soc soc_i (
    .clk_i              (user_clock2),
`ifdef USE_POWER_PINS
    .vccd1              (vccd1),
    .vssd1              (vssd1),
`endif

    // Caravel Wishbone Interface
    .caravel_wb_clk_i   (wb_clk_i),
    .caravel_wb_rst_i   (wb_rst_i),
    .caravel_wbs_stb_i  (wbs_stb_i),
    .caravel_wbs_cyc_i  (wbs_cyc_i),
    .caravel_wbs_we_i   (wbs_we_i),
    .caravel_wbs_sel_i  (wbs_sel_i),
    .caravel_wbs_dat_i  (wbs_dat_i),
    .caravel_wbs_adr_i  (wbs_adr_i),
    .caravel_wbs_ack_o  (wbs_ack_o),
    .caravel_wbs_dat_o  (wbs_dat_o),

    // Logic Analyzer Signals
    .la_data_i          (la_data_in),
    .la_data_o          (la_data_out),

    // GPIO Pins
    .gpio_i             (io_in),         // GPIO input pins, if configured as input
    .gpio_o             (io_out),        // GPIO output pins, if configured as output
    .gpio_oeb_no        (soc_io_oeb_no), // Drive low to enable output pin

    // Other Caravel Signals
    .caravel_interrupt_o(user_irq)
);


`ifdef VERILATOR
    logic [127:0] _unused;
    
    always_comb begin : terminations
        _unused = la_oenb;
        _unused[31:0] = BITS;
    end

`endif

endmodule	// user_project_wrapper

`default_nettype wire

// SPDX-FileCopyrightText: 2020 Efabless Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// SPDX-License-Identifier: Apache-2.0
