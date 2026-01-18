// If the total selling price of 15 items and the total profit earned on them is input throught the keyboard write a program to find the cost prince of the one itme.

#include <stdio.h>
int main(){

    float total_item = 15, total_profit, cp_one_item;

    printf("Enter the total profit : ");
    scanf("%f", &total_profit);

    cp_one_item = (total_profit/total_item);
    printf("cost price of one item :%f\n",cp_one_item);

    return 0;
}