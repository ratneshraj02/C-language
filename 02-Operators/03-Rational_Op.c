/*
    Rational Operator : Used to compare two quantities.
            they give answer in form of "0" & "1";
*/
/*
    <     = Less than
    <=  = Less than equal to
    >    = Greater than
    >=  = Greater than equal to
    ==  = Equal to
    !=   =Not equal to
*/
#include <stdio.h>
int main(){
    //rational operator
    int x, y;
    x = 5;
    y = 7;

    //Less than
    int less_then;
    less_then = (x<y);
    printf("Less then : %d\n",less_then); //1

    //less than equal to
    int less_then_equal;
    less_then_equal = (x <= y);
    printf("Less than equal to : %d\n",less_then_equal);  //1

    //greater than
    int greater_then;
    greater_then = (x>y);  //0
    printf("Greater than : %d\n",greater_then); //0

    //greater then equal to
    int greater_then_equal;
    greater_then_equal = (x>=y);
    printf("Greater than equal to : %d\n",greater_then_equal);  //0

    //equal to
    int equal;
    equal = (x==y);
    printf("Equal to : %d\n",equal);  //0

    //not equal to
    int not_equal;
    not_equal = (x!=y);
    printf("Not equal to : %d\n",not_equal); //1






    return 0;
}
