#include <stdio.h>
#include <stdlib.h>

int main()
{
      int number,fact=1;
    printf("Enter the number: ");
    scanf("%d",&number);
    while(number<0){
        printf("OOPS! it is a negative number ,please enter a positive number");
        scanf("%d",&number);
    }
    for(int i=1;i<=number;i++){
       fact*=i;
    }
          printf("The result is:%d ",fact);
    return 0;
}
