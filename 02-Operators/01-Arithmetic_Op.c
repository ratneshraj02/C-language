/*
    Arithmatic Operator : It use to do arithmatic function to operatend
    example :
                    Addition ( + )
                    Substraction ( - _
                    Multiplication ( * )
                    Division or quotent ( / )
                    Reminder ( % )
*/
/*
    Suppose X & Y are two integer variable whose value are 13 and  5 respectively

*/
#include <stdio.h>
int main(){

    int x, y;
    x  = 13;
    y = 5;

        //Arithmatic Operator
    int addition;
    addition = x + y;
    printf(" Addition : %d\n",addition);

    int substraction;
    substraction = x - y;
    printf("Substraction : %d\n",substraction);

    int multiplication;
    multiplication = x * y;
    printf("Multiplication : %d\n",multiplication);

    int division;
    division = x / y;
    printf("Division : %d\n",division);

    int reminder;
    reminder = x % y;
    printf("Reminder : %d\n",reminder);

return 0;
}
