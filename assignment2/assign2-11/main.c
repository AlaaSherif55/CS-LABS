#include <stdio.h>
#include <stdlib.h>
int check_power_2(int i){
  if(i%2==0){
    return 1;
  }else{
      return 0;
  }
}
int main()
{
    int num1=0;
    printf("Enter the number: ");
    scanf("%d",&num1);
    if(check_power_2(num1)){
        printf("the %d is a power of 2",num1);
    }else{
        printf("the %d is not a power of 2",num1);
    }

    return 0;
}
