#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
I half the figure into two figure
1-
    *        *
     *      *
      *    *
       *  *
        **
   -counter_for_space1 use for cross line in the left side begin from 0 to make zero space and then print * and then incremented by 1
   -counter_for_space2 use for cross line in the right side begin from size*2 and decremented it by 2
2- reverse only counters to be decremented or incremented
        **
       *  *
      *    *
     *      *
    *        *


    */
    int size=0,counter_for_space1=0,counter_for_space2=0;
    printf("Enter the size of x shape that you want: ");
    scanf("%d",&size);
    counter_for_space1=0;
    counter_for_space2=(size*2);
    for(int i=0;i<size;i++){


        for(int i=0;i<counter_for_space1;i++){
            printf(" ");
        }
        printf("*");
        counter_for_space1++;
        counter_for_space2-=2;//8
        for(int i=0;i<counter_for_space2;i++){//
            printf(" ");
        }
        printf("*");

        printf("\n");
    }
    counter_for_space1=size-1;//4
    counter_for_space2=0;
   for(int i=0;i<size;i++){


        for(int i=0;i<counter_for_space1;i++){
            printf(" ");
        }
        printf("*");
        counter_for_space1--;

        for(int i=0;i<counter_for_space2;i++){
            printf(" ");
        }
        printf("*");
        counter_for_space2+=2;
        printf("\n");
    }

    return 0;
}
