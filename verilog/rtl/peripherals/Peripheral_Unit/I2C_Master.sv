`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
// Module Name: I2C_Master
// 
// SPDX-License-Identifier: Apache-2.0
//
//////////////////////////////////////////////////////////////////////////////////

module I2C_Master#(
            parameter DATA_WIDTH = 8,
            parameter REG_WIDTH  = 8,
            parameter ADDR_WIDTH = 7 )
    (
            input                           i_clk,
            input                           i_rst_n,
            input                           i_wr_cr,
            input                           i_wr_mosi_data,
            input                           i_wr_reg_addr,
            input                           i_wr_dev_addr,
            input                           i_enable,
            input                           i_rw,
            input       [DATA_WIDTH-1:0]    i_mosi_data,
            input       [REG_WIDTH-1:0]     i_reg_addr,
            input       [ADDR_WIDTH-1:0]    i_device_addr,
            input       [15:0]              i_clk_div,
            output reg  [DATA_WIDTH-1:0]    o_miso_data = 0,
            output reg                      o_busy = 0,
            input                           i_sda,
            output                          o_sda,
            output                          o_scl
    );
 
 /*INSTANTATION TEMPLATE
i2c_master #(.DATA_WIDTH(8),.REG_WIDTH(8),.ADDR_WIDTH(7)) 
        i2c_master_inst(
            .i_clk(),
            .i_rst_n(),
            .i_enable(),
            .i_rw(),
            .i_mosi_data(),
            .i_reg_addr(),
            .i_device_addr(),
            .i_clk_div(),
            .o_miso_data(),
            .o_busy(),
            .io_sda(),
            .io_scl()
        );
*/

    localparam S_IDLE                =       8'h00;
    localparam S_START               =       8'h01;
    localparam S_WRITE_ADDR_W        =       8'h02;
    localparam S_CHECK_ACK           =       8'h03;
    localparam S_WRITE_REG_ADDR      =       8'h04;
    localparam S_RESTART             =       8'h05;
    localparam S_WRITE_ADDR_R        =       8'h06;
    localparam S_READ_REG            =       8'h07;
    localparam S_SEND_NACK           =       8'h08;
    localparam S_SEND_STOP           =       8'h09;
    localparam S_WRITE_REG_DATA      =       8'h0A;
    localparam S_WRITE_REG_ADDR_MSB  =       8'h0B;
    localparam S_WRITE_REG_DATA_MSB  =       8'h0C;
    localparam S_READ_REG_MSB        =       8'h0D;
    localparam S_SEND_ACK            =       8'h0E;    
    
    logic r1_wr_cr = 0, r2_wr_cr = 0, wr_cr;
    logic r1_wr_mosi_data = 0, r2_wr_mosi_data = 0, wr_mosi_data;
    logic r1_wr_reg_addr = 0, r2_wr_reg_addr = 0, wr_reg_addr;
    logic r1_wr_dev_addr = 0, r2_wr_dev_addr = 0, wr_dev_addr;
    
    always_ff @ (posedge i_clk) begin
       r1_wr_cr <= i_wr_cr;
       r2_wr_cr <= r1_wr_cr;
       r1_wr_mosi_data <= i_wr_mosi_data;
       r2_wr_mosi_data <= r1_wr_mosi_data;
       r1_wr_reg_addr <= i_wr_reg_addr;
       r2_wr_reg_addr <= r1_wr_reg_addr;
       r1_wr_dev_addr <= i_wr_dev_addr;
       r2_wr_dev_addr <= r1_wr_dev_addr;
    end
    
    assign wr_cr = r1_wr_cr & ~r2_wr_cr;
    assign wr_mosi_data = r1_wr_mosi_data & ~r2_wr_mosi_data;
    assign wr_reg_addr = r1_wr_reg_addr & ~r2_wr_reg_addr;
    assign wr_dev_addr = r1_wr_dev_addr & ~r2_wr_dev_addr;
    
    reg scl_out = 0;
    reg [ADDR_WIDTH:0] saved_device_addr = 0;
    reg [REG_WIDTH-1:0] saved_reg_addr = 0;
    reg [DATA_WIDTH-1:0] saved_mosi_data = 0;
    reg [7:0] state = S_IDLE;
    reg [7:0] post_state = S_IDLE;
    reg [1:0] proc_counter = 0;
    reg [7:0] bit_counter = 0;
    
    reg sda_out = 0;
    reg post_sda_out = 0;
    reg ack_recieved = 0;
    reg enable = 0;
    reg rw = 0;
    reg [15:0] clk_div = 16'hffff;
    
    wire sda_oe;
    assign sda_oe = (state!=S_IDLE && state!=S_CHECK_ACK && state!=S_READ_REG && state!=S_READ_REG_MSB);
    wire scl_oe;
    //when proc_counter = 1, we check for clock stretching from slave
    assign scl_oe = (state!=S_IDLE && proc_counter!=1 && proc_counter!=2);

    //tri state buffer for scl and sdo
//    assign io_scl = (scl_oe) ? scl_out : 1'bz;
//    assign io_sda = (sda_oe) ? sda_out : 1'bz;
    assign o_scl = (scl_oe) ? scl_out : 1'bz;
    assign o_sda = (sda_oe) ? sda_out : 1'bz;
    
    reg [15:0] divider_counter = 0;
    wire divider_tick;
    assign divider_tick = (divider_counter == clk_div) ? 1 : 0;

    //i2c divider tick generator
    always@(posedge i_clk)begin
        if(~i_rst_n) begin
            divider_counter <= 0;
        end
        else begin
            if(divider_counter == clk_div) begin
                divider_counter <= 0;
            end
            else begin
                divider_counter <= divider_counter + 1;
            end
        end
    end
    
    
    
    always@(posedge i_clk)begin
        if(~i_rst_n)begin
            sda_out <= 1;
            scl_out <= 1;
            proc_counter <= 0;
            bit_counter <= 0;
            ack_recieved <= 0;
            o_miso_data <= 0;
            saved_device_addr <= 0;
            saved_reg_addr <= 0;
            saved_mosi_data <= 0;
            enable <= 0;
            o_busy <= 0;
            rw <= 0;
            post_state <= S_IDLE;
            state <= S_IDLE;
        end
        else begin
            if (state == S_IDLE) begin
                if (wr_cr) begin
                    enable <= i_enable;
                    rw <= i_rw;
                    clk_div <= i_clk_div;
                end
                if (wr_dev_addr)
                    saved_device_addr <= {i_device_addr, 1'b0};
                else
                    saved_device_addr[0] <= 1'b0;
                if (wr_reg_addr)
                    saved_reg_addr <= i_reg_addr;
                if (wr_mosi_data)
                    saved_mosi_data <= i_mosi_data;
            end
            if(divider_tick)begin
                case(state)
                    S_IDLE: begin
                        proc_counter <= 0;
                        sda_out <= 1;
                        scl_out <= 1;
                        o_busy <= 0;
                        ack_recieved <= 0;
                        if(enable)begin
                            state <= S_START;
                            post_state <= S_WRITE_ADDR_W;
                        end
                    end
                    
                    S_START: begin
                        case(proc_counter)
                            0: begin
                                proc_counter <= 1;
                                o_busy <= 1;
                                enable <= 0;
                            end
                            1: begin
                                sda_out <= 0;
                                proc_counter <= 2;
                            end
                            2: begin
                                proc_counter <= 3;
                                bit_counter <= 8;
                            end
                            3: begin
                                scl_out <= 0;
                                proc_counter <= 0;
                                state <= post_state;
                                sda_out <= saved_device_addr[ADDR_WIDTH];
                            end
                        endcase
                    end
                    
                    S_WRITE_ADDR_W: begin
                        case(proc_counter)
                            0:begin
                                scl_out <= 1;
                                proc_counter <= 1;
                            end
                            1: begin
                                if(o_scl == 1)begin
                                    proc_counter <= 2;
                                end
                            end
                            2: begin
                                scl_out <= 0;
                                bit_counter <= bit_counter -1;
                                proc_counter <= 3;
                            end
                            3: begin
                                if(bit_counter == 0)begin
                                    post_sda_out <= saved_reg_addr[REG_WIDTH-1];
                                    if(REG_WIDTH == 16)begin
                                        post_state <= S_WRITE_REG_ADDR_MSB;
                                    end
                                    else begin
                                        post_state <= S_WRITE_REG_ADDR;
                                    end
                                    state <= S_CHECK_ACK;
                                    bit_counter <= 8;
                                end
                                else begin
                                  sda_out <= saved_device_addr[bit_counter-1];
                                end
                                proc_counter <= 0;
                            end
                        endcase
                    end
                    
                    S_CHECK_ACK: begin
                        case(proc_counter)
                            0:begin
                                scl_out <= 1;
                                proc_counter <= 1;
                            end
                            1: begin
                                if(o_scl == 1)begin
                                    ack_recieved <= 0;
                                    proc_counter <= 2;
                                end
                            end
                            2: begin
                                scl_out <= 0;
                                if(i_sda == 0)begin
                                    ack_recieved <= 1;
                                end
                                proc_counter <= 3;
                            end
                            3: begin
                                if(ack_recieved)begin
                                    state <= post_state;
                                    ack_recieved <= 0;
                                    sda_out <= post_sda_out;
                                end
                                else begin
                                    state <= S_IDLE;
                                end
                                proc_counter <= 0;
                            end
                        endcase
                    end
                    
                    S_WRITE_REG_ADDR_MSB: begin
                        case(proc_counter)
                            0:begin
                                scl_out <= 1;
                                proc_counter <= 1;
                            end
                            1: begin
                                if(o_scl == 1)begin
                                    ack_recieved <= 0;
                                    proc_counter <= 2;
                                end
                            end
                            2: begin
                                scl_out <= 0;
                                bit_counter <= bit_counter -1;
                                proc_counter <= 3;
                            end
                            3: begin
                                if(bit_counter == 0)begin
                                    post_state <= S_WRITE_REG_ADDR;
                                    post_sda_out <= saved_reg_addr[7];
                                    bit_counter <= 8; 
                                    sda_out <= 0;
                                    state <= S_CHECK_ACK;
                                end
                                else begin
                                  sda_out <= saved_reg_addr[bit_counter+7];
                                end
                                proc_counter <= 0;
                            end
                        endcase
                    end
                    
                    S_WRITE_REG_ADDR: begin
                        case(proc_counter)
                            0:begin
                                scl_out <= 1;
                                proc_counter <= 1;
                            end
                            1: begin
                                if(o_scl == 1)begin
                                    ack_recieved <= 0;
                                    proc_counter <= 2;
                                end
                            end
                            2: begin
                                scl_out <= 0;
                                bit_counter <= bit_counter -1;
                                proc_counter <= 3;
                            end
                            3: begin
                                if(bit_counter == 0)begin
                                    if(rw == 0)begin
                                        /*if(DATA_WIDTH == 16)begin
                                            post_state <= S_WRITE_REG_DATA_MSB;
                                            post_sda_out <= saved_mosi_data[15];
                                        end
                                        else*/ begin
                                            post_state <= S_WRITE_REG_DATA;
                                            post_sda_out <= saved_mosi_data[7];
                                        end
                                    end
                                    else begin
                                        post_state <= S_RESTART;
                                        post_sda_out <= 1;
                                    end
                                    bit_counter <= 8; 
                                    sda_out <= 0;
                                    state <= S_CHECK_ACK;
                                end
                                else begin
                                    sda_out <= saved_reg_addr[bit_counter-1];
                                end
                                proc_counter <= 0;
                            end
                        endcase
                    end
                    
                    S_WRITE_REG_DATA_MSB: begin
                        case(proc_counter)
                            0:begin
                                scl_out <= 1;
                                proc_counter <= 1;
                            end
                            1: begin
                                if(o_scl == 1)begin
                                    ack_recieved <= 0;
                                    proc_counter <= 2;
                                end
                            end
                            2: begin
                                scl_out <= 0;
                                bit_counter <= bit_counter -1;
                                proc_counter <= 3;
                            end
                            3: begin
                                if(bit_counter == 0)begin
                                    state <= S_CHECK_ACK;
                                    post_state <= S_WRITE_REG_DATA;
                                    post_sda_out <= saved_mosi_data[7];
                                    bit_counter <= 8; 
                                    sda_out <= 0;
                                end
                                else begin
                                    sda_out <= saved_mosi_data[bit_counter+7];
                                end
                                proc_counter <= 0;
                            end
                        endcase
                    end
                    
                    S_WRITE_REG_DATA: begin
                        case(proc_counter)
                            0:begin
                                scl_out <= 1;
                                proc_counter <= 1;
                            end
                            1: begin
                                if(o_scl == 1)begin
                                    ack_recieved <= 0;
                                    proc_counter <= 2;
                                end
                            end
                            2: begin
                                scl_out <= 0;
                                bit_counter <= bit_counter -1;
                                proc_counter <= 3;
                            end
                            3: begin
                                if(bit_counter == 0)begin
                                    state <= S_CHECK_ACK;
                                    post_state <= S_SEND_STOP;
                                    post_sda_out <= 0;
                                    bit_counter <= 8; 
                                    sda_out <= 0;
                                end
                                else begin
                                    sda_out <= saved_mosi_data[bit_counter-1];
                                end
                                proc_counter <= 0;
                            end
                        endcase
                    end
                    
                    S_RESTART: begin
                        case(proc_counter)
                            0:begin
                                proc_counter <= 1;
                            end
                            1: begin
                                proc_counter <= 2;
                                scl_out <= 1;
                            end
                            2: begin
                                proc_counter <= 3;
                            end
                            3: begin
                                state <= S_START;
                                post_state <= S_WRITE_ADDR_R;
                                saved_device_addr[0] <= 1'b1;
                                proc_counter <= 0;
                            end
                        endcase
                    end
                    
                    S_WRITE_ADDR_R: begin
                        case(proc_counter)
                            0:begin
                                scl_out <= 1;
                                proc_counter <= 1;
                            end
                            1: begin
                                if(o_scl == 1)begin
                                    ack_recieved <= 0;
                                    proc_counter <= 2;
                                end
                            end
                            2: begin
                                scl_out <= 0;
                                bit_counter <= bit_counter -1;
                                proc_counter <= 3;
                            end
                            3: begin
                                if(bit_counter == 0)begin
                                    if(DATA_WIDTH == 16)begin
                                        post_state <= S_READ_REG_MSB;
                                        post_sda_out <= 0;
                                    end
                                    else begin
                                        post_state <= S_READ_REG;
                                        post_sda_out <= 0;
                                    end
                                    state <= S_CHECK_ACK;
                                    bit_counter <= 8;
                                end
                                else begin
                                  sda_out <= saved_device_addr[bit_counter-1];
                                end
                                proc_counter <= 0;
                            end
                        endcase
                    end
                    
                    S_READ_REG_MSB: begin
                        case(proc_counter)
                            0:begin
                                scl_out <= 1;
                                proc_counter <= 1;
                            end
                            1: begin
                                if(o_scl == 1)begin
                                    ack_recieved <= 0;
                                    proc_counter <= 2;
                                end
                            end
                            2: begin
                                scl_out <= 0; 
                                //sample data on this rising edge of scl
                                o_miso_data[bit_counter+7] <= i_sda;
                                bit_counter <= bit_counter -1;
                                proc_counter <= 3;
                            end
                            3: begin
                                if(bit_counter == 0)begin
                                    post_state <= S_READ_REG;
                                    state <= S_SEND_ACK;
                                    bit_counter <= 8;
                                    sda_out <= 0;
                                end
                                proc_counter <= 0;
                            end
                        endcase
                    end
                    
                    S_READ_REG: begin
                        case(proc_counter)
                            0:begin
                                scl_out <= 1;
                                proc_counter <= 1;
                            end
                            1: begin
                                if(o_scl == 1)begin
                                    ack_recieved <= 0;
                                    proc_counter <= 2;
                                end
                            end
                            2: begin
                                scl_out <= 0; 
                                //sample data on this rising edge of scl
                                o_miso_data[bit_counter-1] <= i_sda;
                                bit_counter <= bit_counter -1;
                                proc_counter <= 3;
                            end
                            3: begin
                                if(bit_counter == 0)begin
                                    state <= S_SEND_NACK;
                                    sda_out <= 1;
                                end
                                proc_counter <= 0;
                            end
                        endcase
                    end
                    
                    S_SEND_NACK: begin
                        case(proc_counter)
                            0:begin
                                scl_out <= 1;
                                sda_out <= 1;
                                proc_counter <= 1;
                            end
                            1: begin
                                if(o_scl == 1)begin
                                    ack_recieved <= 0;
                                    proc_counter <= 2;
                                end
                            end
                            2: begin
                                proc_counter <= 3;
                                scl_out <= 0;
                            end
                            3: begin
                                state <= S_SEND_STOP;
                                proc_counter <= 0;
                                sda_out <= 0;
                            end
                        endcase
                    end
                    
                    S_SEND_ACK: begin
                        case(proc_counter)
                            0:begin
                                scl_out <= 1;
                                proc_counter <= 1;
                                sda_out <= 0;
                            end
                            1: begin
                                if(o_scl == 1)begin
                                    proc_counter <= 2;
                                end
                            end
                            2: begin
                                proc_counter <= 3;
                                scl_out <= 0;
                            end
                            3: begin
                                state <= post_state;
                                proc_counter <= 0;
                            end
                        endcase
                    end
                    
                    S_SEND_STOP: begin
                        case(proc_counter)
                            0:begin
                                scl_out <= 1;
                                proc_counter <= 1;
                            end
                            1: begin
                                if(o_scl == 1)begin
                                    proc_counter <= 2;
                                end
                            end
                            2: begin
                                proc_counter <= 3;
                                sda_out <= 1;
                            end
                            3: begin
                                state <= S_IDLE;
                                proc_counter <= 0;
                            end
                        endcase
                    end

		    default: begin
			sda_out <= 1;
	                scl_out <= 1;
		    end

                endcase
            end
        end
    end
    
    
endmodule
