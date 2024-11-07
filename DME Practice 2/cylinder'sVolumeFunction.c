/*

Cylinder's Volume Function v.2 by Christine Bandalan
----------------------------------------------------

Write a program that includes a function, as specified in the minimum requirements, 
    that takes the radius and height of a cylinder as a parameter and returns the volume of the cylinder. 

The volume of a cylinder is calculated as height * PI * r2. 

In the main function, ask for a float inputs, radius and height, 
    then call the created function using the inputs, get the returned value, and print the said value. 

(Note: Declare a global constant PI = 3.1416)

*/

#include <stdio.h>
#include <math.h>
#define PI 3.1416

float calculateCylinderVolume(float, float);

int main(){
    
    float cylinderRadius, cylinderHeight, cylinderVolume;
    
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &cylinderRadius);
    
    printf("Enter the height of the cylinder: ");
    scanf("%f", &cylinderHeight);
    
    cylinderVolume = calculateCylinderVolume(cylinderRadius, cylinderHeight);
    printf("The volume of the cylinder is: %.2f", cylinderVolume);
    
    return 0;
}

float calculateCylinderVolume(float radius, float height){

    float volume = height * PI * pow(radius, 2);
    return volume;
    
}

