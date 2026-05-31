#include <stdio.h>
int main(){
    float principle;
    printf("Enter Principle Amount : ");
    scanf("%f",&principle);
    float rate;
    printf("Enter Rate : ");
    scanf("%f",&rate);
    float time;
    printf("Enter the time : ");
    scanf("%f",&time);
    float si = (principle * rate * time)/100;
    printf("Simple Interest is : %f",si);

    return 0;
}
