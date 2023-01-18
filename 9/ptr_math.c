/* Demonstrates using pointer arithmetic to access
 * array elements with pointer notation. */

#include<stdio.h>
#define MAX 10

// declare and intialize an inyeger array . 
int i_array[MAX] = {0,1,2,3,4,5,6,7,8,9};

// declare a pointer to int and an int variable. 
int *i_ptr, count;

// declare and initializa float array
float f_array[MAX] = { .0, .1, .2, .3, .4, .5, .6, .7, .8, .9 };

// declare pointer fo float
float *f_ptr;

int main ( void )
{
    // initialize the pointers 

    i_ptr = i_array;
    f_ptr = f_array;

    // print the array elements

    for ( count = 0; count < MAX; count++ )
        printf("%d\t%f\n", *i_ptr++, *f_ptr++);
    
    return 0;
}
