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

NOTE: A more optimal version using a frequency counter (hAsH mAp)

*/



#include <stdio.h>

int main (){

    int letterCount[4] = {0, 0, 0, 0}, matchedCount = 0;
    char letter;
    
    while (1) {

        printf("Enter a letter: ");
        scanf(" %c", &letter);

        switch(letter){

            case 'C':
            if (letterCount[0] == 0){
                matchedCount++;
                letterCount[0]++;
            }

            break;

            case 'O':
            if (letterCount[1] == 0){
                matchedCount++;
                letterCount[1]++;
            }

            break;

            case 'D':
            if (letterCount[2] == 0){
                matchedCount++;
                letterCount[2]++;
            }

            break;

            case 'E':
            if (letterCount[3] == 0){
                matchedCount++;
                letterCount[3]++;
            }

            break;

        }

        if (matchedCount == 4){
            break;
        }

    } 

}