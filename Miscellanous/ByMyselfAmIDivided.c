/*

By Myself, I Am Divided Function by Christine Bandalan (University of San Carlos Professor)
------------------------------------------------------------------------------------------

Write a program that takes an integer number as input and check if the number is divisible by the sum of its digits.

If the given number is a three-digit number (between 100 and 999, inclusive), 
    extract its digits and calculate their sum. If the number is divisible by the sum of its digits, 
        print "It's divisible by the sum of its digits."

If the number is not a three-digit number and if it is not divisible by the sum of its digits, 
    print "It's not divisible by the sum of its digits or is not a three-digit number."

*/

#include <stdio.h>

int isDivisible(int);

int main (){

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    isDivisible(num);

    return 0;
}


int isDivisible(int num){

    int sum = num % 10 + num/10 % 10 + num/100 % 100;

    if(num % sum == 0) printf ("It's divisible by the sum of its digits");
    
    else printf ("It's not divisible by the sum of its digits or is not a three-digit number.");

  
}