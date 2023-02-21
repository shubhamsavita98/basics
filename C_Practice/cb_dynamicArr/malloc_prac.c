#include <stdio.h>
#include <stdlib.h>

int mallocfn(){

    int *x;
    x = (int *) malloc(sizeof(int)* 10);
    for(int i=0; i<10; i++){
        x[i] = i;
        printf("\n%d\n",x[i]);
        printf("%d",*(x+i)); //same as above line
    }
    return 0;
}
