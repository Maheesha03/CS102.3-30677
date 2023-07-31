#include <stdio.h>
#include <stdlib.h>

//Question 1

int main()
{
    int num,ans;

    printf("Enter a number");
    scanf("%d",&num);

    ans=num%2;

    if (ans==0)
        printf("%d is an even \n",num);
    else
        printf("%d is an odd \n",num);

    return 0;
}
