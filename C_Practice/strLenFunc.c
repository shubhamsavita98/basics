/*************************************
* Description : simple strlen function 
*		implementation as part
*		of practice.
/*************************************/

#include <stdio.h>
#include <stdlib.h>

int strLen(char *pStr){
	int  i = 0;
	printf("Entered string is: ");
	while(pStr[i]){
		printf("%c", pStr[i]);
		i++;
	}
	printf("\n");
	return i;

}

int main(){
	char *sPtr;
	int stringLength = 0;
	sPtr = (char *) malloc(sizeof(char));
	printf("Enter the string:\n");
	scanf("%s", sPtr);
	stringLength = strLen(sPtr);
	printf("String Length is: %d\n",stringLength);
	free(sPtr);
	return 0;
}
