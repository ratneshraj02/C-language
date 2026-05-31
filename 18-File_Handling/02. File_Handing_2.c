#include <stdio.h>
int main() {
    FILE *FileName;

    //open the file
    FileName = fopen("1_filename.txt","w");

    //write the file
    fprintf(FileName,"My Name is Ratnesh Kumar I am from Sonepur and the sonpur located in the bank of river ganga and  old gandak");


    //close the file
    fclose(FileName);




return 0;
}
