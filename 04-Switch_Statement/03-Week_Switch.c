/*
    Write a program to print day week name of according to enter any number
*/
#include <stdio.h>
int main(){

    int number;
    printf("Enter the Number of Week : ");
    scanf("%d",&number);

    switch(number)
    {
        case 1:printf("Sunday\n");
            break;
        case 2:printf("Monday\n");
            break;
        case 3:printf("Tuesday\n");
            break;
        case 4:printf("Wednesday\n");
            break;
        case 5:printf("Thursday\n");
            break;
        case 6:printf("Saturday\n");
            break;
        case 7:printf("Sunday\n");
        default:printf("wrong input ");
    }
    return 0;
}

