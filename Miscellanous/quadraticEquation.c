#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c, d, rootOne, rootTwo;

    printf("Enter coefficient a: ");
    scanf("%f", &a);

    printf("Enter coefficient b: ");
    scanf("%f", &b);

    printf("Enter coefficient c: ");
    scanf("%f", &c);

    d = pow(b, 2) - (4*a*c);
    rootOne = (-(b) + sqrt(d))/(2*a);
    rootTwo = (-(b) - sqrt(d))/(2*a);

    if (d < 0){

        printf("\nRoots are imaginary");
    }   

    else if (d == 0){
        
    printf("\nRoots are real and equal\n");
    printf("Root 1 = %.2f\n", rootOne);
    printf("Root 2 = %.2f", rootTwo);

    }

    else {

    printf("\nRoots are real and different\n");
    printf("Root 1 = %.2f\n", rootOne);
    printf("Root 2 = %.2f", rootTwo);

    }

    return 0;
}