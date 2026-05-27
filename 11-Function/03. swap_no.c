
#include <stdio.h>

int swap(int m, int n)
{
    int temp;
    temp = m;
    m = n;
    n = temp;
    printf("First : %d\n", m);
    printf("Second : %d", n);
}

int main(){
    int num1, num2;
    scanf("%d %d",&num1, &num2);
    printf("%d %d\n",swap(num1,num2));
    return 0;
}

