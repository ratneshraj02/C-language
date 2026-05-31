/*
        Swap the number
*/
#include <stdio.h>
int main(){
    int first, second, swap;
    printf("Enter the First no : ");
    scanf("%d",&first);
    printf("Enter the second no : ");
    scanf("%d",&second);

    int temp;
    temp = first;
    first = second;
    second = temp;
    printf("First : %d\n",first);
    printf("Second :%d\n",second);

    return 0;
}
