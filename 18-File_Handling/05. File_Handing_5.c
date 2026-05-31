/*
    File Handing  Append & Reading File
*/
#include <stdio.h>
int main() {
    FILE*fptr;

    //open file
    fptr = fopen("newfile.txt","a");

    fprintf(fptr,"Ratnesh kuamr");

    fclose(fptr);




return 0;
}
