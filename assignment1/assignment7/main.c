#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1,num2,num3;
   printf("Enter the first number: ");
   scanf("%d",&num1);
   printf("Enter the second number: ");
   scanf("%d",&num2);
   printf("Enter the third number: ");
   scanf("%d",&num3);
   if(num1>num2&&num1>num3)
       printf("The largest is the first number you enter: %d ",num1);
   else if(num2>num1&&num2>num3)
       printf("The largest is the second number you enter: %d ",num2);
   else
       printf("The largest is the third number you enter: %d ",num3);
    return 0;
}
