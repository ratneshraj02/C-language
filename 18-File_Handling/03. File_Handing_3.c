#include <stdio.h>
int main(){
    FILE*fptr;

    //open file
    fptr = fopen("filename_2.txt","w");

    //write file
    fptr = fopen("filename_2.txt","w");

    //write the text
    fprintf(fptr,"Ratnesh Kumar\n");

    //append the text
    fptr = fopen("filename_2.txt","a");

    //write the text
    fprintf(fptr,"\n  my  name is ratnesh kumar");

    //close file
    fclose(fptr);





return 0;
}
