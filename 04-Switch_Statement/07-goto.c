/* Go To Statement */
/*
    In C goto statement allows for jumping specific parts for a program and understanding its function is still valuable.

    e.g :-
*/
#include <stdio.h>
int main(){

    int a = 0;
    printf("Enter the number :");
    scanf("%d",&a);

    if(a % 2 == 0){
        goto even; 
    } else {
        goto odd;
    }
    even :
        printf("Number is Even");
    odd :
        printf("Number is Odd");

    return 0;
}