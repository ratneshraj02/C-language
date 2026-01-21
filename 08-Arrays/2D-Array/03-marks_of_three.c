/* WAP which find the total marks[phy, che, math] of the studtdent */
#include <stdio.h>
void main(){
    
    int marks[5][3],total[5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            printf("Enter the marks of %d roll no :",i+1);
            scanf("%d", &marks[i][j]);
         total[i] += marks[i][j];   
        }
    }
    
    for(int i = 0; i < 5; i++){
        printf("%d \n",total[i]);
        }
        printf("\n");
}
    
    
