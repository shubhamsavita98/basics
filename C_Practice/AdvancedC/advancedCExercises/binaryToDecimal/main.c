/********************************
* Advance C exercises:
* Description: BINARY TO DECIMAL
*********************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int binaryToDecimal(long long bin);

int main()
{
    long long n;
    int result = 0;

    printf("Enter the binary number: ");
    scanf("%lld", &n);

    result = binaryToDecimal(n);
    printf("%lld is the binary of decimal %d.", n, result);
    return 0;

}

int binaryToDecimal(long long bin){

    int remainder = 0, i = 0, decimalNumber = 0;
    while(bin != 0){
        remainder = bin%10;
        decimalNumber = decimalNumber + remainder*pow(2,i);
        bin = bin/10;
        i++;
    }
    return decimalNumber;
}


