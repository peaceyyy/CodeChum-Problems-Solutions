/*

C.O..D...E? by CodeChum Admin
-----------------------------

The loop should stop if the letter's 'C', 'O', 'D', 'E' has already been inputted. 
    Note: It is assured that all inputted characters are capital letters.


*/


#include <stdio.h>

int main(void) {


    while(1) {
        
        char letter;
        printf("Enter letter: ");
        scanf(" %c", &letter);
        
    if (letter == 'C' || letter == 'O' || letter == 'D' || letter == 'E' ) break;
    
    }

}