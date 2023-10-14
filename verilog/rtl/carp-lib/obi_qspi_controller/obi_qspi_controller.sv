`timescale 1ns/1ps

module obi_qspi_controller # (parameter CFG_REG_ADDR = 32'h3FFF_FFFF)
(
    input clk_i,
    input rst_ni,
    // OBI input from master
    input  logic        obi_req_i,      // Done
    output logic        obi_gnt_o,      // Done
    input  logic [31:0] obi_addr_i,     // Done
    input  logic        obi_we_i,       // Not used
    input  logic [3:0]  obi_be_i,       // Not used
    input  logic [31:0] obi_wdata_i,    // Not used
    output logic        obi_rvalid_o,   // Done
    output logic [31:0] obi_rdata_o,    // Done

    // QSPI signals
    output logic flash_csb_o,
    output logic flash_clk_o,

    output logic flash_io0_oe_o,
    output logic flash_io1_oe_o,
    output logic flash_io2_oe_o,
    output logic flash_io3_oe_o,

    output logic flash_io0_data_o,
    output logic flash_io1_data_o,
    output logic flash_io2_data_o,
    output logic flash_io3_data_o,

    input  logic flash_io0_data_i,
    input  logic flash_io1_data_i,
    input  logic flash_io2_data_i,
    input  logic flash_io3_data_i,

    output logic illegal_write_o
);

    ///////////////////////
    // SPI Read Tracking //
    ///////////////////////

    logic read_in_progress, read_ready;
    logic [31:0] addr_latched;

    assign obi_gnt_o = !read_in_progress || illegal_write_o;
    assign illegal_write_o = obi_req_i && obi_we_i && !cfgreg_addr_selected;

    always_ff @(posedge clk_i) begin
        if (!rst_ni) begin
            read_in_progress <= '0;
        end else if (!read_in_progress) begin
            read_in_progress <= obi_req_i && !obi_we_i && !cfgreg_addr_selected;
            addr_latched <= obi_addr_i;
        end else begin
            read_in_progress <= ~read_ready;
        end
    end

    ////////////////////////////////////
    // Configuration Register Control //
    ////////////////////////////////////

    logic cfg_write_requested, cfg_read_requested, cfgreg_addr_selected;
    logic [3:0] cfgreg_we;
    assign cfgreg_addr_selected = (obi_addr_i == CFG_REG_ADDR);
    assign cfg_write_requested = cfgreg_addr_selected && obi_req_i && !read_in_progress && obi_we_i;
    assign cfg_read_requested  = cfgreg_addr_selected && obi_req_i && !read_in_progress && !obi_we_i;
    assign cfgreg_we = cfg_write_requested ? obi_be_i : '0;


    //////////////////
    // Response MUX //
    //////////////////

    logic[31:0] cfg_dout_a, spi_dout_a;

    // Only 
    always_ff @(posedge clk_i) begin
        if(!rst_ni) begin
            obi_rdata_o  <= 32'hDEAD_BEEF;
            obi_rvalid_o <= '0;
        end else if (cfg_read_requested) begin
            // Immediately serve response for cfg reads, hold until next erquest
            obi_rdata_o  <= cfg_dout_a;
            obi_rvalid_o <= '1;
        end else if (read_in_progress && read_ready) begin
            // SPI read in progress complete, latch in data and rvalid until next request
            obi_rdata_o  <= spi_dout_a;
            obi_rvalid_o <= '1;
        end else if (read_in_progress && !read_ready) begin
            // SPI read in progress but not complete
            obi_rvalid_o <= '0;
        end else begin
            // Nothing in progress, disable rvalid on ext cycle for incoming SPI reads
            obi_rvalid_o <= ~obi_req_i;
        end
    end
    

    spimemio spimemio_inst (
        .clk           (clk_i),
        .resetn        (rst_ni),

        .valid         (read_in_progress || (!read_in_progress && obi_req_i) ),
        .ready         (read_ready),
        .addr          (addr_latched[23:0]),
        .rdata         (spi_dout_a),

        .flash_csb     (flash_csb_o),
        .flash_clk     (flash_clk_o),

        .flash_io0_oe  (flash_io0_oe_o),
        .flash_io1_oe  (flash_io1_oe_o),
        .flash_io2_oe  (flash_io2_oe_o),
        .flash_io3_oe  (flash_io3_oe_o),

        .flash_io0_do  (flash_io0_data_o),
        .flash_io1_do  (flash_io1_data_o),
        .flash_io2_do  (flash_io2_data_o),
        .flash_io3_do  (flash_io3_data_o),

        .flash_io0_di  (flash_io0_data_i),
        .flash_io1_di  (flash_io1_data_i),
        .flash_io2_di  (flash_io2_data_i),
        .flash_io3_di  (flash_io3_data_i),

        .cfgreg_we     (cfgreg_we),
        .cfgreg_di     (obi_wdata_i),
        .cfgreg_do     (cfg_dout_a)
    );

`ifdef verilator
    logic [31:0] _unused;
    always_comb begin
        _unused = addr_latched;
    end
`endif

endmodule
