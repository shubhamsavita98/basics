#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5;
    printf("Value of x = %d\n", x);

    int *p = &x;
    printf("Value of *p when *p=&x is = %d\n", *p);
    printf("Value of p when *p=&x is = %d\n", p);

    int *q = p;
    printf("Value of *q when *q=p is = %d\n", *q);
    printf("Value of q when *q=p is = %d\n", q);

    *p = 10;
    printf("Value of *p when *p=10 is = %d\n", *p);
    printf("Value of p when *p=10 is = %d\n", p);

    *q = 20;
    printf("Value of *q when *q=20 is = %d\n", *q);
    printf("Value of q when *q=20 is = %d\n", q);

    printf("Finally the value of x = %d\n", x);


    return 0;
}
