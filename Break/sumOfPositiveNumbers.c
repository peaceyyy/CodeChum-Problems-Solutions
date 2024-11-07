#include <stdio.h>

int main(){
    
   int num, sum;

   do {

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) break;

    sum += num;
    
   } while(1);

   printf("Sum of positive integers: %d", sum);

   return 0;
}