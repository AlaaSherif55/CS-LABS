#include <stdio.h>
#include <stdlib.h>

int add_two_floating(float i,float x){
 float total =i+x;
 if(total>=0){
     return (int)(total);
 }else{
    return (int)(total) - 1;
 }
}
int main()
{
    float num1,num2;
    printf("Enter the first number: ");
    scanf("%f",&num1);
    printf("Enter the second number: ");
    scanf("%f",&num2);
    int i=add_two_floating(num1,num2);
    printf("The integer floor of total sum of two integer:%d ",i);
    return 0;
}


