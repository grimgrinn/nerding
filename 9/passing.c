/* Passing an array to a functionl */

#include<stdio.h>

#define MAX 10

int array[MAX], count;

int largest(int num_array[], int length);

int main (void)
{
    // inout MAX values from the keyboard
    for (count = 0; count < MAX; count++)
    {
        printf("Enter an integer value: ");
        scanf("%d", &array[count]);
    }

    // call the function and display the return value 
    printf("\nLargest value = %d\n", largest(array, MAX));

    return 0;
}
/* Function largest() returnsd the largest value 
 * int an integer array */

int largest( int num_array[], int length )
{
    int count, biggest = -12000;

    for ( count = 0; count < length; count++ )
    {
        if (num_array[count] > biggest)
            biggest = num_array[count];
    }

    return biggest;
}
