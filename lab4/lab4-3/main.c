#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Receive character by character and then place the string terminator upon pressing enter, then display the string.
    char name[20];
    printf("enter your name: ");
    scanf("%[^\n]s",name);
    return 0;
}
