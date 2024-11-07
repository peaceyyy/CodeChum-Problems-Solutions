/*

Kite's Area Function by Christine Bandalan
------------------------------------------

Write a program that includes a function, as specified in the minimum requirements, 
    that asks the user to input the diagonals, d1 and d2, of a kite (rhombus). 
    
The function then calculates and returns the area of a kite using the formula, area = 1/2 * d1 * d2.

In the main function, call the created function and  print the returned value in 3 ways 
    including the use of double floor(double x) and double ceil(double x) functions of C library math.h.

*/

#include <stdio.h>
#include <math.h>

double calculateKiteArea();

int main(){
    
    double kiteArea = calculateKiteArea();
    
    printf("\nArea of the kite: %.2lf", kiteArea);
    printf("\nArea of the kite: %d (ceil)", (int) ceil(kiteArea));
    printf("\nArea of the kite: %d (floor)", (int) floor(kiteArea));
    
    return 0;
}

double calculateKiteArea(){
    
    double diag1, diag2, area;
    
    printf("Enter 1st diagonal of the kite: ");
    scanf("%lf", &diag1);
    printf("Enter 2nd diagonal of the kite: ");
    scanf("%lf", &diag2);
    
    area = 0.5 * diag1 * diag2;
    
    return area;
    
}