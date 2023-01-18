/* c21 day 8 exercise 7 */

#include<stdio.h>
#include<stdlib.h>

 int twodim[5][4];
 int a, b;

int main ( void )
{
    printf("\n twodim array gona be init");

    for ( a = 0; a < 5; a++ )
    {
        for ( b = 0; b < 4; b++ )
        {
            twodim[a][b] = rand();
        }
    }


    printf("\n printing twodim : ");

    for ( a = 0; a < 5; a++ ) 
    {
        for ( b = 0; b < 4; b++ )
        {
            printf(" %d ", twodim[a][b]);
        }
        printf("\n");    
    }
    
    return 0;
}
