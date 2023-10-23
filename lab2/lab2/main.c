#include <stdio.h>
#include <stdlib.h>

int main()
{
char operation;
int num1,num2;
printf("Enter the first number: ");
while(!scanf("%d",&num1)){
    printf("OOP!Please enter correct type of first number :");
    getchar();
    //scanf("%d",&num1);
}
printf("Enter the second number: ");
while(!scanf("%d",&num2)){
    printf("OOP!Please enter correct type of second number :");
    getchar();
    //scanf("%d",&num2);
}
printf("Enter the operation: ");
scanf(" %c",&operation);


switch(operation){
case '+':
    printf("The result is %d + %d = %d",num1,num2,num1+num2);
    break;
case '-':
    printf("The result is %d - %d = %d",num1,num2,num1-num2);
    break;
case '*':
    printf("The result is %d * %d = %d",num1,num2,num1*num2);
    break;
case '/':
    if(0==num2)
        printf("There is error divide by 0");
    else
        printf("The result is %d / %d = %lf",num1,num2,(double)num1/num2);
        break;
default:
    printf("You enter an error operation");
}
   return 0;
}
































/*if(scanf(" %c",&operation)!=2){
    getchar();
    printf("OOP!Please enter correct type like ( + or - or * or / ) :");
    scanf(" %c",&operation);
}
*/
