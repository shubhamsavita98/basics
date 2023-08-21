#include <stdio.h>

extern int count;

extern void display(void){

    printf("Display function in foo.c where count = %d.\n", count);

}
