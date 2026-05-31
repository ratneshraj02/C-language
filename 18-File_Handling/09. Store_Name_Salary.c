/*
    Let's see a file handing example to store employee information as entered by user form console.
    We are going to store id. name and  salary of  the employee.

*/
#include <stdio.h>
void main() {
    FILE*fptr;

    int id;
    float salary;
    char name[30];

    /* open file for writing */
    fptr = fopen("emp.txt","w+");
    if (fptr == NULL)
    {
        printf("File does not exits \n");
        return;
    }
    printf("Enter the id : ");
    scanf("%d",&id);
    fprintf(fptr,"id=%d\n",id);

    printf("Enter the Name : ");
    scanf("%s",&name);
    fprintf(fptr,"Name = %s\n",name);

    printf("Enter the salary : ");
    scanf("%f",&salary);
    fprintf(fptr,"salary = %d\n",salary);

     fprintf("Id = %d",id,"Name = %s",name,"Salary = %f",salary);

    fclose(fptr);
}

