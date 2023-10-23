#include <stdio.h>
#include <stdlib.h>

void swap_two_num(int *i,int *y ){

   int temp;
   temp=*i;
   *i=*y;
   *y=temp;

}
int main()
{
    int num1,num2;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    swap_two_num(&num1,&num2);
    printf("The value of first number after swap is %d\n",num1);
    printf("The value of second number after swap is %d\n",num2);
    return 0;
}
