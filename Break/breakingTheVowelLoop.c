/*

Breaking the Vowel Loop by CodeChum Admin
-----------------------------------------

Write a program that asks the user to enter a string. 
Use a for loop to iterate through the string and exit the loop as soon as a vowel (a, e, i, o, u) is encountered. 
Print the first non-vowel character in the string.

*/


#include <stdio.h>
#include <string.h>
#define MAX_STRING_LENGTH 100

int main(){
    
    char string[MAX_STRING_LENGTH], loweredChar, firstNonVowel;
    
    printf("Enter a string: ");
    scanf("%s", string);
    
    for (int i = 0; i < strlen(string); i++){
        
        loweredChar = tolower(string[i]);
        
        if (loweredChar != 'a' && loweredChar != 'e' 
            && loweredChar != 'i' && loweredChar != 'o'
            && loweredChar != 'u'){
            
            firstNonVowel = string[i];
            break;
        }
    
    }
    
    printf("First non-vowel character: %c", firstNonVowel);
    
    return 0;
}