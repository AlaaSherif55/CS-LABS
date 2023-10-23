#include <stdio.h>
#include <stdlib.h>
  int check_positive_negative(int num){

    if(num>=0){
        return 1;
    }else{
        return 0;
    }

}

int main()
{
    int i;
    printf("Enter character to check is positive or negative: ");
    scanf("%d",&i);
    if(check_positive_negative(i)){
        printf("The character %d is positive",i);
    }else{
         printf("The character %d is negative",i);
    }


    return 0;
}
