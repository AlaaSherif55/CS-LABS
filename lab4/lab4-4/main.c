#include <stdio.h>
#include <stdlib.h>

int main()
{
   // C Program to take char and displays if it is "Normal or Extended key" along with its Ascii value.
    char x=getch();
    if(-32==x){
        x=getch();
        printf("Extended key and it's value is %d",x);
    }else{
          printf("Normal and it's value is %d",x);
    }
    return 0;
}
