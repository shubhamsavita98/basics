#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int rows = (n*2)-1; //max row
    int columns = (n*2)-1; //max column
    int mat[rows][columns];

    int min=0;
    int max=rows-1; //or "=columns" anything works

    for(int val=n; val>0; val--){
        //for column 0 and row min-max

        for(int i=min; i<=max; i++){
            int j=min;
            mat[i][j]=val;
        }

        //for row 0 and column min-max
        for(int j=min; j<=max; j++){
            int i=min;
            mat[i][j]=val;
        }

        //for column max and row min-max
        for(int i=min; i<=max; i++){
            int j=max;
            mat[i][j]=val;
        }

        //for row max and row min-max
        for(int j=min; j<=max; j++){
            int i=max;
            mat[i][j]=val;
        }

        if (min!=max){
            min++;
            max--;
        }/*
        else {
            mat[min][max]=val;
            break;
        }*/
}
    int x;
    int y;
    for(x=0; x<=rows-1; x++){
        for(y=0; y<=columns-1; y++){
            printf("%d ", mat[x][y]);
        }printf("\n");
    }
    return 0;
}

/*
INPUT:
7
OUTPUT:
7 7 7 7 7 7 7 7 7 7 7 7 7
7 6 6 6 6 6 6 6 6 6 6 6 7
7 6 5 5 5 5 5 5 5 5 5 6 7
7 6 5 4 4 4 4 4 4 4 5 6 7
7 6 5 4 3 3 3 3 3 4 5 6 7
7 6 5 4 3 2 2 2 3 4 5 6 7
7 6 5 4 3 2 1 2 3 4 5 6 7
7 6 5 4 3 2 2 2 3 4 5 6 7
7 6 5 4 3 3 3 3 3 4 5 6 7
7 6 5 4 4 4 4 4 4 4 5 6 7
7 6 5 5 5 5 5 5 5 5 5 6 7
7 6 6 6 6 6 6 6 6 6 6 6 7
7 7 7 7 7 7 7 7 7 7 7 7 7
*/
