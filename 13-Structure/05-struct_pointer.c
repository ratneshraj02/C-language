#include <stdio.h>
 
struct Student {
    int rollNo;
    char name[50];
};

void main(){

    struct Student s = {1, "Ratnesh Kumar"};
    struct Student *s1 = &s;
    
    printf("%p\n", s1);
    printf("%p\n",&s);
    printf("%d\n",(*s1).rollNo);
    printf("%s\n", (*s1).name);

    struct Student ss = {2, "Raju"};
    struct Student *ss1 = &ss;

    printf("%p\n", ss);
    printf("%p\n",&ss1);
    printf("%d\n",(*ss1).rollNo);
    printf("%s\n", (*ss1).name);


}