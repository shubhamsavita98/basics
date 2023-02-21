#include <stdio.h>
#include <stdlib.h>

int newmain(){

    int *ptr;
    int a = 20;
    ptr = &a;
    printf("%d\n", *ptr);  ///prints the value of a
    printf("%d", ptr); ///prints the address of a
    return 0;
}

