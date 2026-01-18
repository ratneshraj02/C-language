/* Temperature of a city in Fahrenheit degree is input throught the keyboard. WAP in c to conver  the C of F or F or C. */

#include <stdio.h>
int main(){

    float F, C, CtoF, FtoC;

    F = 55;
    C = 25;
    
    CtoF = (C * 9/5) + 32;
    printf("Cal to Farhe %f",CtoF);

    FtoC = (F - 32) * 5/9;
    printf("fahrenheit to celsius: %f",FtoC);

    return 0;

}