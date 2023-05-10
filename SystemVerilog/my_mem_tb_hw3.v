module my_mem_tb_hw3;
  
  //logics to drive stimulus
  typedef struct{
    logic clk, write, read;
    logic [7:0] data_in;
    logic [15:0] address;
    //logic to capture response
    logic [8:0] data_out;
  }my_mem_struct;
  
  //struct variable of type mem_struct
  my_mem_struct memtb;
  
  parameter SIZE=6;

  //Initialize the memory model
  my_mem uut(.clk(memtb.clk), .write(memtb.write), .read(memtb.read), .data_in(memtb.data_in), .address(memtb.address), .data_out(memtb.data_out));
  
  // Starting clock ~ every 5ns
  always #5 memtb.clk=~memtb.clk;
  //error count
  int error_count=0; 
  
  initial begin
    
      typedef struct {
        
        //16 bits of address
        bit [15:0] addr_to_read;
        //9 bits of data
        bit [8:0] data_to_write;
        //expected data read
        bit [8:0] expected_data_read;
        //actual data read
        bit [8:0] actual_data_read;
      
      }my_mem_struct;
  
   
    my_mem_struct memst[6];
  		
    
    //intializing clk,read and write7
    memtb.clk=0; memtb.read=0; memtb.write=0;
    
    //randomize addresses
    for(int i=0; i<SIZE; i++) begin
      memst[i].addr_to_read = $random; //storing random address
      #1 $display("Address [%0d] = %0d",i, memst[i].addr_to_read);
    end
    
    //randomize data
    for(int j=0; j<SIZE; j++) begin
      memst[j].data_to_write = $random; //storing random data
      #1 $display("Data [%0d] = %0d",j, memst[j].data_to_write);
    end
    
    //set write to 1 to start writing to memory
    memtb.write=1;

    for (int i = 0; i < SIZE; i++)
    begin
      @(posedge memtb.clk);
      memtb.address = memst[i].addr_to_read;
      #10;
      memtb.data_in = memst[i].data_to_write;
      #5;
    end
  
    @(negedge memtb.clk);
    memtb.write = 0;
    
    
    //data expected
    for(int i=0; i < SIZE; i++) begin
      memst[i].expected_data_read = memst[i].data_to_write;
    end
    
    $display(memst);
    memst.shuffle();
    $display(memst);
    
    
    @(posedge memtb.clk)
    memtb.read = 1;

    //compare data out with data read expected associative array
    $display("********* Starting Test*********");
    // data read in reverse order
    for(int i=SIZE-1; i>=0; i--) begin
      $display(i);
      $display("Previous data out: %0d", memtb.data_out);
      #10;
      memtb.address = memst[i].addr_to_read;
      #10;
      $display("Address: %0d", memtb.address);
      $display("Data expected %0d", memst[i].expected_data_read);
      $display("Current data out %0d", memtb.data_out);
      memst[i].actual_data_read = memtb.data_out; //adding data to queue
      if(memtb.data_out !== memst[i].expected_data_read) begin
        $display("Error!!");
        error_count = error_count + 1;
      end
      else begin
        $display("\ndata out %0d is equal to data expected.", memtb.data_out); 
        $display("\n Read Success! \n");
      end
    end

    $display("Total Error Count: %0d\n", error_count);
    $display("*************** End Test *************");
    
    $display("\n********* Traversing Queue *********");
    //traverse data read queue
    for(int i=0; i<SIZE; i++) begin
      //data_read_queue.push_back(data_out);
      $display("\tdata_read_queue[%0d]= %0d",i,memst[i].actual_data_read);
    end
    
    $finish;
  end
    //vcd file generation and waveform enablement
    initial begin
      //$vcdplusmemon;
      //$vcdpluson;
      $dumpfile("dump.vcd");
      $dumpvars;
    end
    
    //end of module
    endmodule