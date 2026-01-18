/* 2D Array */
/*
    A 2 dimensional array or 2D array is the simplest form of array multiple dimensional. we can define row and column

    In C array are zero(o) index so the row number is range from[o to n-1] and column range[0 to n-1].

    array[m][n];
*/



//Access the Element with the help of loop
#include <stdio.h>
int main(){
    int matrix[2][3] = {{1,3,5},{7,8,9}};
    int i, j;
    for(i = 0;i<2;i++){
        for(j = 0;j<3;j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }






    return 0;
}
