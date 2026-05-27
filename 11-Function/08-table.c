/* 
    WAP in C by using the function properties for find the table of any value which can be enter through keyboard 
*/
#include <stdio.h>

void table(int n){
    for(int i = 1; i <= 10; i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }
}
void main() {
    int num;
    printf("Enter the num :");
    scanf("%d", &num);

    table(num);
}