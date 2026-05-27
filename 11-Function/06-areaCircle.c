/*  
    Find the area of circle radius can be enter thought the keyboard & program developed by using the function
*/

#include <stdio.h>

float area_circle(int r){
    return 3.14 * r * r;
}
void main() {
    float rad;
    printf("Enter the radius :");
    scanf("%f",&rad);
    printf("Area of circle :%f\n",area_circle(rad));
}