`timescale 1ns/1ps
`include "clam-defs.svhh"


module bootloader #(parameter BOOTLOADER_BASE_ADDR = 32'h00000000) 
(
        input  logic             clk_i,
        input  logic             rst_ni,

        // dmem OBI interface
        input  logic             dmem_req_i,
        output logic             dmem_gnt_o,
        input  logic [31:0]      dmem_addr_i,
        input  logic             dmem_we_i,
        input  logic [3:0]       dmem_be_i,
        input  logic [31:0]      dmem_wdata_i,
        output logic             dmem_rvalid_o,
        output logic [31:0]      dmem_rdata_o,

        // imem OBI interface
        input  logic             imem_req_i,
        output logic             imem_gnt_o,
        input  logic [31:0]      imem_addr_i,
        input  logic             imem_we_i,
        input  logic [3:0]       imem_be_i,
        input  logic [31:0]      imem_wdata_i,
        output logic             imem_rvalid_o,
        output logic [31:0]      imem_rdata_o,

        input  logic             copy_flash_i,
        output logic             illegal_access_o,
        output logic             illegal_write_o
);
  
  parameter BOOTLOADER_ADDR_WIDTH = 6;
  parameter BOOTLOADER_SIZE = 47; // In words

  assign illegal_write_o = (imem_req_i && imem_we_i) || (dmem_req_i && dmem_we_i);

  /////////////////////////
  // BOOTLOADER PROGRAMS //
  /////////////////////////


    // Define a memory array (32 bits * BOOTLOADER_SIZE entries)
    logic [31:0] copy_rom [0:BOOTLOADER_SIZE-1];
    logic [31:0] jump_rom [0:BOOTLOADER_SIZE-1];

    // Initialize the ROM with the provided constant values
  initial begin
    copy_rom[0]  = 32'h00000093;
    copy_rom[1]  = 32'h00000113;
    copy_rom[2]  = 32'h00000193;
    copy_rom[3]  = 32'h00000213;
    copy_rom[4]  = 32'h00000293;
    copy_rom[5]  = 32'h00000313;
    copy_rom[6]  = 32'h00000393;
    copy_rom[7]  = 32'h00000413;
    copy_rom[8]  = 32'h00000493;
    copy_rom[9]  = 32'h00000513;
    copy_rom[10] = 32'h00000593;
    copy_rom[11] = 32'h00000613;
    copy_rom[12] = 32'h00000693;
    copy_rom[13] = 32'h00000713;
    copy_rom[14] = 32'h00000793;
    copy_rom[15] = 32'h00000813;
    copy_rom[16] = 32'h00000893;
    copy_rom[17] = 32'h00000913;
    copy_rom[18] = 32'h00000993;
    copy_rom[19] = 32'h00000a13;
    copy_rom[20] = 32'h00000a93;
    copy_rom[21] = 32'h00000b13;
    copy_rom[22] = 32'h00000b93;
    copy_rom[23] = 32'h00000c13;
    copy_rom[24] = 32'h00000c93;
    copy_rom[25] = 32'h00000d13;
    copy_rom[26] = 32'h00000d93;
    copy_rom[27] = 32'h00000e13;
    copy_rom[28] = 32'h00000e93;
    copy_rom[29] = 32'h00000f13;
    copy_rom[30] = 32'h00000f93;
    copy_rom[31] = 32'h200005b7;
    copy_rom[32] = 32'h80000637;
    copy_rom[33] = 32'h00000013;
    copy_rom[34] = 32'h20000693;
    copy_rom[35] = 32'h0005a703;
    copy_rom[36] = 32'h00e62023;
    copy_rom[37] = 32'h00458593;
    copy_rom[38] = 32'h00460613;
    copy_rom[39] = 32'hfff68693;
    copy_rom[40] = 32'hfe0696e3;
    copy_rom[41] = 32'h800007b7;
    copy_rom[42] = 32'h00000013;
    copy_rom[43] = 32'h00000013;
    copy_rom[44] = 32'h00078067;
    copy_rom[45] = 32'h00000013;
    copy_rom[46] = 32'h00000013;

    jump_rom[0]    = 32'h200005b7;
    jump_rom[1]    = 32'h00058067;
    for (int i = 2; i < BOOTLOADER_SIZE; i = i + 1)
        jump_rom[i] = 32'h00000013;
  end


  ///////////////////
  // READ CONTROLS //
  ///////////////////


  // Bootloader Address
  logic [31:0] imem_addr_shifted, dmem_addr_shifted;
  logic [BOOTLOADER_ADDR_WIDTH-1:0] imem_boot_addr, dmem_boot_addr;
  logic [31:0] imem_response, dmem_response;

  always_comb begin
    // Operation legal by default
    illegal_access_o = '0;

    // Get address within bootloader
    imem_addr_shifted = imem_addr_i - BOOTLOADER_BASE_ADDR;
    dmem_addr_shifted = dmem_addr_i - BOOTLOADER_BASE_ADDR;
    imem_boot_addr = imem_addr_shifted[BOOTLOADER_ADDR_WIDTH+1:2];
    dmem_boot_addr = dmem_addr_shifted[BOOTLOADER_ADDR_WIDTH+1:2];

    // Handle reads on the imem bus
    if ({1'b0, imem_boot_addr} < BOOTLOADER_SIZE) begin
      imem_response = copy_flash_i ? copy_rom[imem_boot_addr] : jump_rom[imem_boot_addr];
    end else begin
      illegal_access_o = imem_req_i;
      imem_response = 32'hDEAD_BEEF;
    end

    // Handle reads on the dmem bus
    if ({1'b0, dmem_boot_addr} < BOOTLOADER_SIZE) begin
      dmem_response = copy_flash_i ? copy_rom[dmem_boot_addr] : jump_rom[dmem_boot_addr];
    end else begin
      illegal_access_o = dmem_req_i;
      dmem_response = 32'hDEAD_BEEF;
    end

  end


  ////////////////////
  // RESPONSE PHASE //
  ////////////////////


  always_ff @(posedge clk_i) begin
    // Bootloader grants every request on both ports
    dmem_gnt_o    <= rst_ni ? dmem_req_i    : '0;
    imem_gnt_o    <= rst_ni ? imem_req_i    : '0;
    // Don't set rvalid to zero for out-of-bounds, core will hang!
    dmem_rvalid_o <= rst_ni ? dmem_req_i    : '0;
    imem_rvalid_o <= rst_ni ? imem_req_i    : '0; 
    // Response Data
    dmem_rdata_o  <= rst_ni ? dmem_response : 32'hDEAD_BEEF;
    imem_rdata_o  <= rst_ni ? imem_response : 32'hDEAD_BEEF;
  end


  /////////////////////////////////////////////
  // Unused Signal Termination for Verilator // 
  /////////////////////////////////////////////


`ifdef VERILATOR
  logic [31:0] _unused;
  always_comb begin
    _unused[3:0] = dmem_be_i;
    _unused      = dmem_addr_i;
    _unused      = dmem_wdata_i;
    _unused      = dmem_addr_shifted;

    _unused[3:0] = imem_be_i;
    _unused      = imem_addr_i;
    _unused      = imem_wdata_i;
    _unused      = imem_addr_shifted;
  end
`endif


endmodule
