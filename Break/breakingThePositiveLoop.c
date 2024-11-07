/*

Breaking the Positive Loop by CodeChum Admin
--------------------------------------------
     
Write a program that generates a sequence of positive integers. Use a while 
loop to iterate through the sequence and exit the loop as soon as an integer greater than 100 is encountered. 
Print the sum of the positive integers that were generated up to that point.

*/

#include <stdio.h>

int main(){
    
    
    int sumOfInts = 0, num;
    
    printf("Enter a sequence of positive integers: \n");
    
    while(1){
        
            scanf("%d", &num);
            sumOfInts += num;
            
            if (num > 100) break;
    }
    
    printf("Sum of positive integers: %d", sumOfInts - num);
    
}