/*
    Reading  File
*/
#include <stdio.h>
int main() {
    FILE *fptr;

    //Open a file in read mode
    fptr = fopen("newfile.txt","r");

    // Store the content of the file
    char myString[100];

    //Read the content and store it inside myString
    fgets(myString, 100,fptr);

    //print file content
    printf("%s",myString);

    fclose(fptr);


    return 0;
}
