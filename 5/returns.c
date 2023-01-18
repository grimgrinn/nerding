/* Demonstrates using multiple return statemtns in a function. */

#include <stdio.h>

int x, y, z;

int larger_of(int a, int b);
  
int main (void)
{
    puts("Rnter two different iteger values: ");
    scanf("%d%d", &x, &y);

    z = larger_of(x,y);

    printf("\nThe larger value is %d.", z);

    return 0;
}

int larger_of(int a, int b)
{
    if (a > b)
        return a;
    else 
        return b;
}
