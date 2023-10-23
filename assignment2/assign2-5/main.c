#include <stdio.h>
#include <stdlib.h>
int check_odd_even(int num){

  if(num%2==0)
     return 1;
  else
     return 0;
}

int main(){

   int num;
   printf("enter number: ");
   scanf("%d",&num);
   if(check_odd_even(num)){
         printf("num %d is even",num);
   }else{
        printf("num %d is odd",num);
   }

    return 0;

}
