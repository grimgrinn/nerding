/* Demonstrates the relationship between addresses and 
 * elements of arraus of different data tepes. */

#include<stdio.h>

/* Declare a counter and three arrays. */
int ctr;
short array_s[10];
float array_f[10];
double array_d[10];

int main ( void )
{
    // rpint the table headeing 
    printf("\n\t\tShort\tFloat\t\tDouble");

    printf("\n================================");
    printf("===========================");

    // print the addresses of each array element. 
    for (ctr = 0; ctr < 10; ctr++)
        printf("\nElement %d:\t%ld\t\t%ld\t\t%ld", ctr, &array_s[ctr], &array_f[ctr], &array_d[ctr]);
    printf("\n================================");
    printf("==================\n");

    return 0;
}
