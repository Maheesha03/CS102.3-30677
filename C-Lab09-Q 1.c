#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,digit,sum=0;

    printf("Enter  the number");
    scanf("%d",&num);

    while(num>0)
    {
        digit=num%10;
        sum=sum+digit;
        num/=10;
    }

    printf("Sum of all digits: %d\n",sum);

    return 0;
}
