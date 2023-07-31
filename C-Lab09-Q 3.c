#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base,exp,result=1;

    printf("Enter the base: ");
    scanf("%d",&base);

    printf("Enter the Exponet: ");
    scanf("%d",&exp);

    for(int i=0; i < exp; i++)
    {
        result = result * base;
    }

    printf("The power - %d",result);

    return 0;
}
