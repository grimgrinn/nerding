/* day 5 recursive power of 3 */

#include<stdio.h>

int recpow(int power);

int power, powered;

int main (void)
{
    printf(" enter the power you wouls like to shift the 3 \n");
    scanf("%d", &power);
    powered = recpow(power);
    printf(" 3 powered to %d equals : %d", power, powered);
    return 0;
}

int recpow(int power) 
{
    int three = 3;
    if(power == 1)
        return 1;
    else {
        three *= power-1;
        return three;
    }
}
