/* WAP to print a for apple, b for ball etc. */
#include <stdio.h>
#include <ctype.h>
int main(){

    char ch;
    printf("Enter the alphabet :");
    switch (ch = tolower(getchar()))
    {
    case 'a': printf("a for apple");
        break;
    case 'b': printf("b for ball");
        break;
    case 'c': printf("c for cat");
        break;
    case 'd': printf("d for dog");
        break;
    case 'e': printf("e for elephant");
        break;
    case 'f': printf("f for fish");
        break;
    case 'g': printf("g for gun");
        break;
    case 'h': printf("h for hen");
        break;
    case 'i': printf("i for ice-cream");
        break;
    case 'j': printf("j for jug");
        break;
    case 'k': printf("k for kite");
        break;
    case 'l': printf("l for lion");
        break;
    case 'm': printf("m for monkey");
        break;
    case 'n': printf("n for nest");
        break;
    case 'o': printf("o for owl");
        break;
    case 'p': printf("p for parrot");
        break;
    case 'q': printf("q for queen");
        break;
    case 'r': printf("r for rat");
        break;
    case 's': printf("s for sun");
        break;
    case 't': printf("t for tiger");
        break;
    case 'u': printf("u for umbrall");
        break;
    case 'v': printf("v for van");
        break;
    case 'w': printf("w for watch");
        break;
    case 'x': printf("x for x-ray");
        break;
    case 'y': printf("y for yak");
        break;
    case 'z': printf("z for zoo");
        break;
    default:
        printf("Invalid input");
        break;
    }

    return 0;
}