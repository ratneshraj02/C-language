/* Argument &  Parameter */
/*
    Argument :- Place where we defined functions
    Parameter :- Place where we all the function
*/

#include <stdio.h>
    int add(int a, int b){
        return a+b;
    }

    int area_rectange(int lenght, int breath){
        return lenght * breath;
    }
void main() {
    printf("%d",add(10,18));
    printf("%d",area_rectange(5,7));
}