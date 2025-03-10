/*

Complex Number Addition
by CodeChum Admin

Write a program that defines a structure ComplexNumber:

 
ComplexNumber:
float real
float imaginary
 

Then, write a function ComplexNumber addComplexNumbers(ComplexNumber a, ComplexNumber b) 
that accepts two ComplexNumber structs and returns their sum 
as a new ComplexNumber struct.

 

In the main function, prompt the user to input two complex numbers, 
create two ComplexNumber structs, and pass them to the addComplexNumbers function. 
Print the resulting complex number.


*/

#include <stdio.h>
#define PI 3.14159

typedef struct  {
    float real;
    float imaginary;
    
} ComplexNumber;

ComplexNumber addComplexNumbers(ComplexNumber a, ComplexNumber b)
{
    ComplexNumber sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    
    return sum;
}

int main()
{
    ComplexNumber c1, c2;
    
    printf("Enter first real complex number: ");
    scanf("%f", &c1.real);
    
    printf("Enter first imaginary complex number: ");
    scanf("%f", &c1.imaginary);
    
    printf("Enter second real complex number: ");
    scanf("%f", &c2.real);
    
    printf("Enter second imaginary complex number: ");
    scanf("%f", &c2.imaginary);
    
    ComplexNumber sum = addComplexNumbers(c1, c2);
    
    printf("Sum: %.2f + %.2fi", sum.real, sum.imaginary);
    
    return 0;
}