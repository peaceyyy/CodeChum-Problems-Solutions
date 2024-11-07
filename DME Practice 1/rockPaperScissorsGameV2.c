/*

Rock-Paper-Scissors Game Function v.2 by Christine Bandalan
-----------------------------------------------------------
Write a program that takes two players' choices (rock, paper, or scissors) as input and determines the winner based on the following conditions:

Rock beats scissors, paper beats rock, and scissors beat paper.
If both players choose the same option, it's a tie.
Whoever wins, print "Player 1 wins!" or "Player 2 wins!". If both are tied, print "It's a tie!"

*/

#include <stdio.h>
#include <string.h>

void gamePlay();

int main(){

    
    gamePlay();
    
    return 0;
}


void gamePlay(){
    
    
    char playerOneChoice[50];
    char playerTwoChoice[50];
    
    printf("Player 1, enter your choice (rock, paper, or scissors): ");
    scanf("%s", &playerOneChoice);
    printf("Player 2, enter your choice (rock, paper, or scissors): ");
    scanf("%s", &playerTwoChoice);
    
    if(strcmp(playerOneChoice, playerTwoChoice) == 0){
        printf("It's a tie!");
    }
    
    else if(strcmp(playerOneChoice, "rock") == 0 && strcmp(playerTwoChoice, "scissors") == 0 ||
            strcmp(playerOneChoice, "paper") == 0 && strcmp(playerTwoChoice, "rock") == 0 ||
            strcmp(playerOneChoice, "scissors") == 0 && strcmp(playerTwoChoice, "paper") == 0){
            printf("Player 1 wins!");
            }
            
    else if(strcmp(playerOneChoice, "scissors") == 0 && strcmp(playerTwoChoice, "rock") == 0 ||
            strcmp(playerOneChoice, "rock") == 0 && strcmp(playerTwoChoice, "paper") == 0 ||
            strcmp(playerOneChoice, "paper") == 0 && strcmp(playerTwoChoice, "scissors") == 0){
            printf("Player 2 wins!");
            }
    else{
        printf("Invalid choices!");
    }
}