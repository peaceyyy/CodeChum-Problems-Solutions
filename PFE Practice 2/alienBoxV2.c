/*

Alien Box 2 by Christine Bandalan
---------------------------------

You wake up in a dimly lit room, with no memory of how you got there. 
Suddenly, a voice booms out, telling you that you have been kidnapped by the government. 
They have uncovered a mysterious box from an extraterrestrial U.F.O., and they need your help to decipher its contents. 
Apparently, the President thinks that uncovering the contents of this box could open up trade relations with the aliens.

The box seems to have a strange pattern that changes based on the number you input. 

The government has been able to observe something strange at the end of the row, 
    but that's all they have been able to figure out. You have no choice but to help the government, 
        because the fate of the country’s trade relations depends on you.



Your task is to write a program that takes in a number and outputs the pattern in the mysterious box.
The number to be inputted, as an integer greater than or equal to 2.


MUST USE NESTED WHILE LOOPS

*/

#include <stdio.h>

int main(){
    
    int n, i = 1;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (n < 2) printf("Invalid input!");
    
    else {
        
         while (i <= n){
            
            int j = 0;
            
            while (j < n - 1){
                
                printf("%d ", i);
                j++;
            }
        
            i++;
            printf("%d\n", i);
        }
    }
}
