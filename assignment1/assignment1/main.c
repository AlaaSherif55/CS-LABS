#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;
    printf("Enter the two numbers");
    scanf("%d %d",&num1,&num2);
    printf("The result is : %d",((num1+num2)*3)-10);
    return 0;
}
