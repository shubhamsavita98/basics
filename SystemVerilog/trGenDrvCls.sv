//Transcation, Generator and Driver class TB

//transcation Class
class transaction;
  rand logic [7:0] val1;
  rand logic [7:0] val2;
  logic [15:0] out;
endclass

//generator class
class generator;
  
  transaction tr=new();
  mailbox mbx;
  
  function new(mailbox mbx);
    this.mbx=mbx;
  endfunction
  
  task run();
    for(int i=0; i<10; i++) begin
      tr.randomize();
      mbx.put(tr);
      $display("[GENERATOR] The value of Val1 and val2 is %0d, %0d:", tr.val1, tr.val2);
      #10;
    end
  endtask
  
endclass

//driver class
class driver;
  
  transaction tr;
  mailbox mbx;
  
  function new(mailbox mbx);
    this.mbx=mbx;
  endfunction
  
  task run();
    for(int i=0; i<10; i++) begin
      mbx.get(tr);
      tr.out = tr.val1 + tr.val2;
      $display("[Driver] The value of out is %0d",tr.out);
      #10;
    end
  endtask
  
endclass

//testbench module
module test_tb;
  mailbox mbx=new();
  generator gen=new(mbx);
  driver drv=new(mbx);
  
  initial begin
    fork
    gen.run();
    drv.run();
    join
  end
endmodule 