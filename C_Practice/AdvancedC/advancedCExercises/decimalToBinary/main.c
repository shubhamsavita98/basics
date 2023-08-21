/********************************
* Advance C exercises:
* Description: DECIMAL TO BINARY
*********************************/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


long long decimalToBinary(int dec);

int main()
{
    int decimalNumber, result;
    printf("Enter the decimal number\n");
    scanf("%d",&decimalNumber);
    result = decimalToBinary(decimalNumber);
    printf("Binary of %d is %lld", decimalNumber, result);
    return 0;
}


long long decimalToBinary(int dec){

    int bin, i = 0, n=0;
    while(dec != 0){
        bin = dec%2;
        dec = dec/2;
        n = n + (bin * pow(10, i));
        i++;
    }
    return n;
}
