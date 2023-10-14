`timescale 1ns / 1ps
`include "defs.svh"
`include "pipe_regs.svh"
`include "rvfi.svh"
///////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:  F. Wilken
// 
// Create Date: 02/02/2019 03:01:38 PM
// Design Name: 
// Module Name: CSR
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: RISC-V Control & Status Register
// 
// Dependencies: 
// Revision:
// Revision 
// Additional Comments:
///////////////////////////////////////////////////////////////////////////

module csr (
    input clk_i,
    input rst_ni,           // TBD RESET
    input csr_wr_i,          // Active High Write       
    input [11:0] addr_i,    // IR [31:20]
    input [1:0] mode_sel_i,   // IR [13:12]
    input [4:0] immed_i,  // IR [19:15]
    input immed_sel_i,    // IR [14]
    input [31:0] rs1,       // Input data connected to rs1
    input timer_intr_i,        // Timer Interrupt
    input m_ext_intr_i,        // Machine External Interrupt
    input stall_i,            // See if pipeline is stalling
    input mret_i,             // Active high on mret instruction
    input pc_src_e pcSource,   // View when changes are made to pc
    input [31:0] next_pc,   // Intercepts next_pc to jump to interrupts
    input [30:0] mcause_i,  // Interrupt Source
    input csr_hold_i,       // Tells the csr to wait for pipeline flush
    output logic csr_flush_o,     // Tell Pipeline to Start Flushing
    output logic [31:0] csr_data_o,  
    output logic [31:0] pc_intr_addr,
    output logic pc_intr_sel,
    output logic p_int_read_o,
    output logic csr_busy_o
    );

    typedef enum logic [1:0]
    {
        WRITE   = 2'b01,
        SET     = 2'b10,
        CLEAR   = 2'b11
    } mode_e;

    typedef enum logic [11:0] {
        MSTATUS =   12'h300,
        MIE     =   12'h304,
        MTVEC   =   12'h305,
        MEPC    =   12'h341,
        MCAUSE  =   12'h342,
        MHARTID =   12'hF14
    } addr_e;

    typedef enum logic [1:0] {INACTIVE = 0, ENTRY, ACTIVE} state_e;

    typedef struct packed {
        state_e state;
        logic [2:0] entry_count;
    } int_state_t;

        // Macro for Write/Set/Clear
    `define CSR_WSC(register)                           \
        case (mode_sel_i)                               \
            WRITE: register <= write_data;              \
            SET:   register <= register | write_data;   \
            CLEAR: register <= register & ~write_data;  \
            default: ;                                  \
        endcase        



    int_state_t int_state = 0;


    // Register Declarations
    logic [31:0] mstatus;
    logic [31:0] mie;
    logic [31:0] mtvec;
    logic [31:0] mepc;
    logic [31:0] mcause;

    logic [31:0] write_data;
    assign write_data = (immed_sel_i)? {27'b0 , immed_i} : rs1;

    always_comb
    begin
        // Default Values
        csr_flush_o = 0;
        pc_intr_addr = 0;
        pc_intr_sel = PLUS_4;

        csr_busy_o = (int_state.state != INACTIVE);

        if (int_state.state == ENTRY) 
        begin
            if (int_state.entry_count[2]) 
            begin
                csr_flush_o = 1;
            end

            // At the end of entry period, jump to interrupt
            if (int_state.entry_count[0]) 
            begin
                pc_intr_addr = mtvec;
                pc_intr_sel  = TARGET;
                // csr_flush_o = 0;
            end
        end
        // Jump To MEPC when mret occurs
        else if (int_state.state == ACTIVE && mret_i)
        begin 
            pc_intr_addr = mepc;
            pc_intr_sel  = TARGET;
        end
    end


    always_ff @ (posedge clk_i) begin
        if (!rst_ni)
        begin
            int_state   <= 0;
            mstatus     <= 0;
            mie         <= 0;
            mtvec       <= 0;
            mepc        <= 0;
            mcause      <= 0;
        end
        else begin
            // Check MIE bit for entry
            if ( int_state.state == INACTIVE && mstatus[3] 
                    && (m_ext_intr_i || timer_intr_i))
            begin
                // Read MCAUSE
                p_int_read_o <= 1'b1;
                // Check Machine External Interrupt and its enable bit
                if (m_ext_intr_i & mie[11])
                begin
                    // Set mcause to show mei
                    mcause <= {1'b1, mcause_i};
                    // Move to entry and set counter to 3
                    int_state.state <= ENTRY;
                    int_state.entry_count <= 3'b100;
                    // Save mie into mpie
                    mstatus[7] <= mstatus[3];
                    mstatus[3] <= 0;
                    // Update mepc
                    mepc <= next_pc;
                end
                // Check Timer Interrupt and its Enable Bit
                else if (timer_intr_i & mie[7]) begin
                    // Set mcause to show mti
                    mcause <= {1'b1, 31'd7};
                    // Move to entry and set counter to 3
                    int_state.state <= ENTRY;
                    int_state.entry_count <= 3'b100;
                    // Save mie into mpie
                    mstatus[7] <= mstatus[3];
                    mstatus[3] <= 0;
                    // Update mepc
                    mepc <= next_pc;
                end
            end
            // Else: Not currently entering interrupt
            else
            begin
                p_int_read_o <= 1'b0;

                if (int_state.state == ENTRY)
                begin 
                    // Shift counter over unless stalled
                    if (~stall_i) int_state.entry_count <= (int_state.entry_count >> 1);
                    // Updated mepc on control change
                    if ( pcSource != PLUS_4) mepc <= next_pc;
                    // exit entry
                    if (~stall_i && ~csr_hold_i) int_state.state <= ACTIVE;
                end
                else if (int_state.state == ACTIVE && mret_i)
                begin
                    mstatus[3] <= mstatus[7];
                    int_state.state <= INACTIVE;
                end

                // Writes that can be overwritten by interrupt state
                else if (csr_wr_i) begin 
                case (addr_i)
                    MEPC: begin
                        `CSR_WSC(mepc)
                    end
                    MCAUSE: begin
                        `CSR_WSC(mcause)
                    end
                    default: begin
                    end
                endcase
                end
                // Writes that are independent of interrupt state
                if (csr_wr_i) begin 
                case (addr_i)
                    // MSTATUS: 
                    MSTATUS: begin
                        `CSR_WSC(mstatus)
                    end
                    MIE: begin
                        `CSR_WSC(mie)
                    end
                    MTVEC: begin
                        `CSR_WSC(mtvec)
                    end
                    default: begin
                    end
            endcase
            end
        end
        end
    end

    // Asynch Read
    always_comb
    begin
        case (addr_i)
            MSTATUS:    csr_data_o = mstatus;
            MIE:        csr_data_o = mie;
            MTVEC:      csr_data_o = mtvec;
            MEPC:       csr_data_o = mepc;
            MCAUSE:     csr_data_o = mcause;
            MHARTID:    csr_data_o = 0;
            default:    csr_data_o = 0;
        endcase
    end
                                 

endmodule
