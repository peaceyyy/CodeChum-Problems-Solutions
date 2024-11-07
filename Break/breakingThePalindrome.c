/*

Breaking the Palindrome by CodeChum Admin
-----------------------------------------

Write a program that takes a string and checks whether it is a palindrome (reads the same backward as forward). 
    Use the break statement to exit the loop as soon as the first mismatched character is found.

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_STRING_LENGTH 100 

int main(){
    
    char string[MAX_STRING_LENGTH];
    int isPalindrome = 1;
    
    printf("Enter a string: ");
    scanf("%s", string);
    
    
    for (int i = 0; i <= strlen(string)/2; i++){
    
            if (tolower(string[i]) != tolower(string[(strlen(string) - i) - 1])){
                isPalindrome = 0;
                break;
                
            }
    }
    
    if (isPalindrome) printf("The string is a palindrome");
    else printf("The string is not a palindrome");
    
}