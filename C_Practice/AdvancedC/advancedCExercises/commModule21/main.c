//Extern Example
#include <stdio.h>
#include <stdlib.h>

int i = 5;

void foo(void);

int main(void)
{
    printf("%d ", i);
    foo();
    printf("%d\n", i);
    return 0;
}
