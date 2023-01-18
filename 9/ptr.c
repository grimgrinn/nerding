/* Demossntrates basic pointer use. */

#include<stdio.h>

/* Declare and initialize and int variable */
int var = 1;

/* Declare a pointer to int */
int *ptr;

int main( void )
{
    /* initialize ptr to point to var */
    ptr = &var;

    // access var directly and indirectly
    printf("\nDirect access, var = %d", var);
    printf("\nIndirecrt access, var = %d", *ptr);

    //display the address of ver two ways
    printf("\nThe address of var = %d", &var);
    printf("\nThe address of var = %d\n", ptr);

    return 0;
}
