#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Storage of strings in C

    //Strings as character array
    char str[5] = "shuh";
    printf(str);
    printf("\n");

    char str2[4] = {'s', 'h', 'u', 'b'};
    printf(str2);
    printf("\n");

    //string as character pointer
    /*READ ONLY*/
    char *str3 = "adi";// it is read only.
    printf(str3);
    /*DYNAMICALLY ALLOCATED*/
    char *str4;
    int size = 4;
    str4 = (char*)malloc (sizeof(char)*size);
    *(str + 0) = 's';
    *(str + 1) = 'h';
    *(str + 2) = 'u';
    *(str + 3) = 'b';
    printf(str4);



}
