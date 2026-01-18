/*  Two-Dimensional Arrays : -
    A 2D array is known as a matrix (a table of rows and columns ).

*/
#include <stdio.h>
int main()
{
    // To Create a 2D array of integers :
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

    /* The first dimension represents the number of row(2)
        ,while the second dimension represents the number of columns[3]
    */

    // Access the Element of a 2D Array
    // Access the first element of array
    printf("%d\n", matrix[0][0]);

    // Access the third element of array
    printf("%d\n", matrix[0][2]);

    return 0;
}
