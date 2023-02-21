#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 200;
    int *b = &a; //b is holding address of a
    printf("Value of a: %d\n", a); //this prints value of a
    printf("Value of b: %d\n", b); //this prints address as b is holding address of a
    printf("Value at address b: %d\n", *b); //this prints value at address b

    //malloc calloc, realloc and free
    char c[] = "M";
    printf("%s", c);

}
