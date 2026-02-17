/* write a program which display roll no and name of 10 students of a class by using the struct.
 */
#include <stdio.h>
struct Student {
    int rollNo;
    char name[50];
};

void main(){
    struct Student s1 = {1, "Ratnesh"};
    printf("%d\n", s1.rollNo);
    printf("%s\n", s1.name);
    struct Student s2 = {2, "Aarav Sharma"};
    printf("%d\n", s2.rollNo);
    printf("%s\n", s2.name);
    struct Student s3 =  {3, "Emily Johnson"};
    printf("%d\n", s3.rollNo);
    printf("%s\n", s3.name);
    struct Student s4 = {4, "Liam Connor"};
    printf("%d\n", s4.rollNo);
    printf("%s\n", s4.name);
    struct Student s5 = {5, "Sophia Martinez"};
    printf("%d\n", s5.rollNo);
    printf("%s\n", s5.name);
    struct Student s6 = {6, "Noah Williams"};
    printf("%d\n", s6.rollNo);
    printf("%s\n", s6.name);
    struct Student s7 = {7, "Aisha Khan"};
    printf("%d\n", s7.rollNo);
    printf("%s\n", s7.name);
    struct Student s8 = {8, "Ethan Brown"};
    printf("%d\n", s8.rollNo);
    printf("%s\n", s8.name);
    struct Student s9 = {9, "Olivia Davis"};
    printf("%d\n", s9.rollNo);
    printf("%s\n", s9.name);
    struct Student s10 = {10, "Rohan Patel"};
    printf("%d\n", s10.rollNo);
    printf("%s\n", s10.name);
}
