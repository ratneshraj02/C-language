/* Break Statment */
/*
    Break Statement : Break out of loop
    program execution continues with the first statement after the structure
*/
#include <stdio.h>
int main(){
    int i;
    for(i = 1;i <= 10;i++)
    {
        if(i >= 5)
            break;
    }
    printf("i = %d",i);
    
    return 0;
}
