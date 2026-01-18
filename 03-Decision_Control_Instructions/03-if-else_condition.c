/* if-else statement */
/*
    If-else :  Statement : Contains an expression that can be "true" or "false".

    General syntax :
                                if(condition)
                                {
                               .....code....
                            }
                            else {
                                .....code....
                            }
*/
//Example-1:-
#include <stdio.h>
int main( ){

    int x = 6;
    if(x>5){
        x--;
        printf("new value of x  : %d\n",x);
    }
    else{
        printf("x not grater then 5\n");
    }

// exmple-2: 
printf("Another exmple\n");
    int grade;
    //input from user
    scanf("%d",&grade);
    if(grade > 60)
        printf("pass\n");
    else
        printf("Fail\n");
    return 0;
}
