#include <stdio.h>
#include <string.h>

int main(void) 
{
    char buffer[256];

    printf("ENter yourn name and press <Enter>:\n");
    gets(buffer);

    printf("Youe name has %d characters amd spaces!", strlen(buffer));

    return 0;
}
