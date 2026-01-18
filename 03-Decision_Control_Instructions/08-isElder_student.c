/*
    Enter the age of two student & find who is Elder.    
*/

#include <stdio.h>
int main(){
    int std1_age, std2_age;
    printf("Enter the age of two student :\n");
    
    scanf("%d", &std1_age);
    scanf("%d", &std2_age);

    if(std1_age > std2_age){
        printf("first student is elder");
    } else {
        printf("second student is elder");
    }

    return 0;
}