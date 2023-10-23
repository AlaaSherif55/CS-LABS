#include <stdio.h>
#include <stdlib.h>
#define ROW 2
#define COL 2
int main()
{
  //C Program to add two matrix and put the result in a third one, then print the result.
  int matrix1[ROW][COL]={{1,2},{3,4}};
  int matrix2[ROW][COL]={{1,2},{3,4}};
  int result[ROW][COL];
  for(int i=0;i<ROW;i++){
    for(int y=0;y<COL;y++){
        result[i][y]=matrix1[i][y]+matrix2[i][y];
    }
  }
  for(int i=0;i<ROW;i++){
    for(int y=0;y<COL;y++){
        printf("result is result[%d][%d]: %d \n",i,y,result[i][y]);
    }
  }
    return 0;
}
