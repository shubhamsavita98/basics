#include <stdio.h>
#include <stdlib.h>

void printData(char* data){ 
	// prints character pointer size which is 8.
	printf("%ld\n", sizeof(data));
	// prints the data value.
	printf("%s\n", data);
}

//array of strings
void printData2(int size, char** data2){ 
	// prints character pointer size which is 8.
	printf("%ld\n", sizeof(data2));
	// prints the data value.
	for(int i = 0; i<size; i++){
	    printf("%s\n", data2[i]);
	}

}

int main(int argc, char** argv)
{
    //array of characters to a store string
    char data[] = "hello! this pointer example";
    printf("%ld\n", sizeof(data)); // number of character(size of string) including null char. 
    printData(data);
    
    
    //array of strings or array of char pointer
    char* data2[] = {"hello! this is pointer to pointer example", "hello! this is the second string"}; 
    printf("%ld\n", sizeof(data2)); //this prints size of the array of two pointers
    printData2(2, data2);
    return 0;
}

