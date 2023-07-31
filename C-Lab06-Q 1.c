#include <stdio.h>
#include <stdlib.h>

int main()
{
  float radius,area,circumference,diameter,PI=3.14;

  printf("Enter the radius or a circle : ");
  scanf("%f",&radius);

  printf("Enter of a circle = $.2f \n",2*radius);
  printf("Circumference of a circle = $.2f \n",2*PI*radius);
  printf("Area of a circle = $.2f \n",PI*radius*radius);

    return 0;
}
