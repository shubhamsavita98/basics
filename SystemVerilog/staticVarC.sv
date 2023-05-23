//static variables and accessing in class
class Transaction;

	static int count = 0;
	int id;

	function new();
		$display("default value of id which is int type: %0d",id);
		id = count++;
	endfunction

endclass

module tb;

Transaction tr1, tr2;

initial begin
	tr1 = new();
	$display("First id:%0d",tr1.id);
	tr2 = new();
	$display("First id:%0d",tr2.id);
end 


endmodule 