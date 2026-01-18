#include <stdio.h>
int main() {

    int n = 500;
    for(int i = 2; i <= n; i++){
        for(int j = 2; j < i; j++){
            if(i % j != 0){
                printf("%d\n",j); 
            }
        }
    }


    return 0;
}