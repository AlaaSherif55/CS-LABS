#include <stdio.h>
#include <stdlib.h>

int main()
{
   //- C Program to Find the Frequency of Characters in a String
   char string[20];
   char x;
    printf("Enter string: ");
    scanf("%[^\n]s",string);
    printf("Enter a character to find its frequency: ");
    scanf(" %c",&x);

    int y=string_length(string);
    int freg;

    for(int i=0;i<y;i++){
       if(x==string[i]){
        freg++;
       }

    }
    printf("The frequency of %c is: %d",x,freg);
    return 0;
}
int string_length(char array2[]){
    int length=0;
     while(array2[length]!='\0'){
        length++;
    }
    return length;
}
