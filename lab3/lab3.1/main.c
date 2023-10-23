#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <time.h>
//gotoxy(col, row)

void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void delay(int number_of_seconds){
    int milli_seconds=100*number_of_seconds;
    clock_t start_time=clock();
    while(clock() <start_time + milli_seconds){

    }
}

int main()
{
    int size, row, col, i=1;

    printf("Enter the size of magic box: ");
    scanf("%d", &size);

    if(0 == size % 2)
    {
        printf("no the magic box need only odd size");
    }
    else
    {
       row=1;
       col=(size+1)/2;
       //gotoxy(col*3, row);
       //printf("%d", i);
       //delay(2);
       for(i=2;i<size*size;i++){
        if(0==(i-1)%size){
            row++;
        }
        else{
            row--;
            col--;
            if(0>row){
                row=size;
            }
            if(0>col){
                col=size;
            }
        }
        if(i==2){
            printf("num %d row %d col %d",i,row,col);
        }

         // gotoxy(col, row);
         // printf("%d", i);
       }
    }

    return 0;
}
/* row = 1;
        col = (size + 1) / 2;
        value = 1;
        do
        {
            gotoxy(col*3, row);
            printf("%d", value);
            delay(2);
            //printf("row %d col %d \n",row,col);
            if(value % size == 0)
            {
                row++;
            }
            else
            {
                row--;
                col--;
            }
            if(0 == row)
            {
                row = size;
            }
            if(0 == col)
            {
                col = size;
            }

            value++;

           } while(value <= size * size);
*/
