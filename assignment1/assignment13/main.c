#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,flag=0;
    printf("Enter the number: ");
    scanf("%d",&number);
    while(number<0){
        printf("OOPS! it is a negative number ,please enter a positive number");
        scanf("%d",&number);
    }
    for(int i=2;i<number/2;i++){
        if(0==number%i){
         flag=1;
        }
    }
    if(flag==1){
           printf("This number %d is not a prime number",number);
    }else{
          printf("This number %d is a prime number",number);
    }

    return 0;
}
