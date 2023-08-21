/*******************************************************
* Challenge-1
* June, 6th 2023
*
* Description: Small program that declares:
* 1) int variable with block scope and temp storage
* 2) global double only for this file
* 3) global float accessible in the entire program
* 4) float local variable with permanent storage
* 5) register int variable
* 6) function only accessible with the file it is defined
********************************************************/

#include <stdio.h>
#include <stdlib.h>

static double d = 3; // 2
float f=48; // 3

void display(void){

    printf("only accessible to this file.");
}

int main()
{
    auto int a = 1; // 1
    static float f = 34; //4
    register int r; // 5

    printf("Hello world!\n");
    return 0;
}
