/* sum of five number */

#include <stdio.h>
int main(){
    int count, sum = 0;
    int N = 5, number;
    while(count < 5 )
    {
        printf("Enter the number : ");
        scanf("%d",&number);
        sum = sum + number;
        count = count + 1;
    }
        printf("Sum of five number is %d",sum);

    return 0;
}

