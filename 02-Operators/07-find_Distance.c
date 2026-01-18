#include <stdio.h>
int main(){
    /* find the distance of the path */

    float speed, time, distance;
    printf("Enter the speed : ");
    scanf("%f",&speed);

    printf("Enter the time : ");
    scanf("%f",&time);

    distance = speed * time;
    printf("The Distance travered : %f",distance);


return 0;
}
