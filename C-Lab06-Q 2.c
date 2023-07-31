#include <stdio.h>
#include <stdlib.h>

int main()
{
     char dataInt,d;

    printf("Enter the digit");
    scanf("%c",&d);

    if(dataInt>=97&& dataInt<=122)
        printf("You entered a lowercase letter");
        else if(dataInt>=65&& dataInt<=90)
            printf("You entered an uppercase letter");
        else if(dataInt>=49&& dataInt<=57)
            printf("You entered a number");
        else if(dataInt ==32)
            printf("You entered nothing");
        else
           printf("You entered a special characters");

    return 0;
}
