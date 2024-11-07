/*

Breaking Out of a For Loop by CodeChum Admin
-------------------------------------------

Write a program that asks the user to enter a list of numbers. 
Use a for loop to iterate through the list and add up all the even numbers. 

If the sum of the even numbers is greater than 100, exit the loop and print the sum.

Sample Output 1
===============
Enter the number of elements: 5
Enter 5 numbers:
1
2
3
4
5
Sum of even numbers: 6


Sample Output 2
===============
Enter the number of elements: 4
Enter 4 numbers:
100
24
Sum of even numbers: 124

*/


#include <stdio.h>

int main(){
    
    int numOfElements, sumOfEvenNums; 
    printf("Enter the number of elements: ");
    scanf("%d", &numOfElements);
    printf("Enter %d numbers: \n", numOfElements);
    
    for (int i = 0; i < numOfElements; i++){
        
        int num;
        
        scanf("%d", &num);
        
        if (num % 2 == 0){
            sumOfEvenNums += num;
        }
        
        if (sumOfEvenNums > 100) break;
    
    }
    
    printf("Sum of even numbers: %d", sumOfEvenNums);
}