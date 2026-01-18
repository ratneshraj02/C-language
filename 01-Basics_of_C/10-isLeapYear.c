/* WAP to find the year is leap or not. */

#include <stdio.h>
int main(){

    int year;
    
    printf("Enter the year :");
    scnaf("%d",&year);

        if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
            printf("leap year");
        }
        else {
           printf("\nnot leap year");
        }

    return 0;
}