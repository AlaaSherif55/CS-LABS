#include <stdio.h>
#include <stdlib.h>
void display_prime_intervals(int i,int y ){//1 8
int flag=0;
 for(int z=i+1;z<y;z++){ //1 z=5 z<19
     flag=0;
    for(int p=2;p<=(z/2);p++){//
        if(z%p==0){
            flag=1;
        }

    }
    if(!flag){
        printf("num %d is a prime\n",z);
    }


 }

}
int main()
{
    int num1,num2;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    display_prime_intervals(num1,num2 );
    return 0;
}

