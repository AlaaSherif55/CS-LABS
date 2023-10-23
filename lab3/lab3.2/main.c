#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int main()
{
    int element[SIZE];
    int size=0;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        printf("Enter the value  ");
        scanf("%d",&element[i]);
    }
    for(int i=0;i<size;i++){
        printf("Enter the value of the element[%d]= %d\n ",i,element[i]);

    }
    return 0;
}
