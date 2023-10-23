#include <stdio.h>
#include <stdlib.h>

int alphabet_check(char c){

    if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
        return 1;
    }else{
        return 0;
    }

}
int main()
{
    char c;
    printf("Enter character to check is alphabet or not: ");
    scanf(" %c",&c);
    if(alphabet_check(c)){
        printf("The character %c is alphabet",c);
    }else{
         printf("The character %c is not alphabet",c);
    }


    return 0;
}
