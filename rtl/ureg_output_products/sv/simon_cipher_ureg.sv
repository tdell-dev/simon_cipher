// This is a verilog 1995 compliant top-level generated
// The input is an axi4_lite interface  ( interfaces in verilog don't exist yet // only SystemVerilog )

module simon_cipher_ureg #(
  parameter ADDR_WIDTH = 40,
  parameter STRB_WIDTH = 8,
  parameter RESP_WIDTH = 2,
  parameter INP_DATA_0_WIDTH = 32,
  parameter INP_DATA_1_WIDTH = 32,
  parameter INP_DATA_2_WIDTH = 32,
  parameter INP_DATA_3_WIDTH = 32,
  parameter INP_KEY_0_WIDTH = 32,
  parameter INP_KEY_1_WIDTH = 32,
  parameter INP_KEY_2_WIDTH = 32,
  parameter INP_KEY_3_WIDTH = 32,
  parameter INP_KEY_4_WIDTH = 32,
  parameter INP_KEY_5_WIDTH = 32,
  parameter INP_KEY_6_WIDTH = 32,
  parameter INP_KEY_7_WIDTH = 32,
  parameter START_WIDTH = 1,
  parameter DONE_WIDTH = 1,
  parameter OUT_DATA_0_WIDTH = 32,
  parameter OUT_DATA_1_WIDTH = 32,
  parameter OUT_DATA_2_WIDTH = 32,
  parameter OUT_DATA_3_WIDTH = 32,
  parameter PROT_WIDTH = 3,
  parameter DATA_WIDTH = 32
)(
  input wire                       aclk,
  input wire                     arst_n,

  output logic [INP_DATA_0_WIDTH-1:0] inp_data_0,
  output logic [INP_DATA_1_WIDTH-1:0] inp_data_1,
  output logic [INP_DATA_2_WIDTH-1:0] inp_data_2,
  output logic [INP_DATA_3_WIDTH-1:0] inp_data_3,
  output logic [INP_KEY_0_WIDTH-1:0] inp_key_0,
  output logic [INP_KEY_1_WIDTH-1:0] inp_key_1,
  output logic [INP_KEY_2_WIDTH-1:0] inp_key_2,
  output logic [INP_KEY_3_WIDTH-1:0] inp_key_3,
  output logic [INP_KEY_4_WIDTH-1:0] inp_key_4,
  output logic [INP_KEY_5_WIDTH-1:0] inp_key_5,
  output logic [INP_KEY_6_WIDTH-1:0] inp_key_6,
  output logic [INP_KEY_7_WIDTH-1:0] inp_key_7,
  output logic [START_WIDTH-1:0] start,
  output logic [DONE_WIDTH-1:0] done,
  output logic [OUT_DATA_0_WIDTH-1:0] out_data_0,
  output logic [OUT_DATA_1_WIDTH-1:0] out_data_1,
  output logic [OUT_DATA_2_WIDTH-1:0] out_data_2,
  output logic [OUT_DATA_3_WIDTH-1:0] out_data_3,

  input  wire                   awvalid,  //1
  output logic                  awready,  //1
  input  wire [ADDR_WIDTH-1:0]   awaddr,  //ADDR_WIDTH
  input  wire [PROT_WIDTH-1:0]   awprot,  //PROT_WIDTH (3)

  input  wire                    wvalid,  //1
  output logic                   wready,  //1
  input  wire [DATA_WIDTH-1:0]    wdata,  //DATA_WIDTH (32)
  input  wire [4-1:0]             wstrb,  //4

  output logic                   bvalid,  //1
  input  wire                    bready,  //1
  output logic [1:0]              bresp,  //2

  input  wire                   arvalid,  //1
  output logic                  arready,  //1
  input  wire [ADDR_WIDTH-1:0]   araddr,  //ADDR_WIDTH
  input  wire [PROT_WIDTH-1:0]   arprot,  //PROT_WIDTH (3)
           
  output logic                   rvalid,   //1
  input  wire                    rready,   //1
  output logic [DATA_WIDTH-1:0]   rdata,   //DATA_WIDTH (32)
  output logic [2-1:0]            rresp    //2
  );


// WRITE FSM  "wr_fsm_*"
// States are 
// 00 - IDLE
// 01 - WRITE_RCVD
// 10 - WRITE_EXEC
// 11 - WRITE_RESP

