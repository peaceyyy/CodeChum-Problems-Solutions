/*

1,2,3,...what? (while) by Christine Bandalan
--------------------------------------------

I’m Dr. Frankenstein, and I’ve just created an intelligent monster! 

It can even count numbers now but the problem is, it can only count up to 3, so maybe it isn’t so intelligent after all.
 I want to use my creation to terrorize the villages but it keeps malfunctioning when it sees a digit that
  is greater than 3 so the villagers just put up signs of digits greater than 3. 

  Make a program that is able to recognize digits greater than 3 so that it can avoid it 
    or I'll have my monster terrorize YOU instead!

Use while loop to display the numbers.

Inputs

1. Integer n
The integer to be processed.

415
0 <= n <= 2147483647

*/

#include <stdio.h>

int main(){
    
    int num, digitCount = 0;
    
    printf("Enter n: ");
    scanf("%d", &num);
    
    while (num > 0){
        
        int digit = num % 10;
        
        if (digit > 3){
            
            printf("%d\n", digit);
            digitCount++;
        }
        
        num /= 10;
        
    }
    
    if (digitCount == 0) printf("none");
    
}

