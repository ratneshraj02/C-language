/* Function */
/*
    In C Function is a named of code blocks that performs a specific tasks.

    1. It allows write a piece of logic onces & reuse it wheneven needed.
    2. This helps keep your clean, organise easy to understand & mangae.
*/
#include <stdio.h>

void area()
{
    float side, sArea;
    printf("Enter the  value of side :");
    scanf("%f", &side);

    sArea = side * side;
    printf("Area of Square :%f", sArea);
};
void main()
{
    area();
}
/* There are two types of functions in C */
/*
    1. Library Function
    2. User define Function

    1. Library Function :-
        Those function which are already define in a C compiler that is called library function.
        e.g :- printf(), scanf(), clrscr() etc.
    
    2. User define Function :-
        Those function which are define by programmer their program which is called User define functions.
        e.g :- area() etc.
 */