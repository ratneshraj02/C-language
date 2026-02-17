/* Structure */
/*
    Structure is a user define data types that can be used to group items of different type into a single entity.

    The 'struct' keyword is used to define a structure. the items in the structure are called members & they have need to declaration of valid data types of an application.

    Structures are envolve for creating linkedlist and trees, structure are also use to represent real objects in a software like students and teachers in a college management software.

*/

#include <stdio.h>

struct Student{
    int roll;
    char name[50];
};

void main(){
    struct Student s = {10, "Ratnesh Kumar"};

    printf("%d\n",s.roll);
    printf("%s\n", s.name);
}