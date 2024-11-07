/*

Positive, Negative, or Zero Counter (do-while) by Christine Bandalan
--------------------------------------------------------------------

Write a program that takes a sequence of five integers as input and 
    counts the number of positive, negative, and zero values among them.

*/

#include <stdio.h>

int main(){
    
    int integer, i = 1, positiveCount = 0, negativeCount = 0, zeroCount = 0;
        
    do {
        
    printf("Enter integer %d: ", i);
    scanf("%d", &integer);
        
    if (integer > 0) positiveCount++;
    else if (integer < 0) negativeCount++;
    else zeroCount++;
    
    i++;
        
    } while (i <= 5);
    
    printf("\nPositive count: %d", positiveCount);
    printf("\nNegative count: %d", negativeCount);
    printf("\nZero count: %d", zeroCount);
    
}