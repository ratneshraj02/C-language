/* 
    WAP which take input of marks of five subject find the total marks and division of student.
 */


#include <stdio.h>
int main(){

    int hindi, english, math, science, socialScience;
    printf("Enter the marks of five subject \n");

    printf("hindi :");
    scanf("%d", &hindi);

    printf("english :");
    scanf("%d", &english);

    printf("math :");
    scanf("%d", &math);

    printf("science :");
    scanf("%d", &science);

    printf("socialScience :");
    scanf("%d", &socialScience);

    float div = (hindi + english + math + science + socialScience)/5;

    if(div >= 60){
        printf("\nFirst Division");
    } else {
        if(div < 60 && div >= 45){
            printf("\nSecond Division");
        }
        else {
            if(div >= 30){
                printf("\nThird Division");
            } else {
                printf("\nFail");
            }   
        }
        }

    return 0;
}