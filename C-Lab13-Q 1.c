#include <stdio.h>
#include <stdlib.h>

void findSDP(int x,int y)
{
    int sum=0,difference=0,product=0;
    sum=x+y;
    difference=x-y;
    product=x*y;
    printf("Sum is %d : \n",sum);
    printf("Difference is %d  : \n",difference);
    printf("Product is %d : \n",product);

}
int main()
{
    int num1, num2;

    printf("Enter first number : \n");
    scanf("%d ", &num1);

    printf("Enter second number : \n");
    scanf("%d ", &num2);

    findSDP(num1,num2);

    return 0;
}
