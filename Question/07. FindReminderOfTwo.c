/*
    Find the Reminder of two number if a and b is divided
*/
#include <stdio.h>
int main(){
    int num1, num2;
    printf("Enter the num1 num2 : ");
    scanf("%d %d",&num1, &num2);
    //int q = num1/num2;
    //float reminder = num1 - q*num2;
    float reminder = num1 % num2;
    printf("Reminder is %f",reminder);



    return 0;
}
