#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
#define UP 80
#define DOWN 72
#define ENTER 13
#define END 79
#define HOME 71
#define ESC 27
//top سهم لفوق 72
//down 80 لتحت
//enter 13 ==> 0 ,1 ,2
//enter 13
struct student{
char name[30];
int id;
int age;
char gender;

};
int position=0;
int counter=0;
struct student student[100];
void display_for_enter()
{
    switch(position)
    {
    case 0:
        system("cls");
        //gotoxy(0,5);
        //printf("new");
        char k=0;
        while(k!=END){
            scan_struct_Students(student,1);
            counter++;
            k=getch();
            if(-32==k){
             k=getch();
           }
           if(END==k){
             printf("finish adding students");
           }

        }
        break;
    case 1:
        system("cls");
        //gotoxy(0,10);
        //printf("display");
        print_struct_Students(student,counter);
        break;
    case 2://exit
        exit(0);
        break;
    }

    int k=getch();
    position=0;
    if(13==k)
    {
        set_display(0);
        while(1)
        {
            k=getch();
            get_position(k);
        }

    }

}


void SetColor(int ForgC)
{
    WORD wColor;

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    //We use csbi for the wAttributes word.
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        //Mask out all but the background attribute, and add in the forgournd     color
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}
void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void get_position(int operation)//5 72
{

    switch(operation)
    {
    case 72:
        position--;
        if(position<0)
        {
            position=2;
        }
        set_display(operation);
        break;
    case 80:
        position++;
        if(position>2)
        {
            position=0;
        }/*if((position==2)){
         position=2;
        }*/
        set_display(operation);
        break;
    case 13:
        display_for_enter();
        break;

    }
}
void set_display(int operation)
{
    switch(position)
    {
    case 0:
        system("cls");
        gotoxy(0,0);
        SetColor(15);
        printf("position = %d",position);

        gotoxy(10,20);
        SetColor(15);
        if(check_extended_normal(operation)==1)
        {
            printf(" Ectended: ASCII character =%d",operation);
        }
        else
        {
            printf(" Normal: ASCII character =%d",operation);
        }

         gotoxy(0,18);
        SetColor(15);
        if(operation==72)
        {
            printf("Button UP");
        }
        else
        {
            printf("Button DOWN");
        }
        gotoxy(20,5);
        SetColor(4);//red
        printf("new");

        gotoxy(20,10);
        SetColor(15);
        printf("display");

        gotoxy(20,15);
        SetColor(15);
        printf("exit");
        break;
    case 1:
        system("cls");
        gotoxy(0,0);
        SetColor(15);
        printf("position = %d",position);

        gotoxy(10,20);
        SetColor(15);
        if(check_extended_normal(operation)==1)
        {
            printf(" Ectended: ASCII character =%d",operation);
        }
        else
        {
            printf(" Normal: ASCII character =%d",operation);
        }

        gotoxy(0,18);
        SetColor(15);
        if(operation==72)
        {
            printf("Button UP");
        }
        else
        {
            printf("Button DOWN");
        }

        gotoxy(20,5);
        SetColor(15);
        printf("new");

        gotoxy(20,10);
        SetColor(4);
        printf("display");

        gotoxy(20,15);
        SetColor(15);
        printf("exit");
        break;
    case 2:
        system("cls");
        gotoxy(0,0);
        SetColor(15);
        printf("position = %d",position);

        gotoxy(10,20);
        SetColor(15);
        if(check_extended_normal(operation)==1)
        {
            printf(" Ectended: ASCII character =%d",operation);
        }
        else
        {
            printf(" Normal: ASCII character =%d",operation);
        }

         gotoxy(0,18);
        SetColor(15);
        if(operation==72)
        {
            printf("Button UP");
        }
        else
        {
            printf("Button DOWN");
        }

        gotoxy(20,5);
        SetColor(15);
        printf("new");

        gotoxy(20,10);
        SetColor(15);
        printf("display");

        gotoxy(20,15);
        SetColor(4);
        printf("exit");
        break;
    }
}

int getch1()
{
    char x=getch();
    return (int)x;
}
void scan_struct_Students(struct student s[],int size){
    for(int i=0; i<size; i++){
        printf("Enter name [%d]",counter+1);
        //scanf("%[^\n]s",s[i+counter].name);
        fflush(stdin);
        fgets(s[i+counter].name, 100, stdin);
        fflush(stdin);
        printf("Enter age [%d]",counter+1);
        if(!scanf("%d",&s[i+counter].age)){
             printf("Please enter a correct age type [%d]",counter+1);
             getchar();
             scanf("%d",&s[i+counter].age);
        }
        printf("Enter ID [%d]",counter+1);
        //scanf("%d",&s[i+counter].id);
        if(!scanf("%d",&s[i+counter].id)){
             printf("Please enter a correct id type [%d]",counter+1);
             getchar();
             i=scanf("%d",&s[i+counter].id);
        }
        printf("Enter Gender [%d]",counter+1);
        //
        scanf(" %c",&s[i+counter].gender);
        if(!(s[i+counter].gender=='f'||s[i+counter].gender=='m')){
            printf("Please enter a correct gender type [m -f] [%d]",counter+1);
             //getchar();
             scanf(" %c",&s[i+counter].gender);
        }

        }
    }


void print_struct_Students(struct student s[],int size ){
    printf("----------------- Display -------------------- \n");
    for(int i=0; i<size; i++){
          printf("name[%d] = %s \n",i+1,s[i].name);
          printf("gender[%d] = %c \n",i+1,s[i].gender);
          printf("age [%d]=  %d \n",i+1,s[i].age);
          printf("id [%d] =  %d \n",i+1,s[i].id);
          printf("\n");
    }

}
int main()
{

    set_display(0);
    int i=0;
    while(1)
    {
        i=getch1();
        if(-32==i)
        {
            i=getch1();
        }
        get_position(i);
    }


    return 0;
}
int check_extended_normal(int x)
{
    if(x==72||x==80)
{
    return 1;
}
else
{
    return 0;
}
}
