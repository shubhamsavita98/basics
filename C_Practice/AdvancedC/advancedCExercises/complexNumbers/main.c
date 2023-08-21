#include <stdio.h>
#include <stdlib.h>
#include <complex.h>

#define __STDC_WANT_LIB_EXT1__ 1

int main()
{

#ifdef __STDC_NO_COMPLEX__
    printf("Complex numbers are not supported.\n");
    exit(1);
#else
    printf("Complex numbers are not supported.\n");

    double complex cx = 2.5 + 1.6*I;
    double complex cx2 = 2.4 + 1.7*I;

    printf("CX is : %.2f + %.2f\n", creal(cx), cimag(cx));
    printf("CX is : %.2f + %.2f\n", creal(cx2), cimag(cx2));

    double complex a1 = I*I;
    printf("A1 is square of I: %.2f+%.2f\n", creal(a1), cimag(a1));

#endif // __STDC_NO_COMPLEX__

    return 0;
}
