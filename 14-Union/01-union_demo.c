/* Union */
/*
  Union is a user define data types that can hold different data item similar to a structure, but alike structure all members of union are store in the same memory location since all members share the same memory locations &  changing the value of one members overrides the value of other members.
  
  Union members can be access using the dot(.) operator. Union are useful when you want to say memory by storing different type of data in the same memory space.

*/

#include <stdio.h>
#include <string.h>
union Student{
    int rollNo;
    char name[50];
};

void main(){
    union Student s1, s2;
    union Student *ss1;
    ss1 = &s1;
    s1.rollNo = 1;
    strcpy(s1.name, "Ajay");

    printf("%p", ss2);
    printf("%d\t", s1.rollNo);
    printf("%s\n", s1.name);

    union Student &ss2;
    ss2 = &s2;
    printf("%p", ss2);
    s2.rollNo = 2;
    strcpy(s2.name, "Shyam");

    printf("%d\t", s2.rollNo);
    printf("%s\n", s2.name);
}
