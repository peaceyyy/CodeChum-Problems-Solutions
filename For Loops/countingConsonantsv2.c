/*

Counting Characters by CodeChum Admin
-------------------------------------
Write a program that asks the user for a string, 
    and then counts the number of consonants in the string using a for loop.
    
Experimented with lowering a string using a for loop
*/


#include <stdio.h>  
#include <string.h>  
#include <ctype.h>  

void toLowerString(char userString[], char loweredString[]);  

int main() {  
    char userString[50], loweredString[50];  
    int numOfConsonants = 0;  

    printf("Enter a string: ");  
    scanf("%s", userString); 

    toLowerString(userString, loweredString);  


    for (int i = 0; i < strlen(loweredString); i++) {  
        if (loweredString[i] >= 'a' && loweredString[i] <= 'z' &&   
            loweredString[i] != 'a' && loweredString[i] != 'e' &&   
            loweredString[i] != 'i' && loweredString[i] != 'o' &&   
            loweredString[i] != 'u') {  
            numOfConsonants++;  
        }  
    }  

    printf("Number of consonants: %d\n", numOfConsonants);  

    return 0;  
}  

void toLowerString(char userString[], char loweredString[]) {  
    for (int i = 0; userString[i] != '\0'; i++) {  
        loweredString[i] = tolower(userString[i]);   
    }  
     
}