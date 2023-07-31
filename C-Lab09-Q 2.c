#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,reversed_number=0,digit;

    printf("Enter a number");
    scanf("%d",&num);

    do{
        int dugit = num % 10;
        reversed_number = reversed_number*10 + digit ;
        num /= 10;

    } while(num>0);

    printf("Reversed Number: %d\n",reversed_number);

    return 0;
}
