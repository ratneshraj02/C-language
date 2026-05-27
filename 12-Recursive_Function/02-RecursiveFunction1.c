#include <stdio.h>

// Recursive Function
int rec(int n)
{
    // base case
    if (n == 50)
    {
        return n;
    }
    else if (n < 50)
    {
        n += 1;
        return rec(n);
    }
    else if (n > 50)
    {
        n -= 1;
        return rec(n);
    }
}
int main()
{
    int num = 0;
    printf("Enter the number :");
    scanf("%d", &num);

    rec(num);
    return 0;
}