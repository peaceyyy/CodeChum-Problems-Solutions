/*
Vector Magnitude
by CodeChum Admin

Write a program that defines a structure Vector:

 

Vector:
float x
float y
float z
 

Then, write a function float calculateMagnitude(Vector v)
that accepts a Vector struct and returns its magnitude using the 
formula sqrt(x^2 + y^2 + z^2).

 

In the main function, prompt the user to input the vector components,
create a Vector struct, and pass it to the calculateMagnitude function. 
Print the magnitude.


*/

#include <stdio.h>
#include <math.h>

typedef struct  {
    float x;
    float y;
    float z;
    
} Vector;

 float calculateMagnitude(Vector v){
return sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
 }

int main()
{
    Vector v;
    
    printf("Enter x, y, z components of the vector\n");

    
    printf("Enter x: ");
    scanf("%f", &v.x);
    printf("Enter y: ");
    scanf("%f", &v.y);
    printf("Enter z: ");
    scanf("%f", &v.z);
    
    printf("Magnitude: %.2f", calculateMagnitude(v));
    
    return 0;

}
