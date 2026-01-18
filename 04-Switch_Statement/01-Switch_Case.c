/* Switch Case */
/*
    The causes a particular group of statement of statement  to chosen from several available groups
*/
/*
        Uses "switch" statement and "case" lables
        syntax of the switch statement
 */
/*
    Switch (expression) {
        case expression 1:{     }
        case expression 2:{    }

        case expression n :  {      }
        dafault : {      }
*/
#include <stdio.h>
int main() {
    //example

    char letter;
    printf("Enter the letter : ");
    scanf("%c",&letter);

    switch(letter){
        case 'A' :  printf("First letter \n");
            break;
        case 'Z': printf("Last letter\n");
            break;
        default: printf("Middle letter\n");
            break;
    }
    return 0;
}
