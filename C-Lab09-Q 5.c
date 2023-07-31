#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num, original_number, remainder, count=0, result=0;

   printf("Enter a number: ");
   scanf("%d",&num);

   original_number = num;

   while(original_number != 0)
   {
       remainder = original_number % 10;
       count ++;

       original_number /= 10;
   }
   original_number = num;

   for(int i=0; i<count; i++)
   {
       remainder = original_number % 10;
       result += pow(remainder,count);
       original_number/= 10;
   }


    if(result == num)
    {
        printf("%d is an Armstrong number. \n",num);
    }
    else
    {
        printf("%d is not an Armstrong number. \n",num);
    }

    return 0;
}
