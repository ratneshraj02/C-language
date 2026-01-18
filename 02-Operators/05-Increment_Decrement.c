/*
    Increment(++) and Decrement(--)
*/
/*
    1. prefix operation : first increment / decrement and than used in evaluation.

    example : i++; or i--;

    2. postfix operation : Increment / Decrement operation after being used in evaluation.
*/
#include <stdio.h>
int main() {
    int t, m=1;

    t = ++m;
    printf("%d\n",t);  //2
    printf("%d\n",m); //2

//another example
    int p,u=1;
    p = u++;
    printf("%d\n",p); //1
    printf("%d",u);  //2

return 0;
}
