/*

Library Card Holder
by CodeChum Admin

Write a program that has a structure LibraryCard:


LibraryCard:
char cardHolder[100]
int cardNumber
int booksBorrowed

*/


#include <stdio.h>
#include <string.h>

typedef struct {
    
    char cardHolder[100];
    int cardNumber;
    int booksBorrowed;
} LibraryCard;

int main ()
{
    LibraryCard card1;
    
    printf("Enter card holder's name: ");
    scanf("%[^\n]s", &card1.cardHolder);
    

    printf("Enter card number: ");
    scanf("%d", &card1.cardNumber);
    
    printf("Enter number of books borrowed: ");
    scanf("%d", &card1.booksBorrowed);

    printf("\nLibrary Card Details:\n");
    printf("Card Holder: %s\n", card1.cardHolder);
    
    printf("Card Number: %d\n", card1.cardNumber);

    printf("Books Borrowed: %d", card1.booksBorrowed);
    return 0;
}