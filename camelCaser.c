#include <stdio.h>
#include <ctype.h>
#include <string.h>



void makeCamelCase(char* arr, int* size){

    int j = 0;

    for (int i = 0; i < *size; i++){

        char currentChar = arr[i];

        if (isspace(currentChar)) continue;

        
        if(arr[i - 1] == ' ' ) arr[j++] = toupper(currentChar);
        
        else arr[j++] = currentChar;
       
        
    }

    arr[0] = tolower(arr[0]);

    *size = j;

}

int main(){

    char sampleString[100];


    printf("Enter a string: ");
      if (fgets(sampleString, sizeof(sampleString), stdin) != NULL) {
        // Remove the newline character if present
        size_t len = strlen(sampleString);
        if (len > 0 && sampleString[len-1] == '\n') {
            sampleString[len-1] = '\0';
        }
      }

    int size = sizeof(sampleString) - 1;
 

    makeCamelCase(sampleString, &size);

    printf("%s", sampleString);

    return 0;
}