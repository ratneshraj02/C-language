/* WAP which find the area of rectangle */

#include <stdio.h>
int main(){

    float length, breath;

    printf("Enter the length:");
    scanf("%f",&length);

    printf("Enter the breath :");
    scanf("%f",&breath);

    float area = length * breath;
    printf("Area of Rectangle : %f",area);
}