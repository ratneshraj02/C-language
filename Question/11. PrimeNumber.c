#include <stdio.h>
#include <stdbool.h>

int main() {

    int num;
    bool isPrime = false;

    printf("Enter the num :");
    scanf("%d",&num);

    for(int i=2; i < num; i++){
        if(num % i == 0){
            isPrime = false;
            break;
        } else {
            isPrime = true;
        }
    }
    if(isPrime == false){
        printf("num is not prime");
    } else {
        printf("num is prime");
    }
    return 0;
}