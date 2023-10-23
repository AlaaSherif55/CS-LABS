#include <stdio.h>
#include <stdlib.h>
#define SIZE 30
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
    int max=element[0];
    int min=element[0];
    for(int i=1;i<size;i++){
        if(element[i]>max){
            max=element[i];
        }
        if(element[i]<min){
            min=element[i];
        }
    }
      printf("The max is %d: \n",max);
      printf("the min  is %d: ",min);
    return 0;
}
