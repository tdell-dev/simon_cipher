module simon_fifo (
  input wire clk,
  input wire srst,

  input wire [7:0] din,
  input wire wr_en,

  output logic [7:0] dout,
  input wire rd_en,

  output logic empty,
  output logic full,

  output logic wr_rst_busy,
  output logic rd_rst_busy
);

//There are 512 entries, expand it out

logic [8:0] waddr;
logic [8:0] raddr;
logic [511:0][7:0] mem_space;

assign empty = waddr == raddr;
assign full = waddr+1 == raddr;

always_ff@(posedge clk) begin
  if ( srst ) begin
    waddr <= '0;
    raddr <= '0;
  end
end

always_ff@(posedge clk) begin
  if ( wr_en ) begin
    waddr <= waddr + 1;
  end
end

always_ff@(posedge clk) begin
  if ( rd_en ) begin
    raddr <= raddr + 1;
  end
end

generate
  always_ff@(posedge clk) begin
    for( genvar i=0; i<512; i+=1 ) begin
      if ( raddr == i ) begin
        dout <= mem_space[i];
      end
    end
  end
endgenerate

generate
  always_ff@(posedge clk) begin
    for( genvar j=0; j<512; j+=1 ) begin
      if ( waddr == j ) begin
        mem_space[j] <= din;
      end
    end
  end
endgenerate

endmodule
