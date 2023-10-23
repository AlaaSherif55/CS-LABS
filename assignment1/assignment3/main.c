#include <stdio.h>
#include <stdlib.h>

int main()
{
   double c,f;
   printf("Enter the temperature in degrees Celsius ");
   scanf("%lf",&c);
   f=c*(9/5)+32;
   printf("The degrees in Fahrenheit:%.1lf",f);
    return 0;
}
