#include <stdio.h> 

//Recursive Function
    int rec(int n){
        //base case
        if(n == 5) {
            return n;
        } else if(n < 5) {
            n += 1;
            return rec(n);
        } else if(n > 5) {
            n -= 1;
            return rec(n);
        }
    }
int main(){
/* Recursive Function */
/*
    In C programming a recursive function is function in programming that calls itself to solve a problem with a base condition in  mate.

    A function that proform such selft calling behavior is known as a recursive function each instance a function calling itself is called a recursive call.
*/
    int n = 0;
    printf("Enter the number :");
    scanf("%d",&n);

    rec(n);
    return 0;
}