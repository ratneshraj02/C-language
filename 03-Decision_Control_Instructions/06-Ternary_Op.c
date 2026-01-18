/*
    Ternary Condition operator( ?:)  =  Takes three arguments (condition, value if true, value if false )

    General Syntex ;
                (exp1)? (exp2) : (exp3)
                         true     false

        example :-
*/
#include <stdio.h>
int main(){
    int grade;
    //input grade value by user
    printf("Enter the grade : ");
    scanf("%d",grade);
    (grade >= 60) ? printf("pass\n") : printf("fail\n");

    return 0;
}
