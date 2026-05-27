#include <stdio.h>
void main() {

/* Pointer */
/*
    In C programming language pointer is a variable that store the address of other variable inside of holding a direct value, it holds the address where the value is state in the memory.


    There are following perperty of pointer.

    1. A pointer is decleare as a specified data type and the name with an aestric(*) before the name.
    e.g :- dataType *pointerName;

    2. The datatype indicate the type of variable the pointer can hold the address of variable
    e.g :- int *x; // Here pointer hold the integer type value.

    3. Aestrik use for the hold value of variable and address of variable.
*/
    int num = 2;
    int *addNum = &num;
    printf("Memory Location :%u \n",addNum);
    printf("Number is :%d\n",*(addNum));
}