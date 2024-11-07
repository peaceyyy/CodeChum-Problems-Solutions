/*
Trapezoid's Area Function by Christine Bandalan
-----------------------------------------------

Write a program that includes a function, as specified in the minimum requirements, 
    that asks the user to input the height and parallel sides, b1 and b2, of a trapezoid. 
    
The function then calculates and returns the area of a trapezoid 
    using the formula, area = 1/2 * height * (b1 + b2). 
    
In the main function, call the created function and print the returned value in 3 ways 
    including the use of double floor(double x) and double ceil(double x) functions of C library math.h.

*/

#include <stdio.h>
#include <math.h>

double calculateTrapezoidArea();

int main(){
    
    double trapezoidArea  = calculateTrapezoidArea();
    
    printf("\nArea of the trapezoid: %.2lf", trapezoidArea);
    printf("\nArea of the trapezoid: %d (ceil)", (int) ceil(trapezoidArea));
    printf("\nArea of the trapezoid: %d (floor)", (int) floor(trapezoidArea));
    
    return 0;
}

double calculateTrapezoidArea(){
    
    double height, side1, side2, area;
    
    printf("Enter height of the trapezoid: ");
    scanf("%lf", &height);
    printf("Enter 1st side of the trapezoid: "); 
    scanf("%lf", &side1);
    printf("Enter 2nd side of the trapezoid: ");
    scanf("%lf", &side2);
    
    area = 0.5 * height * (side1 + side2);
    return area;
    
}