#include <stdio.h>
#include <stdlib.h>

int main()
{
    size_t SIZE;
    int sum = 0;
    printf("Enter the size of the array: \n");
    scanf("%zx", &SIZE);

    int arrVar[SIZE];
    printf("Enter the elements of array: \n");
    for(int i=0; i<SIZE; i++){
        scanf("%d",&arrVar[i]);
    }

    for(int i=0; i<SIZE; i++){
        sum = sum + arrVar[i];
    }
    printf("Sum of elements in array = %d \n", sum);
    return 0;
}
