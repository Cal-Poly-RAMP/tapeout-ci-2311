`timescale 1ns/1ps

module memory_interface_unit #(
            parameter BOOTLOADER_BASE_ADDR = 32'h00000000,
            parameter BOOTLOADER_END_ADDR  = 32'h00000FFF,
            parameter SRAM_BASE_ADDR       = 32'h80000000,
            parameter SRAM_END_ADDR        = 32'h8000FFFF,
            parameter FLASH_BASE_ADDR      = 32'h20000000,
            parameter FLASH_END_ADDR       = 32'h3FFFFFFF,
            parameter PERIPHERAL_BASE_ADDR = 32'h10000000,
            parameter PERIPHERAL_END_ADDR  = 32'h10001FFF ) 
(
        input  logic        clk_i,
        input  logic        rst_ni,

        // dmem OBI interface
        input  logic        dmem_req_i,
        output logic        dmem_gnt_o,
        input  logic [31:0] dmem_addr_i,
        input  logic        dmem_we_i,
        input  logic [3:0]  dmem_be_i,
        input  logic [31:0] dmem_wdata_i,
        output logic        dmem_rvalid_o,
        output logic [31:0] dmem_rdata_o,

        // imem OBI interface
        input  logic        imem_req_i,
        output logic        imem_gnt_o,
        input  logic [31:0] imem_addr_i,
        input  logic        imem_we_i,
        input  logic [3:0]  imem_be_i,
        input  logic [31:0] imem_wdata_i,
        output  logic       imem_rvalid_o,
        output logic [31:0] imem_rdata_o,

        // sram_d OBI interface
        output logic        sram_d_req_o,
        input  logic        sram_d_gnt_i,
        output logic [31:0] sram_d_addr_o,
        output logic        sram_d_we_o,
        output logic [3:0]  sram_d_be_o,
        output logic [31:0] sram_d_wdata_o,
        input  logic        sram_d_rvalid_i,
        input  logic [31:0] sram_d_rdata_i,

        // sram_i OBI interface
        output logic        sram_i_req_o,
        input  logic        sram_i_gnt_i,
        output logic [31:0] sram_i_addr_o,
        output logic        sram_i_we_o,
        output logic [3:0]  sram_i_be_o,
        output logic [31:0] sram_i_wdata_o,
        input  logic        sram_i_rvalid_i,
        input  logic [31:0] sram_i_rdata_i,

        // peripheral OBI interface
        output logic        peripheral_req_o,
        input  logic        peripheral_gnt_i,
        output logic [31:0] peripheral_addr_o,
        output logic        peripheral_we_o,
        output logic [3:0]  peripheral_be_o,
        output logic [31:0] peripheral_wdata_o,
        input  logic        peripheral_rvalid_i,
        input  logic [31:0] peripheral_rdata_i,

        // flash OBI interface
        output logic        flash_req_o,
        input  logic        flash_gnt_i,
        output logic [31:0] flash_addr_o,
        output logic        flash_we_o,
        output logic [3:0]  flash_be_o,
        output logic [31:0] flash_wdata_o,
        input  logic        flash_rvalid_i,
        input  logic [31:0] flash_rdata_i,

        input  logic        copy_flash_i,
        output logic        illegal_access_o
);

    // btld_d bus
    logic        btld_d_req, btld_d_gnt, btld_d_we, btld_d_rvalid;
    logic [31:0] btld_d_addr, btld_d_wdata, btld_d_rdata;
    logic [3:0]  btld_d_be;

    // btld_i bus
    logic        btld_i_req, btld_i_gnt, btld_i_we, btld_i_rvalid;
    logic [31:0] btld_i_addr, btld_i_wdata, btld_i_rdata;
    logic [3:0]  btld_i_be;

    logic illegal_xbar, illegal_access_boot, illegal_write_boot;

  //////////////////
  // OBI Crossbar //
  //////////////////

obi_xbar #(
    .BOOTLOADER_BASE_ADDR (BOOTLOADER_BASE_ADDR),
    .BOOTLOADER_END_ADDR  (BOOTLOADER_END_ADDR),
    .SRAM_BASE_ADDR       (SRAM_BASE_ADDR),
    .SRAM_END_ADDR        (SRAM_END_ADDR),
    .FLASH_BASE_ADDR      (FLASH_BASE_ADDR),
    .FLASH_END_ADDR       (FLASH_END_ADDR),
    .PERIPHERAL_BASE_ADDR (PERIPHERAL_BASE_ADDR),
    .PERIPHERAL_END_ADDR  (PERIPHERAL_END_ADDR)
) i_obi_xbar (
    .clk_i,
    .rst_ni,

    .dmem_req_i,
    .dmem_gnt_o,
    .dmem_addr_i,
    .dmem_we_i,
    .dmem_be_i,
    .dmem_wdata_i,
    .dmem_rvalid_o,
    .dmem_rdata_o,

    .imem_req_i,
    .imem_gnt_o,
    .imem_addr_i,
    .imem_we_i,
    .imem_be_i,
    .imem_wdata_i,
    .imem_rvalid_o,
    .imem_rdata_o,

    .sram_d_req_o,
    .sram_d_gnt_i,
    .sram_d_addr_o,
    .sram_d_we_o,
    .sram_d_be_o,
    .sram_d_wdata_o,
    .sram_d_rvalid_i,
    .sram_d_rdata_i,

    .sram_i_req_o,
    .sram_i_gnt_i,
    .sram_i_addr_o,
    .sram_i_we_o,
    .sram_i_be_o,
    .sram_i_wdata_o,
    .sram_i_rvalid_i,
    .sram_i_rdata_i,

    .btld_d_req_o         (btld_d_req),
    .btld_d_gnt_i         (btld_d_gnt),
    .btld_d_addr_o        (btld_d_addr),
    .btld_d_we_o          (btld_d_we),
    .btld_d_be_o          (btld_d_be),
    .btld_d_wdata_o       (btld_d_wdata),
    .btld_d_rvalid_i      (btld_d_rvalid),
    .btld_d_rdata_i       (btld_d_rdata),

    .btld_i_req_o         (btld_i_req),
    .btld_i_gnt_i         (btld_i_gnt),
    .btld_i_addr_o        (btld_i_addr),
    .btld_i_we_o          (btld_i_we),
    .btld_i_be_o          (btld_i_be),
    .btld_i_wdata_o       (btld_i_wdata),
    .btld_i_rvalid_i      (btld_i_rvalid),
    .btld_i_rdata_i       (btld_i_rdata),

    .peripheral_req_o,
    .peripheral_gnt_i,
    .peripheral_addr_o,
    .peripheral_we_o,
    .peripheral_be_o,
    .peripheral_wdata_o,
    .peripheral_rvalid_i,
    .peripheral_rdata_i,

    .flash_req_o,
    .flash_gnt_i,
    .flash_addr_o,
    .flash_we_o,
    .flash_be_o,
    .flash_wdata_o,
    .flash_rvalid_i,
    .flash_rdata_i,

    .illegal_access_o     (illegal_xbar)
);

  /////////////////////////
  // Internal Bootloader //
  /////////////////////////

  bootloader i_bootloader (
    .clk_i,
    .rst_ni,

    .dmem_req_i         (btld_d_req),
    .dmem_gnt_o         (btld_d_gnt),
    .dmem_addr_i        (btld_d_addr),
    .dmem_we_i          (btld_d_we),
    .dmem_be_i          (btld_d_be),
    .dmem_wdata_i       (btld_d_wdata),
    .dmem_rvalid_o      (btld_d_rvalid),
    .dmem_rdata_o       (btld_d_rdata),

    .imem_req_i         (btld_i_req),
    .imem_gnt_o         (btld_i_gnt),
    .imem_addr_i        (btld_i_addr),
    .imem_we_i          (btld_i_we),
    .imem_be_i          (btld_i_be),
    .imem_wdata_i       (btld_i_wdata),
    .imem_rvalid_o      (btld_i_rvalid),
    .imem_rdata_o       (btld_i_rdata),

    .copy_flash_i,
    .illegal_access_o   (illegal_access_boot),
    .illegal_write_o    (illegal_write_boot)
  );

  /////////////////////////////
  // Illegal Access Handling //
  /////////////////////////////

  assign illegal_access_o = illegal_access_boot || illegal_write_boot || 
                            illegal_xbar;

endmodule
