
/* grades.c = Sample program with array 
 * Get 10 grades and then average them */

#include<stdio.h>

#define MAX_GRADE 100
#define STUDENTS 10

int grades [STUDENTS];

int idx;
int total = 0;

int main (void)
{
    for( idx = 0; idx < STUDENTS;idx++)
    {
        printf("Enter Person %d's grade: ", idx + 1);
        scanf("%d", &grades[idx]);

        while ( grades[idx] > MAX_GRADE )
        {
            printf("\nThe hights grade possible is %d", MAX_GRADE);
            printf("\nEnter correct gradeK: ");
            scanf("%d", &grades[idx]);
        }
        total += grades[idx];
    }

    printf("\n\nThe average score is %d\n", (total / STUDENTS));

    return (0);
}

