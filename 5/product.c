/* day 5 product function */

#include <stdio.h>

int a, b, c;
int product(int a , int b);

int main (void)
{
    printf("enter two numbers that will be product \n");
    scanf("%d", &a);
    scanf("%d", &b);
    c = product(a, b);
    printf("product of %d and %d equals to : %d\n", a, b, c);
    return 0;
}

int product( int a, int b )
{
    return (a * b);
}
