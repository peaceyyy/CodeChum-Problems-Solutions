/*

Break the Loop by CodeChum Admin
--------------------------------

Write a program that asks the user to enter a list of integers 
and stops the loop when the user enters a negative number. 
Print the sum of all the positive numbers entered before the negative number.

NOTE: This is basically just the sumOfPositiveNumbers
*/

#include <stdio.h>

int main(){
    
    int num, sum = 0;
    
    
    while (1){
        
        printf("Enter a number: ");
        scanf("%d", &num);
        
        if (num < 0) break;
    
    sum += num;
        
    }
    
    printf("Sum of positive numbers entered: %d", sum);
    
    return 0;
}