/* WAP to find the greatest number between two number */

#include <stdio.h>
int main(){

    int num1, num2;

    printf("Enter the three num : \n");
    scanf("%d %d",&num1,&num2);

    if(num1 > num2){
        printf("\nnum1 is largest : %d",num1);
        }
    else {
        printf("\nnum2 is largest : %d",num2);      
    }
        
        return 0;
    }


