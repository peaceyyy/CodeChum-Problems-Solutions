

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

NOTE: A brilliant solution by John Paul Denaya using bits (His GitHub: github.com/IohannesPaullusMD)

*/


#include <stdio.h>

#define C (char)0b1000
#define O (char)0b0100
#define D (char)0b0010
#define E (char)0b0001
#define STOP (char)0b1111

char turnBitOn(char code, char index);

void main() 
{
    char input = '\0', code = '\0'; 
  
    do 
    {
        printf("Enter a letter: ");
        scanf(" %c", &input);

        switch (input)
        {
            case 'C': 
                code = turnBitOn(code, C);
                break;
        
            case 'O': 
                code = turnBitOn(code, O);
                break;

            case 'D': 
                code = turnBitOn(code, D);
                break;

            case 'E': 
                code = turnBitOn(code, E);
                break;
        }

    }
    while (code < STOP);
}

char turnBitOn(char code, char index)
{
    return (char)(code | index);
}
