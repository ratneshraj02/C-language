/*
    Test if a number is prime or not
*/
#include <stdio.h>
int main(){
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);

    for(int i = 2; i < number; i++){
        if(number % i == 0){
        printf("not prime Number \n");
        break;
    }
    else {
        printf("Prime Number \n");
        break;
    }
    }

    



return 0;
}
