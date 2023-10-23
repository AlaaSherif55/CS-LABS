#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    char name[20];
    printf("Enter your name: ");
    scanf("%s",&name);
    printf("Enter your grade: ");
    scanf("%d",&grade);
    printf("your name is %s\n",name);
    printf("your name is %d",name);
    return 0;
}
