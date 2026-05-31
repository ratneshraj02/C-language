/* define with argument */

/*
     e.g : #define sqr(x) ((x) * (x))
*/

#include <stdio.h>
#define sqr(x)  ((x) * (x))

void main(){
    int y = 5;
    printf("Value of = %d\n", sqr(y));
}

/*
    How macro substitution will be carried out?
    
    r = sqr(a) + sqr(30); --> r = a * a + 30 * 30;


    The macro definition should have been written as : 
        #define sqr(x) (x) (x)
        r = (a+b) * (a + b);
*/