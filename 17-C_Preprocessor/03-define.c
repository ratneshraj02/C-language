/* #define */
/* 
    There directives are used for defining macros. macros are used to represent any constant values. the values used in the macros are replaced before compilation.

    e.g : -
        #define PI 3.142
 */
#include <stdio.h>
#define PI 3.142

int main(){

    float r = 3.5;
    float area = PI * r * r;
    
    printf("Area of circle : %f",area);

    return 0;
}