#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
   int num,inttest;
   float floattest;
   printf("Enter the number: ");
   scanf("%d",&num);
   if(num<0){
    printf("it is not a positive number");
   }else{
   floattest=sqrt((double)num);
   inttest=floattest;
   if(inttest==floattest){
    printf("%d is a perfect square",num);
   }else{
    printf("%d is not a perfect square",num);
   }
   }
    return 0;
}
