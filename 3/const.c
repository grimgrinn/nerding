#include <stdio.h>

#define GRAMS_PER_POUND 454

const int TARGET_YEAR = 2010;

long weight_in_grams, weight_in_pounds;
int year_of_birth, age_in_2010;

int main (void) 
{
    /*input data from user*/

    printf("Enter yuour weight in pounds: ");
    scanf("%d",&weight_in_pounds);
    printf("Enter your year of birth: ");
    scanf("%d",&year_of_birth);

    /*perform conversions*/

    weight_in_grams = weight_in_pounds * GRAMS_PER_POUND;
    age_in_2010 = TARGET_YEAR - year_of_birth;

    /*dispay results on the screen*/
    
    printf("\nYour weight in grams = %ld", weight_in_grams);
    printf("\nIn 2010 you was %d yers old\n", age_in_2010);

    return 0;
}
