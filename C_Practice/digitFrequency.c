#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char *ch;
    ch = malloc(1024* sizeof(char));
    printf("Enter any string containing digits: ");
    scanf("\n%s", ch);

    int counter = 0;
    for(int i=48; i<58; i++){
        for(int j=0; j<strlen(ch); j++){
            if(ch[j]==i){
                counter+=1;
            }
        }
        printf("%d ", counter);
        counter=0;
    }


    return 0;

}
