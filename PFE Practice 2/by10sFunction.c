/*

By 10's Function by Christine Bandalan
--------------------------------------

Troy, who is in his 1st grade, is having a hard time learning how to count numbers from 1 – 100. 
He asked his brother Gabriel to teach him how to count and he requested to do teach it 10 numbers per line. 
His brother doesn't know how to teach his brother so he is looking for a friend who can help him. 
Can you help Gabriel to do a program that can teach Troy to count numbers by printing it 10 numbers per line? 

If the number inputted is outside the range, the output should display "Number must be between 1-100!".
Use nested do-while loop to display the numbers.

*/

#include <stdio.h>

void countingFunction();

int main(){
    
    countingFunction();
    
}

void countingFunction(){
    
    int num, count = 1;
    
    do {
        
        printf("Count from 1 up to ? ");
        scanf("%d", &num);
        
        if (num <= 0 || num > 100) printf("Number must be between 1-100!\n");
        
    } while (num <= 0 || num > 100);
    
    printf("\nCounting...\n");
    
    
    do {
    
        int countCheck = count + 10;
        
            do {
                
                if (count > num) break;
                printf("%d\t", count);
                count++;
                
            } while (count < countCheck);
        
        printf("\n");
         
        } while (count <= num);
    
            
    }