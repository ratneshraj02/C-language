/* #ifdef */
/*
    This directive is used to check whether a macro is defined or not.
    If the macro is defined, the code inside the #ifdef block is compiled.
    Otherwise, the code is skipped.

    e.g : -
        #define PI 3.142

        #ifdef PI
            printf("PI is defined");
        #endif
*/
#include <stdio.h>

#define PI 3.142

int main() {

    #ifdef PI
        printf("PI is defined\n");
    #endif

    return 0;
}