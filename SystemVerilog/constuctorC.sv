// Code your testbench here
// or browse Examples
// Code your testbench here
// or browse Examples
class Transaction;
  logic [31:0] addr, csm, data[8];
  
  function new(input logic[31:0] a=3, b=5);
    addr = a;
    data = '{default:b};
  endfunction 
    
endclass

//calling transaction new function 
class Driver;
  
  Transaction tr;
  function new();
    tr = new();
    $display("Transaction addr value inside driver cls: %0d",tr.addr);
  endfunction
  
endclass 

module tb;

  
initial begin
  Transaction tr;
  Driver dr;
  tr = new(.a(10));
  $display("Value of addr: %0d", tr.addr);
  $display("Value of data: %0p", tr.data);
  tr = new(.b(4));
  $display("Value of addr: %0d", tr.addr);
  $display("Value of data: %0p", tr.data);
  tr = new(.a(2),.b(8));
  $display("Value of addr: %0d", tr.addr);
  $display("Value of data: %0p", tr.data);
  dr = new();
end
  

initial begin
  $dumpfile("file.vcd");
  $dumpvars;
  
end
endmodule 

///////////////////////////////OUTPUT
/*
[2023-05-23 18:01:06 EDT] vcs -licqueue '-timescale=1ns/1ns' '+vcs+flush+all' '+warn=all' '-sverilog' design.sv testbench.sv  && ./simv +vcs+lic+wait  

Warning-[LINX_KRNL] Unsupported Linux kernel
  Linux kernel '3.13.0-71-generic' is not supported.
  Supported versions are 2.4* or 2.6*.

                         Chronologic VCS (TM)
            Version S-2021.09 -- Tue May 23 18:01:07 2023

                    Copyright (c) 1991 - 2021 Synopsys, Inc.
   This software and the associated documentation are proprietary to Synopsys,
 Inc. This software may only be used in accordance with the terms and conditions
 of a written license agreement with Synopsys, Inc. All other use, reproduction,
   or distribution of this software is strictly prohibited.  Licensed Products
     communicate with Synopsys servers for the purpose of providing software
    updates, detecting software piracy and verifying that customers are using
    Licensed Products in conformity with the applicable License Key for such
  Licensed Products. Synopsys will use information gathered in connection with
    this process to deliver software updates and pursue software pirates and
                                   infringers.

 Inclusivity & Diversity - Visit SolvNetPlus to read the "Synopsys Statement on
            Inclusivity and Diversity" (Refer to article 000036315 at
                        https://solvnetplus.synopsys.com)

Parsing design file 'design.sv'
Parsing design file 'testbench.sv'
Top Level Modules:
       tb
TimeScale is 1 ns / 1 ns
Starting vcs inline pass...

1 module and 0 UDP read.
recompiling module tb
rm -f _cuarc*.so _csrc*.so pre_vcsobj_*.so share_vcsobj_*.so
if [ -x ../simv ]; then chmod a-x ../simv; fi
g++  -o ../simv      -m32 -m32 -rdynamic  -Wl,-rpath='$ORIGIN'/simv.daidir -Wl,-rpath=./simv.daidir -Wl,-rpath=/apps/vcsmx/vcs/S-2021.09/linux/lib -L/apps/vcsmx/vcs/S-2021.09/linux/lib  -Wl,-rpath-link=./ -Wl,--no-as-needed   objs/amcQw_d.o   _320_archive_1.so  SIM_l.o       rmapats_mop.o rmapats.o rmar.o rmar_nd.o  rmar_llvm_0_1.o rmar_llvm_0_0.o           -lvirsim -lerrorinf -lsnpsmalloc -lvfs    -lvcsnew -lsimprofile -luclinative /apps/vcsmx/vcs/S-2021.09/linux/lib/vcs_tls.o   -Wl,-whole-archive  -lvcsucli    -Wl,-no-whole-archive          /apps/vcsmx/vcs/S-2021.09/linux/lib/vcs_save_restore_new.o /apps/vcsmx/vcs/S-2021.09/linux/lib/ctype-stubs_32.a -ldl  -lc -lm -lpthread -ldl 
../simv up to date
CPU time: .234 seconds to compile + .320 seconds to elab + .312 seconds to link
Chronologic VCS simulator copyright 1991-2021
Contains Synopsys proprietary information.
Compiler version S-2021.09; Runtime version S-2021.09;  May 23 18:01 2023
Value of addr: 10
Value of data: '{'h5, 'h5, 'h5, 'h5, 'h5, 'h5, 'h5, 'h5} 
Value of addr: 3
Value of data: '{'h4, 'h4, 'h4, 'h4, 'h4, 'h4, 'h4, 'h4} 
Value of addr: 2
Value of data: '{'h8, 'h8, 'h8, 'h8, 'h8, 'h8, 'h8, 'h8} 
Transaction addr value inside driver cls: 3
           V C S   S i m u l a t i o n   R e p o r t 
Time: 0 ns
CPU Time:      0.480 seconds;       Data structure size:   0.0Mb
Tue May 23 18:01:09 2023
Done
*/
/////////////////////////////////////////////////////////