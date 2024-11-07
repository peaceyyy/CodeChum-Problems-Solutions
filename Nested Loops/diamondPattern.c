/*

Diamond Pattern by CodeChum Admin
---------------------------------

Write a program that takes an integer n and prints a diamond pattern made up of asterisks, 
    like this:

             *
            ***
           *****
            ***
             *

I modified the code so that the user may also input which character to use.

*/

#include <stdio.h>

void printChars(int, char);

int main(){
    
    int n, i = 1, j = 1, flag = 1, numOfSpaces;
    char character;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Enter character: ");
    scanf(" %c", &character);

    printf("\n");
    
    if (n == 0) i = 0;
    
    else n = (n * 2) - 1;
    
    
    while (i > 0){
        
        if (i >= n) flag = 0;
       
        numOfSpaces = n/2 - j + 1;
        
        // printChars(numOfSpaces, ' ');
        // printChars(i, character);
        for (int j = 1; j <= numOfSpaces; j++) printf(" ");
        for (int j = 1; j <= i; j++) printf("%c", character);
        printf("\n");
        
        if (flag){
            
            i+=2;
            j++;
            
        }
        
        else{
        
            i-=2;
            j--;
            
        }

    }
    
    return 0; 
}

// void printChars(int n, char C){
    
//     for (int j = 1; j <= n; j++) printf("%c", C);
// }