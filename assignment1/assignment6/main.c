#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1,num2,num3;
   printf("Enter the first number: ");
   scanf("%d",&num1);
   printf("Enter the second number: ");
   scanf("%d",&num2);

   if(num1==num2)
       printf("The two numbers are equal");
   else if (num2>num1)
       printf("The two numbers are not equal and the %d are the largest number ",num2);
   else{
    printf("The two numbers are not equal and the %d are the largest number ",num1);
   }

    return 0;
}
