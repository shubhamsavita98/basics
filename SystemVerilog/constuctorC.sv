class Transaction;
  logic [31:0] addr, csm, data[8];
  
  function new(input logic[31:0] a=3, b=5);
    addr = a;
    data = '{default:b};
  endfunction 
    
endclass


module tb;
  
initial begin
  Transaction tr;
  tr = new(.a(10));
  $display("Value of addr: %0d", tr.addr);
  $display("Value of data: %0p", tr.data);
  tr = new(.b(4));
  $display("Value of addr: %0d", tr.addr);
  $display("Value of data: %0p", tr.data);
  tr = new(.a(2),.b(8));
  $display("Value of addr: %0d", tr.addr);
  $display("Value of data: %0p", tr.data);
end

initial begin
  $dumpfile("file.vcd");
  $dumpvars;
  
end
endmodule 