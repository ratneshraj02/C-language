#include <stdio.h>
int main(){
    // Change the array value with the help of pointer.
    int myArray[4] = {2, 4, 6, 8};

    //Make the pointer
    int *prt = myArray;
    *(prt) = 10;
    *(prt + 2) = 24;
    //change the value through loop
    for(int i = 0;i < 4;i++){
        printf("%d\n",myArray[i]);
    }
    return 0;
}
