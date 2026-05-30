#include <stdio.h>
#include <string.h>
union Student{
    int roll;
    char name[50];
};

void main(){

    union Student s;
    union Student *ptr = &s;

    ptr->roll = 1;
    strcpy(ptr->name, "Ratnesh Kumar");

    printf("roll no : %d\n",ptr->roll);
    printf("name : %s\n", ptr -> name);

    printf("location of Student : %p\n",ptr);
    printf("size of Student : %ld\n",sizeof(ptr));


    printf("location of Student member roll : %p\n",&ptr->roll);
    printf("size of student member roll : %ld\n",sizeof(ptr->roll));


    printf("locatio of student member name : %p\n",&ptr->name);
    printf("size of student member name %ld \n", sizeof(*ptr->name));


}