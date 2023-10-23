#include <stdio.h>
#include <stdlib.h>
int check_holes(int i )
{
    if(1==i||2==i||3==i||5==i||i==7)
    {
        return 0;
    }
    else if(0==i||4==i||6==i||9==i)
    {
        return 1;
    }
    else
    {
        return 2;
    }

}
int main()
{
    int num,sum=0,num2,r;
    printf("Enter the number: ");
    scanf("%d",&num);
    num2=num;
    r=num;
    while(r){
        num2=r%10;
        r/=10;
        sum+=check_holes(num2);
    }
    printf("The number %d has %d holes ",num,sum);
    return 0;
}
