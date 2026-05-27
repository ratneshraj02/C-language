

#include <stdio.h>
int factorial(int m)
{
    int i, temp = 1;
    for (i = 1; i <= m; i++)
        temp = temp * i;
    return (temp);
}

int main()
{
    int n;
    for (n = 1; n <= 10; n++)
        printf("%d! = %d\n", n, factorial(n));

    return 0;
}
