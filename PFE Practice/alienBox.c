/*

Alien Box by Christine Bandalan
-------------------------------

You may be curious why we, the government, has kidnapped you and has been keeping you locked up in here. 
    We’ve been watching you and we know what you’re capable of.


We uncovered a mysterious box thingy from an extraterrestrial U.F.O. last week and it has a strange pattern. 
    The President thinks that uncovering the contents of this box could open up trade relations with the aliens 
        so you MUST help us.

 It seems like that for whatever number you input, 
    the box changes its pattern and we definitely see something strange going on at the end of the row but thats all we have been able to observe. You have no choice but to help us because the fate of the country’s trade relations depend on you.

Inputs

1. The number you inputted
The value is guaranteed to be greater than or equal to 2.

*/

#include <stdio.h>

int main(){
    
    int n;
    
    printf("Enter your number: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        
    
        for(int j = 1; j < n; j++){
            
            printf("%d ", i);
        }
        
        printf("%d", i + 1);
        printf("\n");

    }

    return 0;   
}