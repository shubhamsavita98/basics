#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    /*
    //using character array
    char a[20];
    printf("Enter any sentence:\n");
    scanf("%[^\n]", &a);
    printf(a);
    */
    //using character pointer
    char *b;
    printf("\nEnter any sentence:\n");
    b = malloc(100 * sizeof(char));
    scanf("%[^\n]", b);
    printf(b);

    return 0;
}
