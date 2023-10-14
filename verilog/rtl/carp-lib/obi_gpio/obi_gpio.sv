`timescale 1ns/1ps

module obi_gpio # (parameter NUM_PINS = 26, parameter BASE_ADDR = 32'h10000000)
(
    input clk_i,
    input rst_ni,
    // OBI input from master
    input  logic                obi_req_i,      // High when read or write requested. If gnt and req are high, a transaction is accepted
    output logic                obi_gnt_o,      // High when device can accept transactions (single cycle, so always high)
    input  logic [31:0]         obi_addr_i,     // Done
    input  logic                obi_we_i,       // High for writes, low for reads
    input  logic [3:0]          obi_be_i,       // Byte enable 1 for each byte to write to
    input  logic [31:0]         obi_wdata_i,    // Write Data
    output logic                obi_rvalid_o,   // High iff the read data is available from the most recent request
    output logic [31:0]         obi_rdata_o,    // Read data

    // GPIO pins
    output logic [NUM_PINS-1:0] gpio_oe_e,      // Bitwise output enable (active low)
    output logic [NUM_PINS-1:0] gpio_af_o,      // Alternate function enable (active high)
    output logic [NUM_PINS-1:0] gpio_dat_o,     // Data output
    input  logic [NUM_PINS-1:0] gpio_dat_i,     // Data input

    output logic                illegal_write_o // Flag thrown for illegal writes
);

    // Register definitions
    logic [31:0] reg_out_data;
    logic [31:0] reg_in_data;
    logic [31:0] reg_mode_sel;
    logic [31:0] reg_af_sel;

    // Assign GPIO pin behavior
    assign gpio_oe_e   = reg_mode_sel[NUM_PINS-1:0];
    assign gpio_af_o   = reg_af_sel[NUM_PINS-1:0];
    assign gpio_dat_o  = reg_out_data[NUM_PINS-1:0];

    localparam DEAD_PINS = 32-NUM_PINS;
    logic [DEAD_PINS-1:0] leading_zeros = '0;
    assign reg_in_data = {leading_zeros, gpio_dat_i};

    logic [31:0] byte_mask;
    assign byte_mask = {obi_be_i[3], obi_be_i[3], obi_be_i[3], obi_be_i[3], 
                        obi_be_i[3], obi_be_i[3], obi_be_i[3], obi_be_i[3], 
                        obi_be_i[2], obi_be_i[2], obi_be_i[2], obi_be_i[2], 
                        obi_be_i[2], obi_be_i[2], obi_be_i[2], obi_be_i[2], 
                        obi_be_i[1], obi_be_i[1], obi_be_i[1], obi_be_i[1], 
                        obi_be_i[1], obi_be_i[1], obi_be_i[1], obi_be_i[1], 
                        obi_be_i[0], obi_be_i[0], obi_be_i[0], obi_be_i[0], 
                        obi_be_i[0], obi_be_i[0], obi_be_i[0], obi_be_i[0]};

    // OBI Read and Write logic
    always_ff @(posedge clk_i) begin
        if (!rst_ni) begin
            reg_out_data <= 32'b0;
            reg_mode_sel <= 32'b0;
            reg_af_sel   <= 32'b0;
        end else if (obi_req_i) begin
            illegal_write_o <= '0; 
            if (obi_we_i) begin
                case(obi_addr_i)
                    BASE_ADDR:         reg_out_data   <= (reg_out_data & ~byte_mask) | (obi_wdata_i & byte_mask);
                    BASE_ADDR + 4:     ; // Write ignored to input data register
                    BASE_ADDR + 8:     reg_mode_sel   <= (reg_mode_sel & ~byte_mask) | (obi_wdata_i & byte_mask);
                    BASE_ADDR + 12:    reg_af_sel     <= (reg_af_sel & ~byte_mask) | (obi_wdata_i & byte_mask);
                    default:           illegal_write_o <= '1; 
                endcase
            end else begin
                case(obi_addr_i)
                    BASE_ADDR:         obi_rdata_o <= reg_out_data;
                    BASE_ADDR + 4:     obi_rdata_o <= reg_in_data;
                    BASE_ADDR + 8:     obi_rdata_o <= reg_mode_sel;
                    BASE_ADDR + 12:    obi_rdata_o <= reg_af_sel;
                    default:           obi_rdata_o <= 32'hDEAD_BEEF;
                endcase
            end
        end
    end

    // Default assignment (single cycle registers)
    assign obi_gnt_o = 1'b1;
    assign obi_rvalid_o = 1'b1;

endmodule
