/*
    Loop :  Group of instructions computer executes repeatedly while some condition remains true.

    Loop in C programming language repect a block of code until the conditon is mate.

    There are three type of loop :
                                -> do while loop
                                -> while loop
                                ->for loop
*/
#include <stdio.h>
int main(){

  int i;
  i = 1;
  while(i<=10)
  {
    printf("%d\n",i);
    i++;
  }


  return 0;
}
