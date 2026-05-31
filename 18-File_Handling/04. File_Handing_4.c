/*
    File Handing and Write , Append and Reading
*/

#include <stdio.h>
int main(){
    FILE*fptr;
    //Create a file
    fptr = fopen("newfile.txt","w");


    //write a file
    fprintf(fptr,"Hi,....\n Ratnesh Kumar");

    fclose(fptr);

return 0;
}
