#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no1,no2;

    printf("Input the first integer : ");
    scanf("%d",&no1);
    printf("Input the second integer : ");
    scanf("%d",&no2);

    if(no1%no2==0)
        printf("\n %d is a multiple of %d. \n",no1,no2);
    else
        printf("\n %d is not a multiple of %d. \n",no1,no2);

    return 0;
}
