`timescale 1ns / 1ps
`include "defs.svh"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: J. Callenes
// 
// Create Date: 01/27/2019 09:22:55 AM
// Design Name: 
// Module Name: CU_Decoder
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////

module decoder (
    input [31:0] inst_i,

    // PC Control Signals
    output pc_src_e pc_src_o,

    // Branch Cond. Control Signals
    output branch_op_e branch_op_o,

    // ALU Control Signals
    output alu_op_e    alu_op_o,
    output alu_a_src_e alu_a_src_o,
    output alu_b_src_e alu_b_src_o,

    // Register Information
    output logic rs1_valid_o,
    output logic rs2_valid_o,
    output logic rd_valid_o,

    // Register File Control Signals
    output logic        rf_wr_en_o,
    output rf_wr_src_e  rf_wr_src_o,

    // Memory Control Signals
    output logic       mem_write_o,
    output logic       mem_read_o,
    output logic       mem_sign_o,
    output logic [1:0] mem_width_o,

    // TODO: CSR Control Signals
    output logic csr_wr_o,
    output logic csr_mret_o
);

    // Instruction Mapping
    logic [6:0] opcode;
    logic [2:0] func3;
    logic [6:0] func7;

    assign opcode = inst_i[6:0];
    assign func3 =  inst_i[14:12];
    assign func7 =  inst_i[31:25];

    ////////////////
    // PC Control //
    ////////////////
    always_comb begin
        unique case (opcode)
            JAL:     pc_src_o = TARGET;
            JALR:    pc_src_o = TARGET;
            default: pc_src_o = PLUS_4;
        endcase
    end

    //////////////////////////
    // Branch Cond. Control //
    //////////////////////////
    always_comb begin
        unique case (opcode)
            BRANCH: begin
                unique case (func3)
                    3'b000:  branch_op_o = BEQ;
                    3'b001:  branch_op_o = BNE;
                    3'b100:  branch_op_o = BLT;
                    3'b101:  branch_op_o = BGE;
                    3'b110:  branch_op_o = BLTU;
                    3'b111:  branch_op_o = BGEU;
                    default: branch_op_o = NO_BRANCH;
                endcase
            end
            default: branch_op_o = NO_BRANCH;
        endcase
    end


    /////////////////
    // ALU Control //
    /////////////////
    always_comb begin
        unique case (opcode)
            OP_IMM: begin
                unique case ({func3 == 3'b101 ? func7[5] : 1'b0, func3})
                    4'b0000: alu_op_o = ADD;
                    4'b0001: alu_op_o = SLL;
                    4'b0010: alu_op_o = SLT;
                    4'b0011: alu_op_o = SLTU;
                    4'b0100: alu_op_o = XOR;
                    4'b0101: alu_op_o = SRL;
                    4'b0110: alu_op_o = OR;
                    4'b0111: alu_op_o = AND;
                    4'b1000: alu_op_o = SUB;
                    4'b1101: alu_op_o = SRA;
                    default: alu_op_o = ADD;
                endcase
            end
            OP: begin
                unique case ({func7[5], func3})
                    4'b0000: alu_op_o = ADD;
                    4'b0001: alu_op_o = SLL;
                    4'b0010: alu_op_o = SLT;
                    4'b0011: alu_op_o = SLTU;
                    4'b0100: alu_op_o = XOR;
                    4'b0101: alu_op_o = SRL;
                    4'b0110: alu_op_o = OR;
                    4'b0111: alu_op_o = AND;
                    4'b1000: alu_op_o = SUB;
                    4'b1101: alu_op_o = SRA;
                    default: alu_op_o = ADD;
                endcase
            end
            LUI:     alu_op_o = PASS;
            default: alu_op_o = ADD;
        endcase
    end

    
    // Selects the source for the ALU A Input
    always_comb begin
        unique case (opcode)
            LUI:     alu_a_src_o = U_IMMED;
            AUIPC:   alu_a_src_o = U_IMMED;
            JAL:     alu_a_src_o = J_IMMED;
            BRANCH:  alu_a_src_o = B_IMMED;
            default: alu_a_src_o = RS1;
        endcase
    end

    // Selects the source for the ALU B Input
    always_comb begin
        unique case (opcode)
            AUIPC:   alu_b_src_o = PC;
            JAL:     alu_b_src_o = PC;
            JALR:    alu_b_src_o = I_IMMED;
            BRANCH:  alu_b_src_o = PC;
            LOAD:    alu_b_src_o = I_IMMED;
            STORE:   alu_b_src_o = S_IMMED;
            OP_IMM:  alu_b_src_o = I_IMMED; 
            default: alu_b_src_o = RS2;
        endcase
    end

    
    /////////////////
    // CSR Control //
    /////////////////
    logic csr_en;
    assign csr_en       =  (opcode == SYSTEM)
                        && (func3[1:0] != 2'b00);
    assign csr_wr_o     = csr_en;
    assign csr_mret_o   = (opcode == SYSTEM)
                        && (func7 == 7'b0011000)
                        && (func3 == 0);

    ///////////////////////////
    // Register File Control //
    ///////////////////////////
    assign rf_wr_en_o = ((opcode != STORE) 
                      && (opcode != BRANCH)
                      && (opcode != SYSTEM))
                      || (csr_en);
    
    // Source for Register File Write 
    always_comb begin
        case (opcode)
            JAL:     rf_wr_src_o = PC_PLUS_4;
            JALR:    rf_wr_src_o = PC_PLUS_4;
            LOAD:    rf_wr_src_o = MEM;
            SYSTEM:  rf_wr_src_o = CSR;
            default: rf_wr_src_o = ALU; 
        endcase
    end

    //////////////////////////
    // Register Information //
    //////////////////////////
    
    // Determines if RS1 is valid
    assign rs1_valid_o = ((opcode != LUI) && 
                         (opcode != AUIPC) && 
                         (opcode != JAL))
                         || csr_en;

    // Determines if RS2 is valid
    assign rs2_valid_o = (opcode == BRANCH) ||
                         (opcode == STORE) ||
                         (opcode == OP);

    // Determines if RD is Written to
    assign rd_valid_o = ((opcode != STORE) 
                      && (opcode != BRANCH)
                      && (opcode != SYSTEM))
                      || (csr_en);

    ////////////////////
    // Memory Control //
    ////////////////////
    assign mem_write_o = (opcode == STORE);
    assign mem_read_o  = (opcode == LOAD);
    assign mem_sign_o  = func3[2];
    assign mem_width_o = func3[1:0];

    ////////////////////
    // Unused Signals //
    ////////////////////
    logic inst_unused = &{1'b0,
                          inst_i[24:15],
                          inst_i[11:7],
                          1'b0};

    logic func7_unused = &{1'b0,
                           func7[6],
                           func7[4:0],
                           1'b0};
    
endmodule
