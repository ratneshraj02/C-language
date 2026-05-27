/*
    WAP by using the function to print all the print number 1 to 100.

*/
#include <stdio.h>
#include <math.h>

void isPrime(int num){
    int i, isPrime;

    if (num <= 1){
        printf("%d is not prime",num);
    }
    else {
        for (i = 2; i <= sqrt(num); i++) {
            if (num % i == 0){
                isPrime = 0; 
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", num);
    }
    else {
        printf("%d is not a prime number.\n", num);
    }
}


int main(){ 
    int st, end, i;

    printf("\nEnter the st:");
    scanf("%d", &st);
    printf("\nEnter the end :");
    scanf("%d",&end);
    for(i = st; i <= end; i++){
        isPrime(i);
    }
    
    return 0;
}