/*

Skip Counting Function Too! by Christine Bandalan
-------------------------------------------------

Write a function that will ask the user the starting number, last number, and the number for skip counting.
     Show all the numbers within the given range.

Requirements:

The function, skipCounting, does not have a return type but contains 3 integer parameters (startNum, endNum, skipNum).
The function contains only a do-while loop statement to display the numbers within the given range.
All statements to get inputs from user must be within the main().

Start at number -5
End at number 95
Skip count by 10

Start counting!
-5	5	15	25	35	45	55	65	75	85	95

*/

#include <stdio.h>

void skipCounting (int, int, int);

int main(){
    
    int startNum, endNum, skipCount;
    printf("Start at number ");
    scanf("%d", &startNum);
    
    printf("End at number ");
    scanf("%d", &endNum);
    
    printf("Skip count by ");
    scanf("%d", &skipCount);
    
    if (startNum >= endNum) printf("\nInvalid range!");
    
    else skipCounting(startNum, endNum, skipCount);
    
}

void skipCounting (int startingNumber, int endingNumber, int skipCount){
    
    printf("\nStart counting!\n");
    
    do {
        
        printf("%d\t", startingNumber);
        startingNumber += skipCount;
        
    } while(startingNumber <= endingNumber);
}