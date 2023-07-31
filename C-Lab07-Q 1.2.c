#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    printf("Enter a number");
    scanf("%d",&number);

    switch (number%2)
    {
        case 0: printf("Even Number");
        break;
        case 1: printf("Odd Number");
        break;
    }
    return 0;
}
