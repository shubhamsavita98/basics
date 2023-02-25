// Arrays
module test();
  
  int lo_hi[0:15] = '{1,2,3,4,5,6,7,6,4,6,7,5,4,5,6,7};
  int i;
  initial begin
    for(i=0; i<=15; i++) begin
      $display("%d", lo_hi[i]);
    end
  end
  
endmodule