typedef enum logic [1:0] {
  S_IDLE,
  S_WR_RCVD,
  S_WR_RESP
} wr_state_t;

wr_state_t wr_fsm_state;
wr_state_t wr_fsm_next_state;
  
logic              wr_ack;
logic              aw_ack;
logic               b_ack; 

always_comb begin
  wr_ack = wready & wvalid;
  aw_ack = awready & awvalid;
  b_ack = bready & bvalid;
end

always_ff@(posedge aclk) begin
  if ( arst_n ) begin
    wr_fsm_state <= S_IDLE;
  end else begin
    wr_fsm_state <= wr_fsm_next_state;
  end
end

always_comb begin

  case(wr_fsm_state)
    S_IDLE: begin                  //IDLE
      if ( aw_ack ) begin
        wr_fsm_next_state = S_WR_RCVD;
      end
    end

    S_WR_RCVD: begin                   //WR_RCVD
      if ( wr_ack ) begin
        wr_fsm_next_state = S_WR_RESP;
      end
    end

    S_WR_RESP: begin                   //WR_RESP
      if ( b_ack ) begin
        wr_fsm_next_state = S_IDLE;
      end
    end

    default: begin
      wr_fsm_next_state = wr_fsm_state; 
    end
  endcase

end

//wr_addr
reg [ADDR_WIDTH-1:0] wr_addr;
always_ff@(posedge aclk) begin

  if ( aw_ack ) begin
    wr_addr <= awaddr;
  end

end

//wr_mask
reg [DATA_WIDTH-1:0] wr_mask;
always_comb begin

  case ( wstrb )
    4'h0: wr_mask = 32'h0000;
    4'h1: wr_mask = 32'h000f;
    4'h2: wr_mask = 32'h00f0;
    4'h3: wr_mask = 32'h00ff;
    4'h4: wr_mask = 32'h0f00;
    4'h5: wr_mask = 32'h0f0f;
    4'h6: wr_mask = 32'h0ff0;
    4'h7: wr_mask = 32'h0fff;
    4'h8: wr_mask = 32'hf000;
    4'h9: wr_mask = 32'hf00f;
    4'ha: wr_mask = 32'hf0f0;
    4'hb: wr_mask = 32'hf0ff;
    4'hc: wr_mask = 32'hff00;
    4'hd: wr_mask = 32'hff0f;
    4'he: wr_mask = 32'hfff0;
    4'hf: wr_mask = 32'hffff;
  endcase

end

