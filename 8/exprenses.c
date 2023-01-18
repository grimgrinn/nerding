/* expences.c - Demonstrates use of an array */

#include<stdio.h>

/* Declare an array to hold expenses, and a counter varialbe */

float expenses[13];
int count;

int main( void )
{
    /* Input data from keyboard into array */

    for (count = 1; count < 13; count++)
    {
        printf("Enter expenses for month %d:", count);
        scanf("%f", &expenses[count]);
    }

    /* Print array contents */

    for (count = 1; count < 13; count++)
    {
        printf("Moth %d = $%.2f\n", count, expenses[count]);
        
    }
    return 0;
}
