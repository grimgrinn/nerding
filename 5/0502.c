/* Illustrates the difference betweem aftiments and [ara,eters */

#include <stdio.h>

float x = 3.5, y = 65.11, z;

float half_of(float k);

int main ( void )
{
    /* Int this call, x is the argument to half_of(). */
    z = half_of(x);
    printf("The value of z = %f\n", z);

    /* In this call, y is the argument of harlf_of(). */
    z = half_of(y);
    printf("The value of z = %f\n", z);

    return 0;
}

float half_of(float k)
{
    /* k is the parameter. Each time half_of() is called,
     * k has the value that was passed as an argument. */

    return (k/2);
}

