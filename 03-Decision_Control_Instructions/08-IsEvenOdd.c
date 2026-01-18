/*
    Write a c program to check whethr a given number is even or odd.
*/
#include <stdio.h>
int main(){
    int number;
    //input form user
    scanf("%d",&number);

    //check the codition
    if(number%2==0){
        printf("The Number is Even\n");
    }
    else{
        printf("The Number is Odd\n");
    }

return 0;
}
