/*

Breaking the Chain of Words by CodeChum Admin
---------------------------------------------

Write a program that asks the user to enter a sentence. 

Use a for loop to iterate through the words in the sentence and exit the loop as soon as a word 
    is found that contains the letter 'z'. Print the number of words that were processed 
        before the word containing 'z' was found.

*/

#include <stdio.h>
#include <string.h>
#define MAX_STRING_LENGTH 100

int main(){
    
    char string [MAX_STRING_LENGTH];
    int numOfWords = 1;
    
    printf("Enter a sentence: ");
    scanf("%[^\n]s", string);
    
    for (int i = 0; string[i] != '\0'; i++){
        
        if (string[i] == 'Z' || string[i] == 'z') break;
        
        if (string[i] == ' ' && string[i+1] != ' ') numOfWords++;
    
    }
    
    printf("Number of words processed before finding the word containing 'z': %d", numOfWords);
    
}