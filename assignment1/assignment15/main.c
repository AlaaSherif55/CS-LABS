#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,result,power;
    printf("Enter the number: ");
    scanf("%d",&number);
    printf("Enter the power ");
    scanf("%d",&power);
    result=1;
    for(int i=0;i<power;i++){
        result*=number;
    }
    printf("The result is:%d",result);
    return 0;
}
