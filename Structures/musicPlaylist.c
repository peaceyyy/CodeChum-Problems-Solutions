/*

Music Playlist
by CodeChum Admin

Write a program that has a structure Song:

 

Song:
char title[100]
char artist[100]
float duration
 

In the main function, create a Song struct,
ask for title, artist, and duration inputs, 
and then assign the inputs to the members of the created struct. 
Print the members of the struct by accessing them.


*/

#include <stdio.h>

typedef struct {
    char title[100];
    char artist[100];
    float duration;
} Song;

int main()
{
    Song song;
    
    printf("Enter song title: ");
    scanf("%[^\n]s", &song.title);
    
    printf("Enter artist name: ");
    scanf(" %[^\n]s", &song.artist);
    
    printf("Enter song duration (in minutes): ");
    scanf("%f", &song.duration);
    
    printf("\nSong Details:\n");
    printf("Title: %s\n", song.title);
    printf("Artist: %s\n", song.artist);
    printf("Duration: %.2f minutes", song.duration);
    
}