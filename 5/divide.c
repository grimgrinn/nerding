/* day 5 divide of two numbers function by each other */
#include<stdio.h>

int a, b;
float c;

float divide(int a, int b);

int main (void) 
{
    printf("enter two number that will divided by each other\n");
    scanf("%d%d", &a, &b);
    if ( a == 0 || b == 0 ) {
        printf("no zero allowed! \n");
    } 
    else {
        c = divide(a, b);
        printf("%d divide by %d equals  %f", a, b, c);
    }
    return 0;
}

float divide(int a, int b)
{
    return (a / b);
}
