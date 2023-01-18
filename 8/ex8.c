/* c21 day 8 exercise 8 */

#include<stdio.h>
#include<stdlib.h>

int superarray[1000];
int a, b, average;

int main ( void )
{
    for(a = 0; a < 1000; a++)
    {

        superarray[a] = rand();
        
        average += superarray[a];

        printf("\n %d  element is %d", a, superarray[a]);
        printf("\n average is %d", average);
    }

    printf("\nThe average of all 1000 els is :", average/1000);
    
    for (a = 0; a < 1000; a++)
    {
        for (b = 0; b < 10; b++)
        {
            printf("\n %d,  %d",a, superarray[a]);
            printf("\nPut enter to continue see elemets!");
            getchar();
        }
    }

}
