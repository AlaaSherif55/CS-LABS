#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,count=0,i;
    printf("Enter the number : ");
    scanf("%d",&number);
    i=number;
    while(i){
        i/=10;
        count++;
    }
    printf("The number of digits for %d is: %d",number,count);
    return 0;
}
