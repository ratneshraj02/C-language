/*
    WAP to find the largest number using if statement.
*/
#include <stdio.h>
int main(){
    int a, b, c;
    //take input from user
    scanf("%d %d %d",&a,&b,&c);

    if((a>=b) && (a>=c)){
        printf("the largest number is : %d",a);
    }
    if((b>=c) &&(b>=a)){
        printf("the largest number is : %d",b);
    }
    if((c>=a) && (c >=b)){
        printf("the largest number is : %d",c);
    }
return 0;
}
