/*

Linear Equation Calculator v.2 by Christine Bandalan
----------------------------------------------------
Write a program that includes 3 functions, as specified in the minimum requirements, 
    that takes three double precision floating-point arguments - x, slope, and yIntercept. 
    
It calculates the value of the linear equation y = mx + b and shows the value of y.

Requirements:

In the main function, ask for three double inputs (x, slope, and yIntercept) using the getInput() function for each input.

Then, call the calculateLinearEquation(double, double, double) function, 
    passing the inputs and returning the calculated linear equation value.

Finally, show the calculated linear equation value by calling the showResult(double) function 
    and passing the calculated linear equation value.

*/

#include <stdio.h>

double calculateLinearEquation(double, double, double);
double getInput();
void showResult(double);


int main(){
    
    double x, slope, yIntercept, calculatedLinearEquation;
    printf("Enter x: ");
    x = getInput();
    printf("Enter slope: ");
    slope = getInput();
    printf("Enter y intercept: ");
    yIntercept = getInput();
    
    calculatedLinearEquation = calculateLinearEquation(x, slope, yIntercept);
    showResult(calculatedLinearEquation);
    
    return 0;
}

double getInput(){
    double input;
    scanf("%lf", &input);
    return input;
}

double calculateLinearEquation(double x, double slope, double intercept){
    double y = slope * x + intercept;
    return y;
}

void showResult(double result){
    printf("Result: %.2lf", result);
}