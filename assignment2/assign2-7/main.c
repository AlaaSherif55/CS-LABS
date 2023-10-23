#include <stdio.h>
#include <stdlib.h>

char check_mult_num(int i,int y ){

   if(i%y==0){
    return 1 ;
   }else{
       return 0;
   }

}
int main()
{
    int num1,num2;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    if(check_mult_num(num1,num2)){
        printf("the number %d is the multiple of number %d",num1,num2);
    }else{
         printf("the number %d is not  the multiple of number %d",num1,num2);
    }
    return 0;
}

