#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i=1,fac=1,no;

     printf("Enter the number");
     scanf("%d",&no);

     if (no<0)

        printf("Invalid input");
     else if (no==0)
        printf("Fractional = 1");
     else
        for(i=1;i<no;i++)
        fac*=1;
     printf("Fractional = %d",fac);

    return 0;
}
