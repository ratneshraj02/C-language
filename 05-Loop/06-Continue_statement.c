/*  Continue Statement */
/*
        continue statement : Skip the remaining statement in the body of a while, for or do/while structure.
*/
#include <stdio.h>
int main(){
    int fact = 1, i = 1;
    while(1)
    {
        fact = fact * i;
        i++;
        if(i<10){
        continue;
    }
   printf("%",i);
    }



return 0;
}
