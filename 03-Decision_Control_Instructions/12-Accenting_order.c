#include <stdio.h>
int main(){
    /* Input three number & arrange in acending order */

    int a, b, c;
    printf("Enter the three number :\n");
    scanf("%d %d %d",&a, &b, &c);

    if(a > b){
        if(a > c){
            printf("%d is greater",a);
        } else {
            printf("%d is greater",c);
        }
    } else {
        printf("%d is greater",b);
    }
    if(b > c){
        if(b > a){
            printf("%d is greter",b);
        } else {
            printf("%d is greater",a);
        }
    } else {
        printf("%d is greater",c);
    }
    if(c > a){
        if(c > b){
            printf("%d is greater",c);
        } else {
            printf("%d is greater",b);
        }
    } else {
        printf("%d is greater",a);
    }

    return 0;
}