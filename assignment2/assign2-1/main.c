#include <stdio.h>
#include <stdlib.h>

int cupe(int num){
    int c=1;
    for(int i=0;i<3;i++){
        c*=num;
    }
    return c;
}

int main()
{
    int i;
    printf("The number to get the cube of it: ");
    scanf("%d",&i);
    int result=cupe(i);
    printf("The cube of %d = %d",i,result);
    return 0;
}
