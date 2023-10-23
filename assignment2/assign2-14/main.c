#include <stdio.h>
#include <stdlib.h>
void fib_series(int a, int b, int sum, int n){
    if (n != 0) {
   printf(" %d", a);
   sum = a + b;
   a = b;
   b = sum;
   n--;
  fib_series(a, b, sum, n);
}
}

int main(){

    int num;
    printf("Enter the  number: ");
    scanf("%d",&num);
    fib_series(0, 1, 0, num);

return 0;

}
