#include <stdio.h>
#include <stdlib.h>

int calculate_heater(int i){
   if(i>=0&&i<=30){
    return 7;
   }else if(i>30&&i<=60){
       return 5;
   }else if(i>60&&i<=90){
       return 5;
   }else if(i>90&&i<=100){
       return 1;
   }else{
       return 0;
   }
}
int main()
{
    int temp,result;
    printf("Enter the temperature: ");
    scanf("%d",&temp);
    result=calculate_heater(temp);
    printf("the heater to temperature %d is %d",temp,result);
    return 0;
}
