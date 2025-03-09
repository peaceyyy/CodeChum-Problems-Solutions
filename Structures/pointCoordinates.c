/*

Point Coordinates
by CodeChum Admin

Write a program that defines a structure Point:

 

Point:
int x
int y
 

Then, write a function void displayPoint(Point p) that accepts a Point struct and prints the coordinates in the format:(x, y).

 

In the main function, prompt the user to input the x and y coordinates, create a Point struct, and pass it to the displayPoint function.

*/

#include <stdio.h>

typedef struct {
    
    int x;
    int y;
} Point;

void displayPoint (Point point)
{
    printf("(%d, %d)", point.x, point.y);
}

int main()
{
    Point point1;
    printf("Enter x: ");
    scanf("%d", &point1.x);
    
    printf("Enter y: ");
    scanf("%d", &point1.y);
    
    displayPoint(point1);
    
    return 0;
}