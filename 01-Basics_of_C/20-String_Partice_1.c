/*
    String pratice Question
*/
#include <stdio.h>
int main(){
    /*
        Create an array of type int called myNumber.
    */
    int myNumber[] = {25, 55, 75, 100};
    int i;
    for(i=0;i<=3;i++)
        printf("%d\n",myNumber[i]);
    /*
        print the value of the second element in the myNumber in the myNumber array
    */
    printf("%d\t \n",myNumber[1]); //55
    /*
        Change the value of the first element to 33;
    */
    myNumber[0] = 33;
    printf("%d\n",myNumber[0]);  //33
    /*
        Loop through the element in the array using a for loop.
    */
    int r;
    for(r=0;r<=4;r++)
        printf("%d\n",myNumber[r]);


return 0;
}
