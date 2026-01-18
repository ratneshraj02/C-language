/*
    Write a c program to find the smallest number among three number using nested if else statement.
*/
#include <stdio.h>
int main(){
    int num1, num2, num3;
    printf("Enter the three number :");
    scanf("%d %d %d",&num1, &num2, &num3);
    if((num1 < num2 ) && (num1 < num3))
        printf("Smallest num1 is %d",num1);
    else{
        if(num2 <  num3)
            printf("smallest num2 is %d",num2);
        else
            printf("smallest num3 is %d",num3);
    }
return 0;
}
