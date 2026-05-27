#include <stdio.h>
int f(int num){
    //base case
    if(num == 1) return num;
    return num * f(num-1);
}
int main(){
/*
    WAP by using recursion properties in a function for find factorial value of any number, which enter thought the keyboard.
*/
    int n = 0;
    printf("Enter the num :");
    scanf("%d",&n);
    printf("%d\n",f(n));

    return 0;
}