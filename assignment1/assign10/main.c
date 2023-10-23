#include <stdio.h>
#include <stdlib.h>

int main()
{
  char operation;
    double num1,num2;
    printf("Enter the two numbers: ");
    scanf("%lf %lf",&num1,&num2);
    printf("Enter the operation: ");
    scanf(" %c",&operation);
    switch(operation){
    case '+':
        printf("%.1lf + %.1lf = %.1lf",num1,num2,num1+num2);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf",num1,num2,num1-num2);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf",num1,num2,num1*num2);
        break;
    case '/':
        if(0==num2){
            printf("can't divide into zero");
        }else{
              printf("%.1lf / %.1lf = %.1lf",num1,num2,num1/num2);
        }
        break;
    default:
        printf("Operator is not correct");

    }
    return 0;
}
