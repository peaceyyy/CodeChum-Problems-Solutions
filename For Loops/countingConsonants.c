/*

Counting Consonants by CodeChum Admin
-------------------------------------

Write a program that asks the user for a string, 
    and then counts the number of consonants in the string using a for loop.

*/

#include <stdio.h>  
#include <string.h>  
#include <ctype.h>  

int main() {  
    char userString[50], loweredChar;  
    int numOfConsonants = 0;  

    printf("Enter a string: ");  
    scanf("%s", userString); 

    for (int i = 0; i < strlen(userString); i++) {  

        loweredChar = tolower(userString[i]);

        if (loweredChar != 'a' && loweredChar != 'e' && loweredChar != 'i' && loweredChar != 'o' && loweredChar != 'u'){  
            numOfConsonants++;  
        }  
    }  

    printf("Number of consonants: %d\n", numOfConsonants);  

    return 0;  
}  


