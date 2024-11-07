/*

Breaking the String by CodeChum Admin
-------------------------------------

Write a program that asks the user to enter a string. 
    Use a while loop to iterate through the string and exit the loop as soon as a space character is found. 
    Print the first word of the string.

*/

#include <stdio.h>
#include <string.h>
#define MAX_STRING_LENGTH 100

int main(){
    
    char string[MAX_STRING_LENGTH];
    
    printf("Enter a string: ");
    scanf("%s", string);
    
    for (int i = 0; i < strlen(string); i++){
        
        printf("%c", string[i]);
        
        if (string[i] == ' ') break;
        
    }
}