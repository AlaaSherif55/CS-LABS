#include <stdio.h>
#include <stdlib.h>
char connvert_lower_upper(char a){

    return (char)(((int)a)-32);

}
int main()
{
    char i;
    printf("Enter the character: ");
    scanf(" %c",&i);
    if(i>='A'&&i<='Z'){
         printf("You enter already a uppercase character %c",i);
    }else{
        printf("The %c in uppercase is %c",i,connvert_lower_upper(i));
    }


    return 0;
}
