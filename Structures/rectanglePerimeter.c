/*

Rectangle Perimeter
by CodeChum Admin

Write a program that defines a structure Rectangle:

 

Rectangle:
int length
int width
 

Then, write a function int calculatePerimeter(Rectangle r) 
that accepts a Rectangle struct and returns its perimeter.

In the main function, prompt the user to input the length and width, 
create a Rectangle struct, and pass it to the calculatePerimeter function. 

Print the returned perimeter.



*/

#include <stdio.h>

struct Rectangle {
    int length;
    int width;
};

int calculatePerimeter(struct Rectangle rectangle)
{
    return (2*rectangle.length) + (2*rectangle.width); 
}

int main()
{
    struct Rectangle r1;
    
    printf("Enter length: ");
    scanf("%d", &r1.length);
    
    printf("Enter width: ");
    scanf("%d", &r1.width);
    
    
    printf("Perimeter: %d", calculatePerimeter(r1));
    
}