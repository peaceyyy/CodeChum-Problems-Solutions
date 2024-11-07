/*

Polynomial Evaluation v.2 by Christine Bandalan
-----------------------------------------------

Write a program that includes 3 functions, as specified in the minimum requirements, 
    which does not return anything but takes five arguments:
    coefficients 'a', 'b', 'c', and 'd' (all double), and the value of 'x' (double). 
    
It evaluates the polynomial expression using the provided coefficients and 'x' value 
    and displays the value of the polynomial in two decimal places. 

The polynomial is defined as ax3 + bx2 + cx + d.

*/

#include <stdio.h>
#include <math.h>

double evaluatePolynomial(double, double, double, double, double);
double getInput();
void showResult(double);

int main(){
    
    double a, b, c, d, x, evaluatedPolynomial;
    
    printf("Enter coefficient a: ");
    a = getInput();
    printf("Enter coefficient b: ");
    b = getInput();
    printf("Enter coefficient c: ");
    c = getInput();
    printf("Enter coefficient d: ");
    d = getInput();
    printf("Enter value of x: ");
    x = getInput();
    
    evaluatedPolynomial = evaluatePolynomial(a, b, c, d, x);
    showResult(evaluatedPolynomial);
  
    return 0;
}

double getInput(){
    
    double input;
    scanf("%lf", &input);
    return input;
    
}

double evaluatePolynomial(double a, double b, double c, double d, double x){
    double evaluation = a*pow(x,3) + b*pow(x,2) + c*x + d;
    return evaluation;
}

void showResult(double polynomial){
    printf("Value of the polynomial: %.2lf", polynomial);
}

