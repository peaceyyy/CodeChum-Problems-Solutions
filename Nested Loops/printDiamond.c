#include <stdio.h>

void printCharacter(char, int);

int main(){

    int rows, spaces, numOfChars, numPattern; 
    char character;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter character to use: ");
    scanf(" %c", &character);

    printf("Enter number of times the character appears per row (1 for odd, 0 for even): ");
    scanf("%d", &numPattern);

    printf("\n");

    for (int i = 1; i <= rows; i++){

        spaces = rows - i;
        numOfChars = (i * 2) - numPattern;
        
        printCharacter(' ', spaces);
        printCharacter(character, numOfChars);
        
        printf("\n");
    }

      for (int i = rows - 1; i > 0; i--){

        spaces = rows - i;
        numOfChars = (i * 2) - numPattern;
        
        printCharacter(' ', spaces);
        printCharacter(character, numOfChars);
        
        printf("\n");
    }

    printf("\n");
}

void printCharacter(char character, int n){

    for (int i = 1; i <= n; i++) printf("%c", character);

}