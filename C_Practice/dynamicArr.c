#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d/n",&n);
    int *arr = (int *)malloc(n * sizeof(int));
    //int inp;
    for(int i=0;i<n; i++){
        //printf("Please input value %d", i);
        //scanf("%d",&inp);
        //arr[i] = inp;
        scanf("%d",arr + i);
    }
    int sum = 0;
    for(int j=0;j<n; j++){
        //printf("%d", arr[j]);
        printf("%d ", *(arr + j));
        //sum = sum + arr[j];
        sum = sum + *(arr + j);
    }
    printf("\nThe sum of above numbers is %d", sum);
    /*
    int sum = 0;
    for(int j; j<(sizeof(arr)/sizeof(int)); j++){
        sum = sum + arr[j];
    }
    printf(sum);*/
    return 0;
}
