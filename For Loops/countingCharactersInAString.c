/*

Counting Characters by CodeChum Admin
-------------------------------------
Write a program that asks the user for a string, and then counts 
    the number of times a particular character, inputted by a user, appears in the string using a for loop.

*/

#include <stdio.h>
#include <string.h>


int main(){
    
    char string[50], character;
    int count = 0;
    
    printf("Enter a string: ");
    scanf("%s", &string);
  
    printf("Enter a character to count: ");
    scanf(" %c", &character);
    
    for(int i = 0 ; i <= strlen(string); i++){
        if (string[i] == character){
            count++;
        }
    }
    
    printf("The character \'%c\' appears %d times in the string.", character, count);
    
    return 0;
}