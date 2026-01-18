/*  Do While Loop

    NOTE : At least one round of execution ensured

        do {

            statement 1
            statement 2
                    -
                    -
                    -
            statement n
        }

        while(condition)
*/
/* weight loss program */
#include <stdio.h>
int main() {
    int weight ;
    do {
        printf("Go Exercise\n");
        printf("then come back \n");
        printf("Enter your weight : ");
        scanf("%d",weight);
    }
    while(weight > 40);
    weight++;

    return 0;
}
