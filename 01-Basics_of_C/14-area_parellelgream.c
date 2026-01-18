/* WAP to calculate the area of parellelgram */

#include <stdio.h>
int main() {

    float base, height, area;

    printf("Enter the base :");
    scanf("%f", &base);

    printf("Enter the heigth: ");
    scanf("%f", &height);

    area = base * height;
    printf("Area of Parellelgram : %f",area);

    
    return 0;
}