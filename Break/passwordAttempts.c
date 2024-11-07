#include <stdio.h>
#include <string.h>

int main(){

    char actualPassword[7] = "secret", inputtedPassword[100];
    int attempts = 3;

    while (attempts > 0){

        printf("Enter the password: ");
        scanf(" %s", inputtedPassword);
        
        if(strcmp(inputtedPassword, actualPassword) == 0){
        
            printf("Access granted!");
            break;

        }

        else {
            attempts--;
            printf("Access Denied! %d attempts remaining.", attempts);
            printf("\n");
        }
    }

    if (attempts == 0) printf("Access denied!");


    return 0;
}