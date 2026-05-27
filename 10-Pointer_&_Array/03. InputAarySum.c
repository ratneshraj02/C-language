//WAP to find sum of five input number using array.
#include <stdio.h>
int main(){
    //input array size
    int n;
    printf("Enter the array size : ");
    scanf("%d",&n);

    //input array from user
    int Number[n];
    for(int i=1; i <= n; i++){
        printf("Enter the number : ");
        scanf("%d",&Number[i]);
    }
    //finding sum of them
    int sum = 0;
    for(int j = 1; j <= n;j++){
        sum += Number[j];
    }
    //print the sum of arrray
    printf(" sum of the array : %d",sum);




    return 0;
}
