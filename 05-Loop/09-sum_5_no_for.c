/*
    sum of five number with the help of for loop
*/
#include <stdio.h>
int main(){
    int i, sum = 0;
    int N = 5, number ;
    for(i = 0; i<=N; i++)
    {
        printf("Please enter the integer : ");
        scanf("%d",number);
        sum = sum + number;
    }
    printf("Sum of five no is %d",sum);

return 0;
}
