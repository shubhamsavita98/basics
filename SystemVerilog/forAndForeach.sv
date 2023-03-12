module test();
  integer i, j;
  initial begin
    byte twoD[4][6];
  /*
//using for loop
    for(i=0; i<4; i++)
      for(j=0; j<6; j++)
        twoD[i][j]=2*4;
    //$display("%p", twoD);
    $display(twoD);
  */


//using foreach
//NOTE: NEED TO STILL CHECK ITs PROPER FUNCTIONALITY
    foreach(twoD[j])
      foreach(twoD[i])
        twoD[i][j]=2*4;
    //$display("%p", twoD);
    $display(twoD);
  end
endmodule 
