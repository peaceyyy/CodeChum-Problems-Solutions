/*

Sphere's Volume Function by Christine Bandalan
----------------------------------------------

Write a program that includes a function, as specified in the minimum requirements, 
    that takes the radius of a sphere as a parameter and calculates the volume of the sphere. 

The volume of a sphere is calculated as (4/3) * PI * r3. 

In the main function, ask for a float input radius, 
    then call the created function using the input and print the calculated value.
    
Note: Declare a global constant PI = 3.1416

*/

#include <stdio.h>
#include <math.h>
#define PI 3.1416

void calculateSphereVolume(float);

int main(){
    
    float sphereRadius;
    
    printf("Enter the radius of the sphere: ");
    scanf("%f", &sphereRadius);
    
    calculateSphereVolume(sphereRadius);

    return 0;
    
}
    
void calculateSphereVolume(float radius){

    float volume = 4.00/3.00 * PI * pow(radius, 3);
    printf("The volume of the sphere is: %.2f", volume);
}