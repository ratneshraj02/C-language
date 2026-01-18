/*
    *
    **
    ***
    ****
    *****
*/
/*
    How would you print the following diagram?
*/
#include <stdio.h>
int main(){

    int i, p;
    int rows = 5;
    for(i=1;i<=rows;i++)
    {
        for(p = 1;p<=i;++p)
        {
            printf(" *");
        }
        printf("\n");
    }




return 0;
}
