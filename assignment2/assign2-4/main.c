#include <stdio.h>
#include <stdlib.h>

 double make_operation(int num1,int num2,char op){
       switch(op){
    case '+':
        return num1+num2;
        break;
    case '-':
        return num1+num2;
        printf("%.1lf - %.1lf = %.1lf",num1,num2,num1-num2);
        break;
    case '*':
        return num1*num2;

        break;
    case '/':
        if(0==num2){
            return 0;
        }else{
              return num1/num2;
        }
        break;
    default:
        return -1;
    }
}

int main()
{
    char operation;
    double num1,num2;
    printf("Enter the two numbers: ");
    scanf("%lf %lf",&num1,&num2);
    printf("Enter the operation: ");
    scanf(" %c",&operation);
    double result=make_operation(num1,num2,operation);
    if(0==result&&operation=='/'){
           printf("can't divide into zero");
    }
    else if(-1==result){
        printf("Operator is not correct");
    }
    else{
        printf("%.1lf %c %.1lf = %.1lf",num1,operation,num2,result);

    }
    return 0;
}
