#include <stdio.h>
#include <stdlib.h>

//Checking the command line argument functionality - type 1
int main(int argc, char* argv[])
{
    printf("Hello this is command line argument program!\n");
    printf("Total number of arguments are %d.\n", argc);
    for(int i=0; i<argc; i++){
        printf("%s\n", argv[i]);
    }
    return 0;
}

//Checking the command line argument functionality - type 2
int main(int argc, char** argv)
{
    printf("Hello this is command line argument program!\n");
    printf("Total number of arguments are %d.\n", argc);
    for(int i=0; i<argc; i++){
        printf("%s\n", argv[i]);
    }
    return 0;
}
