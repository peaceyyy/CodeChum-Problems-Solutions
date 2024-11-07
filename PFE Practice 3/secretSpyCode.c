/*

Secret Spy Code by Christine Bandalan
-------------------------------------

Agent 007, I found some numbers written on the wall which could be the key to unlocking the room that holds 
the president’s daughter!!! Unfortunately,  when I tried inputting the numbers to the lock, it didn’t work. 
    
What’s that you say? 

Try reversing the numbers? Why, that’s absolutely brilliant! Come on, we gotta hurry, the bomb is about to blow!

Inputs

1. The number written on the wall
The value is within the range: 0 <= n <= 2147483647.

*/

#include <stdio.h>

int main(){
        
    int num, remainder, reversed = 0;
    
    printf("Enter the number: ");
    scanf("%d", &num);
    
    while (num > 0){
        
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    
    }
    
    printf("%d", reversed);
}