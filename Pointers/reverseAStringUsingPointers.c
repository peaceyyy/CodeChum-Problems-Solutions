/*

Reverse a String using Pointers by CodeChum Admin
-------------------------------------------------

Write a function reverseString that takes a string pointer 
    and its length as parameters and reverses the order of characters in the string.
    
Use pass-by-reference technique to modify the original string. 
    In the main, ask for a string input, make sure of the created function, 
        and print the value of the reversed value of the string.

*/


#include <stdio.h>
#include <string.h>
#define MAX 100

void reverseString (char*);

int main(){
    
    char string[MAX]; 
   
    printf("Enter a string: ");
    scanf(" %[^\n]s", string);
    
    reverseString(string);
    
    printf("Reversed string: %s", string);


    return 0;
}


void reverseString(char* string) {
    int len = strlen(string);
    for (int i = 0; i < len / 2; i++) {
        
        char temp = string[i];
        string[i] = string[len - i - 1];
        string[len - i - 1] = temp;
    }
}