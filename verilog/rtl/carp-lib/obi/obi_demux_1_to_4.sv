`timescale 1ns/1ps

module obi_demux_1_to_4 #(
        parameter PORT1_BASE_ADDR = 32'h00001000,
        parameter PORT1_END_ADDR  = 32'h00001FFF,
        parameter PORT2_BASE_ADDR = 32'h80000000,
        parameter PORT2_END_ADDR  = 32'h8000FFFF,
        parameter PORT3_BASE_ADDR = 32'h20000000,
        parameter PORT3_END_ADDR  = 32'h3FFFFFFF,
        parameter PORT4_BASE_ADDR = 32'h10000000,
        parameter PORT4_END_ADDR  = 32'h10001FFF )
(
    input  logic        clk_i,
    input  logic        rst_ni,

    // Controller (Master) OBI interface
    input  logic        ctrl_req_i,
    output logic        ctrl_gnt_o,
    input  logic [31:0] ctrl_addr_i,
    input  logic        ctrl_we_i,
    input  logic [3:0]  ctrl_be_i,
    input  logic [31:0] ctrl_wdata_i,
    output logic        ctrl_rvalid_o,
    output logic [31:0] ctrl_rdata_o,

    // Port 1 (Slave) OBI interface
    output logic        port1_req_o,
    input  logic        port1_gnt_i,
    output logic [31:0] port1_addr_o,
    output logic        port1_we_o,
    output logic [3:0]  port1_be_o,
    output logic [31:0] port1_wdata_o,
    input  logic        port1_rvalid_i,
    input  logic [31:0] port1_rdata_i,

    // Port 2 (Slave) OBI interface
    output logic        port2_req_o,
    input  logic        port2_gnt_i,
    output logic [31:0] port2_addr_o,
    output logic        port2_we_o,
    output logic [3:0]  port2_be_o,
    output logic [31:0] port2_wdata_o,
    input  logic        port2_rvalid_i,
    input  logic [31:0] port2_rdata_i,

    // Port 3 (Slave) OBI interface
    output logic        port3_req_o,
    input  logic        port3_gnt_i,
    output logic [31:0] port3_addr_o,
    output logic        port3_we_o,
    output logic [3:0]  port3_be_o,
    output logic [31:0] port3_wdata_o,
    input  logic        port3_rvalid_i,
    input  logic [31:0] port3_rdata_i,

    // Port 4 (Slave) OBI interface
    output logic        port4_req_o,
    input  logic        port4_gnt_i,
    output logic [31:0] port4_addr_o,
    output logic        port4_we_o,
    output logic [3:0]  port4_be_o,
    output logic [31:0] port4_wdata_o,
    input  logic        port4_rvalid_i,
    input  logic [31:0] port4_rdata_i,

    output logic        bad_state_o
);

    // Define address select enumeration
    typedef enum logic [2:0] {
        NONE,
        PORT1,
        PORT2,
        PORT3,
        PORT4
    } addr_sel_e;

    addr_sel_e addr_sel, resp_sel;

    /////////////////////
    // Address Decoder //
    /////////////////////

    // Generate address select signal based on input address
    /* verilator lint_off UNSIGNED */
    always_comb begin
        if ((ctrl_addr_i >= PORT1_BASE_ADDR) && (ctrl_addr_i <= PORT1_END_ADDR))
            addr_sel = PORT1;
        else if ((ctrl_addr_i >= PORT2_BASE_ADDR) && (ctrl_addr_i <= PORT2_END_ADDR))
            addr_sel = PORT2;
        else if ((ctrl_addr_i >= PORT3_BASE_ADDR) && (ctrl_addr_i <= PORT3_END_ADDR))
            addr_sel = PORT3;
        else if ((ctrl_addr_i >= PORT4_BASE_ADDR) && (ctrl_addr_i <= PORT4_END_ADDR))
            addr_sel = PORT4;
        else
            addr_sel = NONE;
    end
    /* verilator lint_on UNSIGNED */

    ///////////////////////////
    // Address Phase Routing //
    ///////////////////////////

    always_comb begin
        // Multiplex portx_gnt_i to ctrl_gnt_o
        case (addr_sel)
            PORT1: ctrl_gnt_o = port1_gnt_i;
            PORT2: ctrl_gnt_o = port2_gnt_i;
            PORT3: ctrl_gnt_o = port3_gnt_i;
            PORT4: ctrl_gnt_o = port4_gnt_i;
            default: ctrl_gnt_o = 1; // DEADBEEF response
        endcase
    end

    always_comb begin
        // Demultiplex ctrl_req_i to portx_req_o
        port1_req_o = (addr_sel == PORT1) ? ctrl_req_i : 1'b0;
        port2_req_o = (addr_sel == PORT2) ? ctrl_req_i : 1'b0;
        port3_req_o = (addr_sel == PORT3) ? ctrl_req_i : 1'b0;
        port4_req_o = (addr_sel == PORT4) ? ctrl_req_i : 1'b0;
    end

    // Assign ctrl signals to all portx outputs
    assign port1_addr_o  = ctrl_addr_i;
    assign port1_wdata_o = ctrl_wdata_i;
    assign port1_be_o    = ctrl_be_i;
    assign port1_we_o    = ctrl_we_i;

    assign port2_addr_o  = ctrl_addr_i;
    assign port2_wdata_o = ctrl_wdata_i;
    assign port2_be_o    = ctrl_be_i;
    assign port2_we_o    = ctrl_we_i;

    assign port3_addr_o  = ctrl_addr_i;
    assign port3_wdata_o = ctrl_wdata_i;
    assign port3_be_o    = ctrl_be_i;
    assign port3_we_o    = ctrl_we_i;

    assign port4_addr_o  = ctrl_addr_i;
    assign port4_wdata_o = ctrl_wdata_i;
    assign port4_be_o    = ctrl_be_i;
    assign port4_we_o    = ctrl_we_i;

    ////////////////////////////
    // Response Phase Routing //
    ////////////////////////////

    logic accepted;
    assign accepted = ctrl_req_i && ctrl_gnt_o && !ctrl_we_i;

    // Response tracking (resp_sel)
    always_ff @(posedge clk_i) begin
        if (!rst_ni)
            resp_sel <= NONE;
        else if (accepted) begin
            resp_sel <= addr_sel;
        end
    end

    always_comb begin
        // Multiplex portx_rvalid_i to ctrl_rvalid_o based on resp_sel
        case (resp_sel)
            PORT1: ctrl_rvalid_o = port1_rvalid_i;
            PORT2: ctrl_rvalid_o = port2_rvalid_i;
            PORT3: ctrl_rvalid_o = port3_rvalid_i;
            PORT4: ctrl_rvalid_o = port4_rvalid_i;
            default: ctrl_rvalid_o = 1; // DEADBEEF response
        endcase
    end

    always_comb begin
        // Multiplex portx_rdata_i to ctrl_rdata_o based on resp_sel
        case (resp_sel)
            PORT1: ctrl_rdata_o = port1_rdata_i;
            PORT2: ctrl_rdata_o = port2_rdata_i;
            PORT3: ctrl_rdata_o = port3_rdata_i;
            PORT4: ctrl_rdata_o = port4_rdata_i;
            default: ctrl_rdata_o = 32'hDEAD_BEEF; // DEADBEEF response
        endcase
    end

    assign bad_state_o = (addr_sel == NONE) && ctrl_req_i;

endmodule
