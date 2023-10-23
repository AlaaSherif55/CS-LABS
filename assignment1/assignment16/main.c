#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,reverse=0,i=0;
    printf("Enter the number: ");
    scanf("%d",&number);
    while(number){
        i=number%10;
        reverse=reverse*10+i;
        number/=10;
    }
    printf("This is the reverse number: %d",reverse);
    return 0;
}
