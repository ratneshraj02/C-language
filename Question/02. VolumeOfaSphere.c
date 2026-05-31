#include <stdio.h>
int main(){
    float r;
    printf("Enter the radius of Sphere : ");
    scanf("%f",&r);

    float V;
    V = 4 * 3.1415 * r * r * r / 3;
    printf("Volume of Sphere : %f",V);



    return 0;
}
