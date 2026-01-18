#include <stdio.h>
int main() {

    int n = 10, sum = 1;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    printf("factorial :%d\n",sum);

    return 0;
}