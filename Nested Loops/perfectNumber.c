/*

Perfect Numbers by CodeChum Admin
---------------------------------

Write a program that takes an integer n and prints all perfect numbers up to n. 
A perfect number is a positive integer that is equal to the sum of its proper divisors (excluding itself).

*/

#include <stdio.h>

int main(){
    
    int n, sum;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Perfect numbers up to %d: \n", n);
    
    for (int i = 1; i <= n; i++){

        sum = 0;
        
        if (i % 2 != 0) continue;

        for (int j = 1; j < i; j++){

            if (i % j == 0) sum += j;
        }
    
        if (sum == i) printf("%d\n", i);
        
    }

}