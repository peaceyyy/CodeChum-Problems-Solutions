/*

Person BMI Calculation
by CodeChum Admin

Write a program that defines a structure Person:

 

Person:
float height (in meters)
float weight (in kilograms)
 

Then, write a function float calculateBMI(Person p) that accepts a Person struct and returns their BMI using the formula weight / (height * height).

 

In the main function, prompt the user to input height and weight, create a `Person` struct, and pass it to the calculateBMI function. Print the BMI.

*/

#include <stdio.h>

typedef struct {
    
    float height;
    float weight;
} Person;

float calculateBMI(Person p)
{
    return p.weight/(p.height * p.height);
}

int main()
{
    Person person1;
    printf("Enter height (in meters): ");
    scanf("%f", &person1.height);
    
    printf("Enter weight (in kilograms): ");
    scanf("%f", &person1.weight);
    
    
    float person1BMI = calculateBMI(person1);
    printf("BMI: %.2f", person1BMI);
    
    return 0;
}