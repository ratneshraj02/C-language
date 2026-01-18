/*
    Type Casting : Sometimes, you have to convert the value of one data type to another type. This is known as type conversion
*/

/*
    To get the right result, you need to know how type conversion works.
    There are two types of conversion in C:
    1. Implicit Conversion (automatically)
    2. Explicit Conversion (manually)
*/
#include <stdio.h>
int main(){
    //1. implicit conversion
    float myFloat = 10;
    printf(" implicit conversion :\n My_Float : %f\n",myFloat);

    //2. Explicit conversion
    int x = 2;
    float y;
    y = (float)x;
    printf("explicit conversion : \n My_Float : %f\n",y);

return 0;
}

