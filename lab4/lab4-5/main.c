#include <stdio.h>
#include <stdlib.h>
int string_length(char array2[]);
int main()
{
    //- C Program to take firstName and lastName from user, then displays fullName.
    char fname[100];
    char lname[100];
    printf("Enter the first name: ");
    scanf("%s",fname);
    printf("Enter the last name: ");
    scanf("%s",lname);
    int l1=string_length(fname);//alaa //4 fname[i+l1]=lname[i]
    int l2=string_length(lname);//sherif//6===>a[4]==>i<6
    printf("length of lname %d\n",l2);
    for(int i=0;i<l2;i++){//i
        fname[i+l1]=lname[i];
    }s
      for(int i=0;i<l2+l1;i++){//i
        printf("%c",fname[i]);
    }
    return 0;
}
int string_length(char array2[]){
    int length=0;
     while(array2[length]!='\0'){
        length++;
    }
    return length;
}
