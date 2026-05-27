/* 
    WAF to calcaulate the factorial value of integer enter through the keyboard.
*/
#include<stdio.h>

int fact(int n){
    int f = 1;
    for(int i = 1; i <= n; i++){
        f *= i;
    }
    return f;
}

void main() {
    int num = 0;
    printf("Enter the num :");
    scanf("%d", &num);
    printf("%d",fact(num));
}