#include <stdio.h>
#include <stdlib.h>
struct student{
char name[30];
int id;
int age;
char gender;

};
void scan_struct_Students(struct student s[],int size ){
    for(int i=0; i<size; i++){
        printf("Enter name [%d]",i+1);
        scanf("%s",s[i].name);
        printf("Enter age [%d]",i+1);
        scanf("%d",&s[i].age);
        printf("Enter ID [%d]",i+1);
        scanf("%d",&s[i].id);
        printf("Enter Gender [%d]",i+1);
        scanf(" %c",&s[i].gender);
    }

}
void print_struct_Students(struct student s[],int size ){
    printf("----------------- Display -------------------- \n");
    for(int i=0; i<size; i++){
          printf("name[%d] = %s \n",i+1,s[i].name);
          printf("gender[%d] = %c \n",i+1,s[i].gender);
          printf("age [%d]=  %d \n",i+1,s[i].age);
            printf("id [%d] =  %d \n",i+1,s[i].id);
    }

}

int main()
{
    struct student s[50];
    scan_struct_Students(s,1);
   print_struct_Students(s,1);
    return 0;
}
