/*

Product Rating Analysis v.2 by Christine Bandalan
-------------------------------------------------
Write a program that includes two functions, as specified in the minimum requirements.

The following are the function details:

Get Rating: 
    This function takes the input for quality, price, and service, 
    then returns the input in double data type to the main function, one at a time.

Calculate Average Rating: 
    This function takes three double floating-point arguments - quality, price, and service. 
    It calculates the average rating score based on the three aspects and returns the result in double data type.

Analyze Product Ratings: 
    This function does not return anything 
    It takes three arguments - quality (double), price (double), and service (double). 
    It displays the individual aspect ratings. 
    It also displays the average grade by calling the calculate average rating function
        and displaying its returned value by two decimal places.
 
In the main function, ask for two strings, productName and category, three double inputs, quality, price, and service,
     then displays the productName and category, before calling the analyze product ratings function.

*/

#include <stdio.h>
#include <math.h>

double calculateAverageRating (double, double, double);
void analyzeProductRating (double, double, double);
double getRating();

int main(){
     
     char productName[10], productCategory[10];
     double qualityRating, priceRating, serviceRating;
     
    printf("Enter Product Name: ");
    scanf("%s", productName);
    printf("Enter Category: ");
    scanf("%s", productCategory);
    
    printf("Enter Quality Rating: ");
    qualityRating = getRating();
    printf("Enter Price Rating: ");
    priceRating = getRating();
    printf("Enter Service Rating: ");
    serviceRating = getRating();
    
    printf("\nProduct Rating\n");
    printf("Product Name: %s\n", productName);
    printf("Category: %s\n", productCategory);
    analyzeProductRating(qualityRating, priceRating, serviceRating);
    
    return 0;
}

double getRating(){ 
    double rating;
    scanf("%lf", &rating);
    return rating;
}

double calculateAverageRating(double qualityRating, double priceRating, double serviceRating){
    double overallRating = (qualityRating + priceRating + serviceRating)/3;
    return overallRating;
}

void analyzeProductRating(double qualityRating, double priceRating, double serviceRating){
    printf("Quality Rating: %.2lf\n", qualityRating);
    printf("Price Rating: %.2lf\n", priceRating);
    printf("Service Rating: %.2lf\n", serviceRating);
    
    double overallRating = calculateAverageRating(qualityRating, priceRating, serviceRating);
    printf("Overall Average Rating: %.2lf", overallRating);
    
}
