/*
    How would you print the following diagram?
        *
       *  *
      *  *  *  
    *  *  *  *
*/

#include <stdio.h>
int main() {
    int upper, outer;
    for(outer = 1;outer <= 5; ++outer) {
        for(upper = 5;upper <= 1; ++upper){
            printf(" * ");
        }
        printf("\n");
    }

    return 0;
}
