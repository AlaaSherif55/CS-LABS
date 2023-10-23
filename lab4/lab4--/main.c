#include <stdio.h>
#include <stdlib.h>
#define COL 2


void only_alphabet(char array2[]){
     int i=0;
     while('\0'!=array2[i]){
        if(!(array2[i]>=65&&array2[i]<=90||array2[i]>=97&&array2[i]<=122)){
            array2[i]=' ';
        }
        i++;
    }
   for(int z=0;z<i;z++){
        if(array2[z]!=' '){
                printf(" %c",array2[z]);
        }

   }

}
char * string_copy(char array2[]){
    int i=0;
    char  array1[10]={0};
    while(array2[i]!='\0'){
        array1[i]=array2[i];
        i++;
    }
   return array1;

}
int string_length(char array2[]){
    int length=0;
     while(array2[length]!='\0'){
        length++;
    }
    return length;
}
char * string_capital_case(char array[]){
    int i=0;
    while(array[i]!='\0'){
      if(array[i]>=97&&array[i]<=121){
          array[i]=array[i]-32;
      }
      i++;
    }
}

int main()
{


    return 0;
}
