/*

Sum of Even Digits by CodeChum Admin
------------------------------------

Write a program that asks the user for a number, n, and then
calculates the sum of all the even digits in n using a for loop.

*/

#include <stdio.h>

int main(){
    
    int num, digit, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for (; num > 0; num /= 10){
        
        digit = num % 10;
        
        if (digit % 2 == 0){
            sum += digit;
        }
    
    }
    
    printf("The sum of even digits is %d", sum);
    
    return 0;
}

