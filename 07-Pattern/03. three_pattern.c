/*
    *****
    ****
    ***
    **
    *
*/
/*
    How would you print the following diagram?
*/
#include <stdio.h>
int main(){
    int i, p, rows = 5;
    for(i = 5;i<=rows;--i)
    {
        for(p=5;p<=i;--p)
        {
            printf("* ");
        }
    printf("\n");
    }

return 0;
}
