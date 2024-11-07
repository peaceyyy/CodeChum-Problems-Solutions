/*

C.O..D...E? by CodeChum Admin
-----------------------------

The loop should stop if the letter's 'C', 'O', 'D', 'E' has already been inputted. 
    Note: It is assured that all inputted characters are capital letters.

===============================================================================================
I completely misunderstood the given problem and came up with something more complicated. 
Basically, my version has to have the user spell out the word "CODE" by entering its individual letters one at a time. 

    - Repeated letters (e.g., multiple 'C's or 'O's) are allowed, but each letter must be input at least once for the program to complete.
    - The order of inputs does not matter, meaning the user can input letters in any sequence (e.g., 'E', 'O', 'D', 'C').
    - Once all letters from "CODE" have been matched (regardless of order), the program stops taking input.

NOTE: I am completely aware of how inefficient and slow this solution is but one of the program requirements was to use loops.

*/

#include<stdio.h>

int main(void) {
    
    int arrayOfChars[100], count = 0, index = 0;
    char code[4] = "CODE";

    while(1) {
        
        char letter;
        printf("Enter letter: ");
        scanf(" %c", &letter);
        
        arrayOfChars[index] = letter;
        index++;
        
    int arraySize = sizeof(arrayOfChars)/sizeof(arrayOfChars[0]);
        
    for(int i = 0; i <= arraySize; i++){
    
        for (int j = 0; j < 4; j++){
            
            if(arrayOfChars[i] == code[j]){
                
                code[j] = '!';   
                count++;
            }
        }
    }

    if (count == 4) break;
    

    }

}