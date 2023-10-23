#include <stdio.h>
#include <stdlib.h>

int main()
{
     /*
       *
      ***
     *****
    *******
   *********

    -we need for loop to loop into rows so it's iteration will be size like in figure.
    -in first row space  4 (size-1)    * is 1
     in second row space 3 (size-2)    * is 2
     in size row space   0 (size-size) * is (size*size)-1
     we need to two counter on for space start from size and each iteration it decrement to become 0
     counter for * start from 1 and each iteration increment by 2 to become size-1
    */
    int size=0,counter_for_space=0,counter_for_asterisk=1;
    printf("Enter the size of full pyramid that you want: ");
    scanf("%d",&size);
    counter_for_space=size;
    for(int i=0;i<size;i++){
        counter_for_space--;

        for(int i=0;i<counter_for_space;i++){
            printf(" ");
        }
        for(int i=0;i< counter_for_asterisk;i++){
            printf("*");
        }

        counter_for_asterisk+=2;
        printf("\n");
    }
    return 0;
}
