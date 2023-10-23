#include <stdio.h>
#include <stdlib.h>

int main()
{
   double radius,area,cir;
   printf("Enter the radius of a circle ");
   scanf("%lf",&radius);
   area=(22/7)*radius*radius;
   cir=2*(22/7)*radius;
   printf("The area of a circle is %.1lf\n",area);
   printf("The circumference of a circle is %.1lf",cir);
    return 0;
}
