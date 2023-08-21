/*******************************************************
* Challenge-2
* June, 6th 2023
*
* Description: Small program
********************************************************/

#include <stdio.h>
#include <stdlib.h>



int sum(int num){
    static int number = 0;
    number = number + num;
    return number;
}

int main()
{
    printf("%d\n", sum(25));
    printf("%d\n", sum(25));
    printf("%d\n", sum(25));
    return 0;
}
