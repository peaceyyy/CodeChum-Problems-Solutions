/*
Movie Information  
by CodeChum Admin

Write a program that has a structure Movie:

 

Movie:
char title[100]
int releaseYear
float rating
 

In the main function, create a Movie struct, 
ask for title, releaseYear, and rating inputs, 
and then assign the inputs to the members of the created struct.

Print the members of the struct by accessing them.


*/

#include <stdio.h>

typedef struct {
    char title[100];
    int releaseYear;
    float rating;
} Movie;

int main()
{
    Movie movie;
    
    printf("Enter movie title: ");
    scanf("%[^\n]s", &movie.title);
    
    printf("Enter release year: ");
    scanf("%d", &movie.releaseYear);
    
    printf("Enter rating: ");
    scanf("%f", &movie.rating);
    
    printf("\nMovie Details:\n");
    printf("Title: %s\n", movie.title);
    printf("Release Year: %d\n", movie.releaseYear);
    if (movie.rating == (int) movie.rating){
        printf("Rating: %d", (int) movie.rating);
        
    } else {
        printf("Rating: %.1f", movie.rating);
    }
    
}