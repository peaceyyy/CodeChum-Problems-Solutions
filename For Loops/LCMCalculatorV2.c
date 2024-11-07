/* 

LCM Calculator by CodeChum Admin
--------------------------------

Write a program that asks the user for two numbers, a and b, and 
    then calculates and prints out their least common multiple using a for loop.

---------------------------------

Now using Euclidean Algorithm

*/

#include <stdio.h>

void swapIfLessThan(int*, int*);

int main(){

    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    printf("The LCM of %d and %d is %d", num1, num2, (num1 * num2) / getGreatestCommonDenominator(num1, num2));
    
return 0;

}

void swapIfLessThan(int* num1, int* num2){

    int temp;

    if(*num1 < *num2){
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

}

int getGreatestCommonDenominator(int a, int b){

    int remainder;
    swapIfLessThan(&a, &b);

    do{
        remainder = a % b;
        a = b;
        b = remainder; 

    } while (remainder != 0);

    return a;
}



