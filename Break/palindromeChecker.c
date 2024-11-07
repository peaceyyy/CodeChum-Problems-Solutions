
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_STRING_LENGTH 100 

int isPalindrome(char[]);

int main(){
    
    char string[MAX_STRING_LENGTH];
  
    while (1){

        printf("Enter a word: ");
        scanf("%s", string);

        if (isPalindrome(string) == 1){
            printf("Palindrome found!");
            break;
        }

    }

}

int isPalindrome(char string[]){

    for (int i = 0; i <= strlen(string)/2; i++){
        
        if (tolower(string[i]) != tolower(string[(strlen(string) - i - 1)])) return 0;

    }

    return 1;
}