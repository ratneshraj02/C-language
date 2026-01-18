/*
    Write a program to print day month name of according to enter any number
*/
#include <stdio.h>
int main(){
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);

    switch(number)
    {
        case 1 : printf("Januaray\n");
            break;
        case 2 : printf("Febuaray\n");
            break;
        case 3 : printf("March\n");
            break;
        case 4 : printf("April\n");
            break;
        case 5 : printf("May\n");
            break;
        case 6 : printf("June\n");
            break;
        case 7 : printf("July\n");
            break;
        case 8 : printf("Augest\n");
            break;
        case 9 : printf("September\n");
            break;
        case 10 : printf("Octumber\n");
            break;
        case 11 : printf("November\n");
            break;
        case 12 : printf("December\n");
            break;
        default : printf("Wrong Input\n");
    }
return 0;
}
