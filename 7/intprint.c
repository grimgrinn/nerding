/* day 7 ex 3 get an integer value and print it*/

#include<stdio.h>

void arrPrint(int arr[]);

int main (void)
{
    int number = 1;
    int arr[7];
    int cnt = 0;


    puts("enter an even intger");
    while(cnt <= 7 && number != 99 )
    {
        while (number % 2 != 0)
        {    
           scanf("%d", &number);
           arr[cnt] = number;
        }
        cnt++;
    }

    printf("\n you entered : \n");
    arrPrint(arr);

    return 0;
}

void arrPrint(int arr[])
{
    for(int i = 0; i < 7; i++){
        printf("%d\n", arr[i]);    
    }
}

