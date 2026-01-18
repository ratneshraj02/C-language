#include <stdio.h>
int main(){
    /*
        String Exercise
    */

    /*
        Fill the missing part to create a 'string' named greetings, and assign it the value Hello.
    */
    char greeting[] = {'Hello'};
    /*
    Another way of creating strings:
    Fill in the missing part to create a "Sting" named greetings, and assign it the value "Hi".
    */
    char greeting1[] = {'H', 'i'};

    /*
        use the correct format specifier to output the string:
    */
    char greeting2[] = {"Hello World"};
    printf("%s\n",greeting2); //Hello World

    /*
        print the first character in the greeting3 string
    */
    char greeting3[] = "Hello World";
    printf("%c\n",greeting3[0]);  //H

return 0;
}
