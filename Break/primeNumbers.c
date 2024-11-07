#include <stdio.h>

int main(){

    int num, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (int i = 2; i <= num; i++){

        printf("%d\n", i); // Check it here

        if (num % i == 0 && i != num) 
        { 
            isPrime = 0;
            break;              // This prevents checking and printing all values of i
        }
    }

    if (isPrime) printf("%d is a prime number", num);
    else printf("%d is not a prime number", num);
    
}