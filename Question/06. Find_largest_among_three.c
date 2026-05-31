/*
    Find the largest number
*/
#include <stdio.h>
int main() {
    int num1, num2, num3;
    printf("Enter the 3  Number : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 > num2){
        printf("num1 is longest no");
    }
    else {
        if(num2 > num3){
            printf("num2 is longest no");
        }
        else{
            printf("num3 is longes no");
        }
    }
    return 0;
}
