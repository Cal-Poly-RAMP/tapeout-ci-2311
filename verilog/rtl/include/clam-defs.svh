`ifndef CLAM_DEFS_SVH
`define CLAM_DEFS_SVH
//////////////////////////////////////////////////////////////////////////////////
//
// Description: Header containing defines used at the SOC level of hierarchy.
//              DUPLICATE
// 
// SPDX-License-Identifier: Apache-2.0
//
//////////////////////////////////////////////////////////////////////////////////

/////////////////////////
// BOOT SELECT DEFINES //
/////////////////////////
typedef enum logic {
    BOOT_NORMAL,
    BOOT_FAILSAFE
} boot_sel_e;

/////////////////////////
// PERIPHERAL DEFINES  //
/////////////////////////

`define SOC_NUM_INTER       52
// `include "Peripheral_Unit_Defs"

`define CARAVEL_INTR_ADDR   32'hF0000000

`endif // CLAM_DEFS_SVH
