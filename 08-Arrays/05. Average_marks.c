/* WAP to find average marks obtained by a class of 50 student in a test. */
#include <stdio.h>
void main(){
    
    float marks[50] = {
     42, 35, 47, 28, 39, 44, 31, 50, 26, 33,
     41, 37, 29, 45, 34, 48, 22, 40, 36, 27,
     49, 32, 38, 24, 46, 30, 43, 35, 21, 47,
     34, 28, 41, 44, 26, 39, 50, 23, 37, 31,
     45, 29, 33, 48, 27, 40, 36, 42, 25, 49
    };
    
    float totalMarks, Avg =  0.0;
    for(int i = 0; i < 50; i++){
        totalMarks += marks[i];
    }
    Avg = totalMarks/50;
    printf("Average of total student is %f\n",Avg);
}
