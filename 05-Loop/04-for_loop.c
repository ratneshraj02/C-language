/*  for loop   */
/*
    for(initial; condition; iteration) {
        statement  tor repeat;
    }
*/

/*  Calculating factorial of 10 */
#include <stdio.h>
int main(){
    int i, fact;
    int number;
    for(i= 1;i<=10;i++)
    {
        printf("Enter the no : ");
        scanf("%d",&number);
        fact = fact * number;
    }
    printf("factorial is %d ",fact);
return 0;
}
