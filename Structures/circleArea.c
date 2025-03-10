/*

Circle Area
by CodeChum Admin

Write a program that defines a structure Circle:

 

Circle:
float radius
 

Then, write a function float calculateArea(Circle c) 
that accepts a Circle struct and returns its area.

 

In the main function, prompt the user to input the radius, create a Circle struct,
and pass it to the calculateArea function. Print the returned area.


*/

#include <stdio.h>
#define PI 3.14159

typedef struct  {
    float radius;
} Circle;

float calculateArea(Circle c)
{
    return PI * (c.radius * c.radius); 
}

int main()
{
    Circle c1;
    
    printf("Enter radius: ");
    scanf("%f", &c1.radius);
    
    
    printf("Area: %.2f", calculateArea(c1));
    
}