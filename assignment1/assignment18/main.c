#include <stdio.h>
#include <stdlib.h>

int main()
{
     /*
    *
    **
    ***
    ****
    ******
    -we need for loop to loop into rows so it's iteration will be size like in figure.
    -and for loop to print num of astrix like figure first row: 1,second row: 2,third: 3,size row: size, we make an counter start from 0
    so in the first time, the second for loop start from 0 to counter(after increment it) and so on
    */
    int size=0,count=0;
    printf("Enter the size of half pyramid that you want: ");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        count++;
        for(int i=0;i<count;i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;

}
