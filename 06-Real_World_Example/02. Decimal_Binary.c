/*
    Decimal to Binary
*/
#include <stdio.h>
int main(){
    int num, reminder, decimal_num, base=1, binary = 0;
    printf("Enter the decimal no : ");
    scanf("%d",&num);
    decimal_num = num;
    while(num < 0)
    {
        reminder = num % 2;
        binary = binary + reminder * base;
        num = num / 2;
        base = base * 10;

    }

    printf("input number is = %d\n",decimal_num);
    printf("Binary number is = %d",binary);
return 0;
}
