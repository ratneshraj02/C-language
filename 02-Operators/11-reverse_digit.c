/* If a five digit number is input throught the keyboard, WAP to reverse the number */

#include <stdio.h>
int main(){ 
    int digit, rem, res_digit = 0;

    printf("Enter the five digit :");
    scanf("%d",&digit);

    rem = digit % 10;
    res_digit += 10000 * rem;
    digit /= 10;

    rem = digit % 10;
    res_digit += 1000 * rem;
    digit /= 10;

    rem = digit % 10;
    res_digit += 100 * rem;
    digit /= 10;

    rem = digit % 10;
    res_digit += 10 * rem;
    digit /= 10;

    rem = digit % 10;
    res_digit += 1 * rem;
    // digit /= 10;

    printf("%d", res_digit);
    int res = res_digit + 10;
    printf("\n%d",res);


    return 0;
}