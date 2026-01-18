#include <stdio.h>
#include <ctype.h>

int main(){

    int n,p;
    printf("Enter :");
    scanf("%d", &n);
    printf("Enter :");
    scanf("%d", &p);
    switch (n > p){
        case 1 :
            printf("n is greater");
            break;
        case 0 :
            printf("p is greater");
            break;
    }


    return 0;
}