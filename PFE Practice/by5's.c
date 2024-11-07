/*

By 5's (while) by Christine Bandalan
------------------------------------

Troy who is in his 1st grade and is having a hard time learning how to count numbers from 1 – 50. 

He asked his brother Gabriel to teach him how to count, but he requested to do teach it 5 numbers per line. 

His brother don't know how to teach his brother so he's looking for a friend who can help him. 
    Can you help Gabriel to do a program that can teach Troy to count numbers by printing it 5 numbers per line? 


If the number exceeds 50, the output should display "Number must be 1-50!".

 
Use while loop to display the numbers.

*/

#include <stdio.h>

int main(){
    
    int size, i = 1, temp;
    
    printf("Enter size: ");
    scanf("%d", &size);
    
    if (size > 50) printf("Number must be 1-50!");
    
    else {
        
        while (i <= size) {
            
            temp = i;
            
            if (i + 5 > size){
                
                while (i <= size){
                    
                    printf("%d ", i);
                    i++;
                }
            
            }

            else {
            
                while (i < temp + 5) {
                    
                    printf("%d ", i);
                    i++;
              
                }
            
            printf("\n");
            
            }
        }
    }
    
    return 0;
}