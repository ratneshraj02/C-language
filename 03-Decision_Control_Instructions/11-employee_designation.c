/* 
    WAP which take input of employee salary find their designation, if salary greater than 40000 than designation will be 'Manager', if salary greater than 25000 designation will be 'Accountant', if salay less than 15000 than designation will be 'Assistant'
*/

#include <stdio.h>
int main(){

    float sal;

    printf("Entet the salary of employee :");
    scanf("%f",&sal);

    if(sal >= 40000){
        printf("\nManager");
    } else {
        if(sal >= 25000){
            printf("\n Accountant");
        } else {
            printf("\n Assistant");
        }
        
    }

}