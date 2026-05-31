/*
    2. Write a Program to check whether a number is prime or not.
*/
#include <stdio.h>
int main(){
    printf(" --- Check whether a number is prime or not ----\n");
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);

    //Check the number
    if((number %  number != 0) && (number % 1 == 0))
        printf("number is prime number");
    else
        printf("not prime number ");





    return 0;
}
