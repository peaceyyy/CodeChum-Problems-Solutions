/*

Breaking the Pattern
by CodeChum Admin

Write a program that uses nested loops to print a pattern of asterisks. 
    The number of asterisks in each row should increase by 1, starting with 1 in the first row. 
    Use the break statement to exit the loops after printing the first 5 rows of the pattern.

*/

#include <stdio.h>

int main(){
    
    int num;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    for (int i = 0; i < num; i++){
        
        if (i == 5){
            break;
        }
        
        for (int j = 0; j <= i; j++)
            printf("*");
    
    printf("\n");
       
    }
    
}