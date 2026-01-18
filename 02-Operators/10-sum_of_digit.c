/* If a five digit number is input throught the keyboard, WAP to calculate the sum of its digits. */

#include <stdio.h>
int main(){
    int digit,rem, sum = 0;

    printf("Enter the five digits number = ");
    scanf("%d", &digit);

    rem = digit % 10;
    sum += rem;
    digit /= 10;

    rem = digit % 10;
    sum += rem;
    digit /= 10;

    rem = digit % 10;
    sum += rem;
    digit /= 10;

    rem = digit % 10;
    sum += rem;
    digit /= 10;

    rem = digit % 10;
    sum += rem;
    digit /= 10;

    printf("\nsum of the number : %d",sum);


    return 0;
}