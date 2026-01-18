/*
    ****
    ****
    ****
    ****
*/
/*How would you print the following diagram?*/
#include <stdio.h>
int main(){
    int i, p;
    for(i = 0;i<=3;i++)
    {
         for(p = 0;p<=3;p++)
            printf("* ");
        printf("\n");
    }

    return 0;
}
