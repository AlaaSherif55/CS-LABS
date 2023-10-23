#include <stdio.h>
#include <stdlib.h>
#define ROW 2
#define COL 2
int main()
{
   char a[2][2]={{2,2},{4,4}};
   int sum=0;
    for(int i=0;i<ROW;i++){
        sum=0;
        for(int y=0;y<COL;y++){
            sum+=a[i][y];
        }
        printf("The average is :%.1lf \n",(float)sum/COL);

    }
    return 0;
}
