/*

Sphere's Surface Area Function v.2 by Christine Bandalan
--------------------------------------------------------

Write a program that includes a function, as specified in the minimum requirements, 
    that takes the radius of a sphere as a parameter and returns the surface area of the sphere. 
    
The surface area of a sphere is calculated as 4 * PI * r2. In the main function, ask for a float input radius, 
    then call the created function using the input, get the return value, and print the value. 
    
Note: Declare a global constant PI = 3.1416

*/


#include <stdio.h>
#include <math.h>
#define PI 3.1416

float calculateSphereSurfaceArea(float);

int main(){
    
    float sphereRadius, sphereArea;
    
    printf("Enter the radius of the sphere: ");
    scanf("%f", &sphereRadius);
    
    sphereArea = calculateSphereSurfaceArea(sphereRadius);
    printf("The surface area of the sphere is: %.2f", sphereArea);
    
}

float calculateSphereSurfaceArea(float radius){
    float area = 4.00 * PI * pow(radius, 2);
    return area;
}