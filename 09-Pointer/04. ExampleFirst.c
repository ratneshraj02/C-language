#include <stdio.h>
int main() {

    int Number = 90;

    int* ptr = &Number;

    //Output the value of Number
    printf("%d\n",Number);

    //Output the memory address of myAge
    printf("%p\n",&Number);

    //Output the pointer location in memory
    printf("%p\n",ptr);







    return 0;
}
