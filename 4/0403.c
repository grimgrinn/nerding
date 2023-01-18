#include <stdio.h>

int x, y;

int main ( void )
{
    printf("\nInout and integer value for x");
    scanf("%d", &x);

    printf("\nInput and integer value for y: ");
    scanf("%d", &y);
    
    /*Test values and print result */

    if (x == y)
        printf("x is equal to y \n");

    if (x > y)
        printf("x is greater than y \n");

    if (x < y)
        printf(" x is smaller than y \n");

    return 0;
}

