#include <stdio.h>
#include <string.h>

/* declear the union */
union Student {
    int roll;
    char name[50];
};



void main(){ 

    union Student s1;
    union Student s2;

    //pointer
    union Student *ptr1 = &s1;
    union Student *ptr2 = &s2;

    printf("%p\t %p\n", ptr1, ptr2);

    s1.roll = 1;
    strcpy(s1.name, "Ratnesh Kumar");
    
    printf("%d\n", s1.roll);
    printf("%s\n",s1.name);

    

    s1.roll = 2;
    strcpy(s2.name, "Ram Kumar");
    
    printf("%d\n", s2.roll);
    printf("%s\n",s2.name);
}