/* Demonstrates the use of if statement with else clause */

#include <stdio.h>

int x, y;

int main (void)
{
    /* Input the tow calues to ve tested */

    printf("\nInput an integer value for x: ");
    scanf("%d", &x);
    printf("\nInput an integer valuer for y: " );
    scanf("%d", &y);

    /* Test calues and priont result */

    if (x == y)
        printf("x is equal to y\n");
    else
        if (x > y)
            printf("x is greater tham y \n");
        else
            printf("x is smaller than y \n");

    return 0;
}
