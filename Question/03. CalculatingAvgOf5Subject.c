/*
    WAP to calculate the average of five subject.
*/

#include <stdio.h>
int main(){

    float physics,chemistry, maths, english, hindi;
    scanf("%f %f %f %f %f",&physics, &chemistry, &maths, &english, &hindi);

    float average;
    average = (physics + chemistry + maths + english + hindi)/5;
    printf("The Average of Subject : %f",average);

    return 0;
}
