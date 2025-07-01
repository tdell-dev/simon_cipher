module simon_key_bram (
  input wire clka,
  input wire ena,
  input wire wea,
  input wire [8:0] addra,
  input wire [63:0] dina,

  input wire clkb,
  input wire enb,
  input wire [8:0]  addrb,
  output logic [63:0] doutb
);

//There are 512 entries, expand it out
logic [511:0][63:0] mem_space;
logic [63:0] doutb_pipe;
logic [ 8:0] addr_store;

generate
  always_ff@(posedge clka) begin
    for( genvar i=0; i<512; i+=1 ) begin : mem_space_gen
      if ( ena & wea & addra == i ) begin
        mem_space[i] <= dina;
      end
    end
  end
endgenerate

always_ff@(posedge clkb) begin
  if ( enb ) begin
    addr_store <= addrb;
  end
end

always_ff@(posedge clkb) begin
  doutb <= doutb_pipe;
end

generate
  always_ff@(posedge clkb) begin
    for ( genvar j=0; j<512; j+=1 ) begin : doutb_pipe_gen
      if ( addr_store == j ) begin
          doutb_pipe <= mem_space[j];
      end
    end
  end
endgenerate

endmodule
