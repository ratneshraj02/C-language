/*
    WAP to preparation of grade card of 25 student in BCA 2nd sementer.
*/
#include <stdio.h>
void main(){

#include <stdio.h>

    int studentMarks[25][4] = {
        {78, 85, 69, 90},
        {66, 74, 81, 72},
        {88, 92, 79, 85},
        {55, 63, 70, 68},
        {91, 89, 94, 90},
        {72, 76, 68, 74},
        {84, 80, 78, 82},
        {69, 71, 65, 70},
        {95, 93, 97, 96},
        {60, 58, 62, 64},
        {77, 79, 75, 73},
        {83, 86, 88, 84},
        {70, 68, 72, 71},
        {90, 87, 85, 89},
        {64, 66, 61, 63},
        {81, 78, 80, 79},
        {74, 72, 76, 75},
        {68, 70, 67, 69},
        {92, 90, 91, 93},
        {59, 57, 60, 58},
        {86, 88, 84, 87},
        {73, 75, 71, 74},
        {67, 65, 69, 66},
        {89, 91, 88, 90},
        {76, 78, 74, 77}};

    //size
    int n = sizeof(studentMarks) / sizeof(studentMarks[0]);
    int nn = sizeof(studentMarks[0]) / sizeof(studentMarks[0][0]);
    printf("%d \n", n);
    printf("%d \n", nn);

    //find the total marks of student
    int totalMarks[n][0];
    for(int i = 0; i < n; i++){
        int total = 0;
        for(int j = 0; j < nn; j++){
            total += studentMarks[i][j];
        }
        for(int k = 0; k < 1; k++){
            totalMarks[i][k] = total;
        }    
        
    }


    //find the grade of student
    char grade[n][nn];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < nn; j++){
            if(studentMarks[i][j] >= 60){
              grade[i][j] = 'A';  
            }
            else if(studentMarks[i][j] < 60 && studentMarks[i][j] >= 45){
                grade[i][j] = 'B';
            }
            else if(studentMarks[i][j] < 45 && studentMarks[i][j] >= 30){
                grade[i][j] = 'C';  
            }
            else {
                grade[i][j] = 'F';
            }
        }
    }


    // Display Grade Card
    printf("\nGRADE CARD - BCA 2nd YEAR\n");
    printf("-------------------------------------------------------------\n");
    printf("Roll  C   DSA  NET  BA   | Grades\n");
    printf("-------------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%3d  ", i + 1);
        for (int j = 0; j < nn; j++) {
            printf("%3d ", studentMarks[i][j]);
        }
        printf(" | ");
        for (int j = 0; j < nn; j++) {
            printf(" %c ", grade[i][j]);
        }
        printf("|");
        for(int j = 0; j < 1; j++){
            printf(" %d ", totalMarks[i][j]);
        }
        printf("\n");
    }



}