/* WAP which take input table number through keyboard & display output. */
#include <stdio.h>
void main(){
    
    int num, table[10];
    printf("Enter the number for table :");
    scanf("%d", &num);
    
    for(int i = 0; i < 10; i++){
        table[i] = num * (i+1);
        printf("%d \n",table[i]);
    }
}