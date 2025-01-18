
/*

Calculate Triangle Area Using Pointers by CodeChum Admin

Write a program that includes a function calculateArea which accepts three float pointers representing the lengths of the three sides of a triangle. 
The function should calculate the area of the triangle using Heron's formula and store the result in a variable pointed to by a pointer passed to the function.


In the main function, prompt the user to enter the lengths of the three sides of the triangle. Print the side lengths and the area of the triangle.

*/

#include <stdio.h>
#include <math.h>

void calculateArea (float* a, float* b, float* c, float* res){
    
    
    float s = (*a + *b + *c)/2.00;
    
    *res = sqrt(s * (s - (*a))*(s - (*b))*(s - (*c)));
}


int main(){
    
    float a, b, c, res;
    
    printf("Enter the length of side a: ");
    scanf("%f", &a);
    
     printf("Enter the length of side b: ");
    scanf("%f", &b);
    
    printf("Enter the length of side c: ");
    scanf("%f", &c);
    
    printf("The sides of the triangle are: a = %.2f, b = %.2f, c = %.2f", a, b , c);
    
    calculateArea(&a, &b, &c, &res);
    printf("\nThe area of the triangle is: %.2f", res);
    
    
    
    return 0;
}