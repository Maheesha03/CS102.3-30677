#include <stdio.h>
#include <stdlib.h>

double sample (int num1,float num2)
{
    double answer = num1 * num2;
    return answer;
}

int main()
{
    int num1, num2;

    printf("Input number 1 : ");
    scanf("%f",&num1);

    printf("Input number 2 : ");
    scanf("%f",&num2);

    //double answer = sample(num1,num2)
    printf("%lf",sample(num1,num2));

    return 0;
}
