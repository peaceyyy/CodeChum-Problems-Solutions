/*

Rock-Paper-Scissors Game Function v.2 by Christine Bandalan (University of San Carlos Professor)
---------------------#--------------------------------------

Write a program that takes two players' choices (rock, paper, or scissors) 
    as input and determines the winner based on the following conditions:

Rock beats scissors, paper beats rock, and scissors beat paper.
If both players choose the same option, it's a tie.
 
Whoever wins, print "Player 1 wins!" or "Player 2 wins!". If both are tied, print "It's a tie!"

*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>

void playGame();

int main(){


playGame();

    return 0;
}


void playGame(){

    char choiceOne[50];
    char choiceTwo[50];

    printf("Player 1: ");
    scanf("%s", &choiceOne);
    printf("Player 2: ");
    scanf("%s", &choiceTwo);


    if (strcmp(choiceOne, choiceTwo) == 0) {
        printf("It's a tie!");
    } else if (strcmp(choiceOne, "rock") == 0 && strcmp(choiceTwo, "scissors") == 0) {
        printf("Player 1 wins!");
    } else if (strcmp(choiceTwo, "rock") == 0 && strcmp(choiceOne, "scissors") == 0 || strcmp(choiceOne, "rock") != 0) {
        printf("Player 2 wins!");
    } else if (strcmp(choiceOne, "scissors") == 0 && strcmp(choiceTwo, "paper") == 0) {
        printf("Player 1 wins!");
    } else if (strcmp(choiceTwo, "scissors") == 0 && strcmp(choiceOne, "paper") == 0) {
        printf("Player 2 wins!");
    } else if (strcmp(choiceOne, "paper") == 0 && strcmp(choiceTwo, "rock") == 0 || (strcmp(choiceTwo, "paper") != 0)) {
        printf("Player 1 wins!");
    } else if (strcmp(choiceTwo, "paper") == 0 && strcmp(choiceOne, "rock") == 0 || (strcmp(choiceOne, "paper") != 0)) {
        printf("Player 2 wins!");
    } else {
        printf("Invalid input. Please enter 'rock', 'paper', or 'scissors'.");
    }
}

