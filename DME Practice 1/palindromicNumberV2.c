/*

Palindromic Number Function v.2 by Christine Bandalan
-----------------------------------------------------

Write a program that takes an integer number as input and check if it is a palindrome. 
    A palindrome is a number that remains the same when its digits are reversed.
    The number should not exceed 4 digits. 
    If the number is a palindrome, print "The number is a palindrome."
        Otherwise, it does nothing.

*/

#include <stdio.h>
#include <string.h>


int isPalindrome();

int main(){

    int num;

    printf("Enter a number: ");
    scanf("%d", &num); 
 
    if (isPalindrome(num)){
        printf("%d is a palindrome", num);
    }
    else {
        printf("%d is not a palindrome", num);
    }

    return 0;

}

int isPalindrome(int num){ 

    int temp, reversed = 0, remainder;
    
    temp = num;

    if (num > 9999){              // checks if number exceeds 4 digits
        return 0;
    }

    else if (temp / 1000 % 10 == 0 && temp % 10 == 0){    // checks some edge case which I forgot

        if (temp / 100 % 10 == temp / 10 % 10) {
                return 1;
            }
    }

    while (num > 0){

        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    return temp == reversed;

    }
    
