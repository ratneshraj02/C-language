/*
    WAP by using the function to print all the odd number between 1 to 100
*/
#include <stdio.h>

void printOdd(int st, int end)
{
    for (int i = st; i <= end; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d is odd\n", i);
        }
    }
}

int main()
{
    printOdd(1, 100);
    return 0;
}