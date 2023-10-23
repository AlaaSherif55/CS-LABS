#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
   printf("Enter the grade: ");
   scanf("%d",&grade);

   if(grade>0&&grade<50)
       printf("Fail");
   else if(grade>=50&&grade<65)
       printf("Pass");
   else if(grade>=65&&grade<75)
       printf("Good");
   else if(grade>=75&&grade<85)
       printf("Very good");
   else if(grade>=85&&grade<100)
       printf("Excellent");
    return 0;
}
