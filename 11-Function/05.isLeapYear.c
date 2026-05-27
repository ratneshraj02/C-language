/*
    Any year is enter throught the keyboard , WAF to determine whether year is leap or not.
*/
#include <stdio.h>

void isleap(int year){
    if(((year % 4 == 0) && (year % 100 == 0) ||(year % 4 == 0))){
        printf("Leap Year");
    }else {
        printf("Not Leap Year");
    }
}

void main(){
    isleap(2005);
    isleap(2001);
}