`ifndef CLAM_DEFS_SVH
`define CLAM_DEFS_SVH

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

`define SOC_NUM_INTER       54
// `include "Peripheral_Unit_Defs"

`endif // CLAM_DEFS_SVH
