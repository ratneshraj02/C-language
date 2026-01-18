/* While loop */
/*
    intilizations;
    while(condition){
    
        //code

        updations;
    }
*/

#include <stdio.h>
int main(){
    int n = 0;
    printf("Enter the number :");
    scanf("%d",&n);

    int i = 1; 
    while(i <= 10){
        printf("%d * %d = %d\n",n,i,i*n);
        i++;
        
    }
    return 0;
}