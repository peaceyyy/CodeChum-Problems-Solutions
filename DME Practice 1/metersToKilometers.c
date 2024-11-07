/*

Meters to Kilometers by CodeChum Admin
--------------------------------------

Write a program that includes a function, as specified in the minimum requirements, 
    that takes a double precision floating-point argument - meters. 

It converts the distance from meters to kilometers using the conversion factor: 1 kilometer = 1000 meters
     and returns the converted value in double data type. In the main function, ask for the meters input, 
        then call the created function using the input, get the returned value, and print the said value.

*/

#include <stdio.h>

double convertMetersToKilometers(double);

int main(){
    
    double distanceInMeters;
    printf("Enter the distance in meters: ");
    scanf("%lf", &distanceInMeters);
    
    double converted = convertMetersToKilometers(distanceInMeters);
    printf("Converted distance: %.2lf kilometers", converted);
    
    
    return 0;
}

double convertMetersToKilometers(double meters){
    double convertedToKilometers = meters / 1000;
    
    return convertedToKilometers;
    
}