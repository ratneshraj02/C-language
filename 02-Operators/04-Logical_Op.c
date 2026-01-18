/*
    Logical Operator : These are two logical operators in c, also called logical connections.

    &&  =   logical AND operator are true result is true.
    ||     =    Logical OR operator at least one operend are true.
*/
#include <stdio.h>
int main(){
    //Logical operator
    int temp = 40;
    temp > 50;
    int a;
    a >=50;
    printf((temp > 50) &&(a >=25)); //0

    printf((temp > 50)||(a >=50));  //1




return 0;
}
