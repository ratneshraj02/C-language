#include <stdio.h>
int main() {
    //how would you print the following diagram?
/*
    *
    * *
    * * * 
    * * * * 
    * * * * * 
*/
    
    int n = 5;
    for(int i = 1;i <=n; i++){
        for(int j = 1; j <= i; j++){
            printf(" * ");
        }
        printf("\n");
    }
        

    return 0;
}