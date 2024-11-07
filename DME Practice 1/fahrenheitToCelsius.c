/*

Fahrenheit to Celsius II by CodeChum Admin
------------------------------------------

Write a program that includes a function, as specified in the minimum requirements, 
    that converts a temperature from Fahrenheit to Celsius. The function should take no arguments.
Inside this function, prompt the user to enter a temperature in Fahrenheit. 

 Calculate and display the equivalent temperature in Celsius using the formula: 
    Celsius = (Fahrenheit - 32) * 5.0 / 9.0. In the main function, call the created function.

*/

#include <stdio.h>

void convertTemperature();

int main(){
    
    convertTemperature();

    return 0;
}

void convertTemperature(){
    
    float tempInFahrenheit, tempInCelsius; 
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &tempInFahrenheit);
    
    tempInCelsius = (tempInFahrenheit - 32) * 5.00/9.00;
    printf("Temperature in Celsius: %.2f", tempInCelsius);
}