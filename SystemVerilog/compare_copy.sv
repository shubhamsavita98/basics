// compare and copy array

module comp_copy();
  
  initial begin
    bit [31:0] src[4] = '{0,1,2,3};
    bit [31:0] dst[4] = '{4,5,6,7};
    
    $display("%p", src);
    $display("%p", dst);
    
    
    for(int i=0; i<4; i++)
      $display("src[%0d]:%0d,dst[%0d]:%0d",i, src[i],i, dst[i]);
    
    
    if(src==dst)
      $display("src array equal to dst");
    else
      $display("src array is not equal to dst");
    
    //aggregate copy all src to dst
    dst = src;
    
    $display("%p", dst);
  end
endmodule
  
  
