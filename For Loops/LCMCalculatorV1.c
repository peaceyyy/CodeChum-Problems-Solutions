/*

LCM Calculator by CodeChum Admin
--------------------------------

Write a program that asks the user for two numbers, a and b, and 
    then calculates and prints out their least common multiple using a for loop.

---------------------------------

Incredibly inefficient solution to getting the LCM of two numbers using two arrays. 
    This was prior to my discovery of the almighty Euclidean Algorithm
    
*/

#include <stdio.h>

int main(){
    
    int firstNum, secondNum, maxSize;
    printf("Enter first number: ");
    scanf("%d", &firstNum);
    printf("Enter second number: ");
    scanf("%d", &secondNum);
 
    maxSize = firstNum > secondNum ? firstNum : secondNum;

    int firstNumMultiples[maxSize], secondNumMultiples[maxSize];

    // fills up array with multiples of the first number
    for (int i = 1; i <= maxSize; i++) firstNumMultiples[i] = firstNum * i;
       
    // fills up array with multiples of the second number
    for (int i = 1; i <= maxSize; i++) secondNumMultiples[i] = secondNum * i;
    
    // get the sizes of the arrays
    int sizeFirst = sizeof(firstNumMultiples) / sizeof(firstNumMultiples[0]),
    sizeSecond = sizeof(secondNumMultiples) / sizeof(secondNumMultiples[0]);  

    // comparing the contents of the arrays
    for (int j = 1; j <= sizeSecond; j++) {  
        
        for (int k = 1; k <= sizeFirst; k++){  
            
            if (firstNumMultiples[k] == secondNumMultiples[j]){  
                printf("The LCM of %d and %d is %d.", firstNum, secondNum, firstNumMultiples[k]);  
                return 0;
            }
            
        }
    }

}