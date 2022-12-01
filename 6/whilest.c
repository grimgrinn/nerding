/* Demonstrates s simple while statement */

#include<stdio.h>

int count;

int main ( void )
{
    /* Print the numbers 1 thtough 20 */
    count = 1;

    while (count <= 20)
    {
        printf("%d\n", count);
        count++;
    }

    return 0;
}
