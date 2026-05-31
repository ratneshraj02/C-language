//reading file
#include <stdio.h>
int main() {
    FILE*fptr;

    //open file
    fptr = fopen("newfile.txt","r");


    //Store the content of the file
    char myName[100];

    //Reading the content and print it
    while(fgets(myName,100,fptr))  {
        printf("%s",myName);
    }

    //close the file

    fclose(fptr);





    return 0;
}
