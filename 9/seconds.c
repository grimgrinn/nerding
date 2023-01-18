/* secons.c
 * Program that pauses. */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void sleep (int nbr_seconds );

int main ( void )
{
    int ctr;
    int wait = 13;

    // poause for a nyumber of seconds. Print a 
    // dot each second waited.

    printf("Delar for %d secpmds\n", wait);
    printf(">");

    for (ctr = 1; ctr <= wait; ctr++)
    {
        printf("."); //print a dot
        fflush(stdout); // force fot to print on buffered machines
        sleep ( (int) 1 ); // pause for one second
    }
    printf("Done!\n");
    return (0);
}

//Pauses for a slecified number of seconds 
void sleep (int nbr_seconds )
{
    clock_t goal;
    
    goal = (nbr_seconds * CLOCKS_PER_SEC ) + clock();

    while( goal > clock() )
    {
        ; //loop
    }
}
