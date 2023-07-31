#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size_1,size_2;
    int sum_1=0,sum_2=0;
    int i;

    printf("Input the array size of array - ");
    scanf("%d",&size_1);

    int array_1[size_1];

    for(i=0;i<size_1;i++)
    {
        printf("Input the %d value to array - ",i+1);
        scanf("%d",&array_1[i]);
        sum_1 = array_1[i]+sum_1;
    }

    printf("Scaler sum of array 1 is = %d \n\n",sum_1);

    int array_2[size_1];

    for(i=0;i<size_1;i++)
    {
        printf("Input the %d value to array = ",i+1);
        scanf("%d",&array_2[i]);
        sum_2 = array_2[i]+sum_2;
    }

    printf("Scaler sum of array 2 is = %d \n\n",sum_2);

    int sum[size_1] ;

    for (i=0;i<size_1;i++)
    {
        sum[i]=array_1[i]+array_2[i];
        prod[i]=array_1[i]*array_2[i];
    }

    printf(" Vector sum of array 1 & 2 is : ");
    for (i=0;i<size_1;i++)
    {
        printf("\t %d",sum[i]);
    }

    printf("\n Vector Product of array 1 & 2 is : ");
    for (i=0;i<size_1;i++)
    {
        printf("\t %d",&prod[i]);
        total=total+prod[i];
    }

    printf("\n Scaler Product is %d \n",total);

    return 0;
}
