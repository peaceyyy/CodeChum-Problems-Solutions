/*

Bookstore Inventory
by CodeChum Admin

Write a program that has a structure Book:

 

Book:
char title[100]
char author[100]
int yearPublished
float price
 

In the main function, create a Book struct, ask for title, author, yearPublished, and price inputs, and then assign the inputs to the members of the created struct. Print the members of the struct by accessing them.

*/

#include <stdio.h>

typedef struct {
    
    char title[100];
    char author[100];
    int yearPublished;
    float price;
 
} Book;


int main ()
{
    Book book1;
    
    printf("Enter book title: ");
    fgets(book1.title, sizeof(book1.title), stdin);  
    
    printf("Enter book author: ");
    fgets(book1.author, sizeof(book1.author), stdin);  
    
    printf("Enter year published: ");
    scanf("%d", &book1.yearPublished);
    
    printf("Enter price: ");
    scanf("%f", &book1.price);
    
    printf("\nBook Details:\n");
    printf("Title: %s", book1.title);
    printf("Author: %s", book1.author);
    printf("Year Published: %d\n", book1.yearPublished);
    printf("Price: $%f", book1.price);
    
    
    
    return 0;
    
}