#include <stdio.h>
#include <malloc.h>

struct myArray{
    int length;
    int flexarray[]; //flexible array member
};

int main()
{
    struct myArray* fr = NULL;
    int desiredSize = 0;
    printf("Enter the length of the array\n");
    scanf("%d",&desiredSize);
    fr = malloc(sizeof(struct myArray) + desiredSize * sizeof(int) );
    fr->length = desiredSize;
    fr->flexarray[0] = 4;
    fr->flexarray[1] = 12;

    float balance[10] = {1000.0, 2.0, 3.4, 7.0, 50.0};

    for(int i=0; i<=desiredSize; i++){
        printf("%d \n",fr->flexarray[i]);
        printf("%f \n",balance[i]);
    }
    free(fr);
    return 0;
}
