/* #ifndef */
/*
    This directive is used to check whether a macro is NOT defined.
    If the macro is not defined, the code inside the #ifndef block
    is compiled. Otherwise, the code is skipped.

    e.g : -
        #ifndef PI
            #define PI 3.142
        #endif
*/
#include <stdio.h>

int main() {

    #ifndef PI
        #define PI 3.142
    #endif

    printf("PI = %f\n", PI);

    return 0;
}