//awready
always_ff@(posedge aclk) begin

  if ( ~arst_n ) begin
    awready <= 1'b0;
  end else if ( wr_fsm_next_state == 2'b00 ) begin
    awready <= 1'b1;
  end else begin
    awready <= 1'b0;
  end

end

//wready
always_ff@(posedge aclk) begin

  if ( ~arst_n ) begin
    wready <= 1'b0;
  end else if ( wr_fsm_next_state == 2'b01 ) begin
    wready <= 1'b1;
  end else begin
    wready <= 1'b0;
  end

end

//wdata
always_ff@(posedge aclk) begin

  if (~arst_n) begin
    inp_data_0 <= 32'b00000000000000000000000000000000;
  end else if ( wr_ack && wr_addr == 32'h4c300000) begin
    inp_data_0 <= wdata[32-1:0] & wr_mask[32-1:0];
  end

end
always_ff@(posedge aclk) begin

  if (~arst_n) begin
    inp_data_1 <= 32'b00000000000000000000000000000000;
  end else if ( wr_ack && wr_addr == 32'h4c300004) begin
    inp_data_1 <= wdata[32-1:0] & wr_mask[32-1:0];
  end

end
always_ff@(posedge aclk) begin

  if (~arst_n) begin
    inp_data_2 <= 32'b00000000000000000000000000000000;
  end else if ( wr_ack && wr_addr == 32'h4c300008) begin
    inp_data_2 <= wdata[32-1:0] & wr_mask[32-1:0];
  end

end
always_ff@(posedge aclk) begin

  if (~arst_n) begin
    inp_data_3 <= 32'b00000000000000000000000000000000;
  end else if ( wr_ack && wr_addr == 32'h4c30000c) begin
    inp_data_3 <= wdata[32-1:0] & wr_mask[32-1:0];
  end

end
always_ff@(posedge aclk) begin

  if (~arst_n) begin
    inp_key_0 <= 32'b00000000000000000000000000000000;
  end else if ( wr_ack && wr_addr == 32'h4c300010) begin
    inp_key_0 <= wdata[32-1:0] & wr_mask[32-1:0];
  end

end
always_ff@(posedge aclk) begin

  if (~arst_n) begin
    inp_key_1 <= 32'b00000000000000000000000000000000;
  end else if ( wr_ack && wr_addr == 32'h4c300014) begin
    inp_key_1 <= wdata[32-1:0] & wr_mask[32-1:0];
  end

end
always_ff@(posedge aclk) begin

  if (~arst_n) begin
    inp_key_2 <= 32'b00000000000000000000000000000000;
  end else if ( wr_ack && wr_addr == 32'h4c300018) begin
    inp_key_2 <= wdata[32-1:0] & wr_mask[32-1:0];
  end

end
always_ff@(posedge aclk) begin

  if (~arst_n) begin
    inp_key_3 <= 32'b00000000000000000000000000000000;
  end else if ( wr_ack && wr_addr == 32'h4c30001c) begin
    inp_key_3 <= wdata[32-1:0] & wr_mask[32-1:0];
  end

end
always_ff@(posedge aclk) begin

  if (~arst_n) begin
    inp_key_4 <= 32'b00000000000000000000000000000000;
  end else if ( wr_ack && wr_addr == 32'h4c300020) begin
    inp_key_4 <= wdata[32-1:0] & wr_mask[32-1:0];
  end

end
always_ff@(posedge aclk) begin

  if (~arst_n) begin
    inp_key_5 <= 32'b00000000000000000000000000000000;
  end else if ( wr_ack && wr_addr == 32'h4c300024) begin
    inp_key_5 <= wdata[32-1:0] & wr_mask[32-1:0];
  end

end
always_ff@(posedge aclk) begin

  if (~arst_n) begin
    inp_key_6 <= 32'b00000000000000000000000000000000;
  end else if ( wr_ack && wr_addr == 32'h4c300028) begin
    inp_key_6 <= wdata[32-1:0] & wr_mask[32-1:0];
  end

end
always_ff@(posedge aclk) begin

  if (~arst_n) begin
    inp_key_7 <= 32'b00000000000000000000000000000000;
  end else if ( wr_ack && wr_addr == 32'h4c30002c) begin
    inp_key_7 <= wdata[32-1:0] & wr_mask[32-1:0];
  end

end
always_ff@(posedge aclk) begin

  if (~arst_n) begin
    start <= 1'b0;
  end else if ( wr_ack && wr_addr == 32'h4c300030) begin
    start <= wdata[1-1:0] & wr_mask[1-1:0];
  end

end
always_ff@(posedge aclk) begin

  if (~arst_n) begin
    done <= 1'b0;
  end else if ( wr_ack && wr_addr == 32'h4c300034) begin
    done <= wdata[1-1:0] & wr_mask[1-1:0];
  end

end
always_ff@(posedge aclk) begin

  if (~arst_n) begin
    out_data_0 <= 32'b00000000000000000000000000000000;
  end else if ( wr_ack && wr_addr == 32'h4c300038) begin
    out_data_0 <= wdata[32-1:0] & wr_mask[32-1:0];
  end

end
always_ff@(posedge aclk) begin

  if (~arst_n) begin
    out_data_1 <= 32'b00000000000000000000000000000000;
  end else if ( wr_ack && wr_addr == 32'h4c30003c) begin
    out_data_1 <= wdata[32-1:0] & wr_mask[32-1:0];
  end

end
always_ff@(posedge aclk) begin

  if (~arst_n) begin
    out_data_2 <= 32'b00000000000000000000000000000000;
  end else if ( wr_ack && wr_addr == 32'h4c300040) begin
    out_data_2 <= wdata[32-1:0] & wr_mask[32-1:0];
  end

end
always_ff@(posedge aclk) begin

  if (~arst_n) begin
    out_data_3 <= 32'b00000000000000000000000000000000;
  end else if ( wr_ack && wr_addr == 32'h4c300044) begin
    out_data_3 <= wdata[32-1:0] & wr_mask[32-1:0];
  end

end

//bvalid
always_ff@(posedge aclk) begin

  if ( ~arst_n ) begin
    bvalid <= 1'b0;
  end else if ( wr_fsm_next_state == 2'b10 ) begin
    bvalid <= 1'b1;
  end else begin
    bvalid <= 1'b0;
  end

end

//bresp
always_ff@(posedge aclk) begin

  bresp <= 2'b00;
//  if ( ~arst_n ) begin
//    bresp <= 2'b00;
//  end else if ( wr_fsm_next_state == 2'b10 ) begin
//    bresp <= 2'b10;
//  end else begin
//    bresp <= 2'b00;
//  end

end


// READ FSM  "rd_fsm_*"
//States are
// 0 - IDLE
// 1 - READ_EXEC

logic ar_ack;
logic rd_ack;

typedef enum logic [0:0] {
  S_RD_IDLE,
  S_RD_RCVD
} rd_state_t;

rd_state_t rd_fsm_state;
rd_state_t rd_fsm_next_state;

assign ar_ack = arvalid & arready;
assign rd_ack = rvalid  &  rready;

always_ff@(posedge aclk) begin

  if ( arst_n ) begin
    rd_fsm_state <= S_RD_IDLE;
  end else begin
    rd_fsm_state <= rd_fsm_next_state;
  end

end

always_comb begin

  case(rd_fsm_state)
    S_RD_IDLE: begin                  //S_RD_IDLE
      if ( ar_ack ) begin
        rd_fsm_next_state = S_RD_RCVD;
      end
    end

    S_RD_RCVD: begin                   //RD_RCVD
      if ( rd_ack ) begin
        rd_fsm_next_state = S_RD_IDLE;
      end
    end

    default: begin
      rd_fsm_next_state = rd_fsm_state;
    end
  endcase
end


//TODO:: Add piplining here so that we have more than one cycle to access the appropriate register

//AR/R Channel

//arready
always_ff@(posedge aclk) begin

  if ( ~arst_n ) begin
    arready <= 1'b0;
  end else if (rd_fsm_next_state == 1'b0) begin
    arready <= 1'b1;
  end else begin
    arready <= 1'b0;
  end

end
  

//rdata
always_ff@(posedge aclk) begin

  if ( ~arst_n ) begin
    rdata <= 32'b0; 
  end else if ( ar_ack ) begin
    case ( araddr )
        32'h4c300000: begin
          rdata <= inp_data_0;
        end
        32'h4c300004: begin
          rdata <= inp_data_1;
        end
        32'h4c300008: begin
          rdata <= inp_data_2;
        end
        32'h4c30000c: begin
          rdata <= inp_data_3;
        end
        32'h4c300010: begin
          rdata <= inp_key_0;
        end
        32'h4c300014: begin
          rdata <= inp_key_1;
        end
        32'h4c300018: begin
          rdata <= inp_key_2;
        end
        32'h4c30001c: begin
          rdata <= inp_key_3;
        end
        32'h4c300020: begin
          rdata <= inp_key_4;
        end
        32'h4c300024: begin
          rdata <= inp_key_5;
        end
        32'h4c300028: begin
          rdata <= inp_key_6;
        end
        32'h4c30002c: begin
          rdata <= inp_key_7;
        end
        32'h4c300030: begin
          rdata <= start;
        end
        32'h4c300034: begin
          rdata <= done;
        end
        32'h4c300038: begin
          rdata <= out_data_0;
        end
        32'h4c30003c: begin
          rdata <= out_data_1;
        end
        32'h4c300040: begin
          rdata <= out_data_2;
        end
        32'h4c300044: begin
          rdata <= out_data_3;
        end
        default:
          rdata <= 32'hdeadbeef;
    endcase
  end

end


//rvalid
always_ff@(posedge aclk) begin

  if ( ~arst_n ) begin
    rvalid <= 1'b0;
  end else if ( ar_ack ) begin
    rvalid <= 1'b1;
  end else if ( rd_ack )  begin
    rvalid <= 1'b0;
  end

end


//rresp
always_ff@(posedge aclk) begin

  rresp <= 2'b00;

end

endmodule
