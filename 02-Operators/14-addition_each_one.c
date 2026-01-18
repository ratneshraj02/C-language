//If a five digit number is input throught the keyboard. write a program to print a new number by adding one of each of its digits. For example, if the number that is input is 12391, then the ouput should be displayed as 23402.

#include <stdio.h>
int main(){
    int digit, res = 0;

    printf("Enter the four digit : ");
    scanf("%d", &digit);
    // digit = 12391;

    int f_rem = digit / 10000;
    res += (f_rem + f_rem) * 10000;

    int s_rem = digit / 1000;
    s_rem %= 10;
    res += (f_rem + s_rem) * 1000;

    int t_rem = digit / 100;
    t_rem %= 10;
    res += (f_rem + t_rem) * 100;

    int ff_rem = digit / 10;
    ff_rem %= 10;
    res += ((f_rem + ff_rem) % 10) * 10;

    int fi_rem = digit % 10;
    res += (f_rem + fi_rem) * 1;

    printf("\n final result :%d", res);

    return 0;

}