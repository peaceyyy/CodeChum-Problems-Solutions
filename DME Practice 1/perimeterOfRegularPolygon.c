
/*

Perimeter of Regular Polygon by CodeChum Admin
----------------------------------------------

Write a program that includes a function, as specified in the minimum requirements, 
    that asks the user to input the number of sides and side length of the polygon of type double. 
    
The function then calculates and returns the perimeter of a regular polygon using 
    the formula perimeter = number of sides * side length. 
    

In the main function, call the created function and print the returned value.

*/


#include <stdio.h>

double calculateRegularPolygonPerimeter();

int main(){
    
    
    
    double regularPolygonPerimeter = calculateRegularPolygonPerimeter();
    printf("Perimeter of the regular polygon: %.2lf", regularPolygonPerimeter);
    
    return 0;
}

double calculateRegularPolygonPerimeter(){
    
    double polygonPerimeter, numOfSides, sideLength;
    
    printf("Enter number of sides of the polygon: ");
    scanf("%lf", &numOfSides);
    printf("Enter side length of the polygon: ");
    scanf("%lf", &sideLength);
    
    polygonPerimeter = numOfSides * sideLength;
    
    return polygonPerimeter;
}