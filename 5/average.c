/* day 5 average of 5 floats function */

#include<stdio.h>

float a, b, c, d, e, answer;
float average( float a, float b, float c, float d, float e);

int main (void)
{
    printf("print 5 values which you want to know the average of! \n");
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
    answer = average(a,b,c,d,e);
    printf("average of %f %f %f %f and %f is : %f", a, b, c, d, e, answer);
}
float average( float a, float b, float c, float d, float e)
{
    float sum;

    sum = a + b + c + d + e;
    return sum / 5;
}


