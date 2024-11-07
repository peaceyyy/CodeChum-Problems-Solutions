/*

Triangle's Area Function by Christine Bandalan
----------------------------------------------

Write a program that includes a function, as specified in the minimum requirements, 
    that asks the user to input the base and height of the triangle. 

The function then calculates and returns the area of a triangle 
    using the formula, area = 1/2 * base * height. 
    
In the main function, call the created function and print the returned value in 3 ways 
    including the use of double floor(double x) and double ceil(double x) functions of math.h.

*/

#include <stdio.h>
#include <math.h>

double calculateTriangleArea();

int main(){
    
    double triangleArea = calculateTriangleArea();
    
    printf("\nArea of the triangle: %.2lf", triangleArea);
    printf("\nArea of the triangle (ceil): %d", (int) ceil(triangleArea));
    printf("\nArea of the triangle (floor): %d", (int) floor(triangleArea));
    
    return 0;
}

double calculateTriangleArea(){
    
    double base, height, area;
    
    printf("Enter base of the triangle: ");
    scanf("%lf", &base);
    printf("Enter height of the triangle: ");
    scanf("%lf", &height);
    
    area = 0.5 * base * height;
    
    return area;
}