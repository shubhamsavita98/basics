module test;

typedef struct{
	reg [6:0] header;
	reg [6:0] cmd;
	reg [6:0] data;
	reg [6:0] crc;

} newhead;

newhead newheader;

initial begin
	newheader.header = 7'h5A;
end

endmodule

//AND


module test;

typedef bit[6:0] bit7;

typedef struct{
	
	bit7 header;
	bit7 cmd;
	bit7 data;
	bit7 crc;
	
}new_packet;

newpacket mypacket;

initial begin
	mypacket.header = 7'h5A;
end

endmodule
