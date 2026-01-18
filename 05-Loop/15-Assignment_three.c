/*
    Write a program to find the factorial of a given number using while loop
*/
#include <stdio.h>
int main(){
    int number, i, fact = 1;
    printf("Enter the number : ");
    scanf("%d",&number);
    i = 1;
    while(i <= number) {
        fact = fact * i;
        i++;
    }
    printf("Factorial of these number : %d",fact);

    return 0;
}
