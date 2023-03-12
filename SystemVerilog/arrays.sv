// Arrays
module test();
  
  //int lo_hi[0:15] = '{1,2,3,4,5,6,7,6,4,6,7,5,4,5,6,7};
  //bit [7:0] my_bitmem [128];
  //logic [3:0] my_logicmem [64];
  ascend = ‘{4{8}};
  int i;
  initial begin
    for(i=0; i<=20; i++) begin
      //$display("%d", lo_hi[i]); // prints 0's as 2-state data object/type
      //$display("%d", my_bitmem[i]); // prints 0's as 2-state data object/type
      $display("%d", ascend[i]); // prints x's as 4-state data object/type
    end
  end
  
endmodule