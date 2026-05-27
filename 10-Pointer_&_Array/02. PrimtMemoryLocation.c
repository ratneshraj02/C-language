// Print the memory Location of the array
#include <stdio.h>
int main() {
    int array[4]={1,2,3,4};
    int *prt = array;
    int i;
    for(i = 0; i <= 4; i++){
        printf("%d\n",*(prt + i));
    }

    return 0;
}
