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
    
    return 0;
}

void countingFunction(){
    
    int n, count = 1;
    
    do {
        
        printf("Count from 1 up to ? ");
        scanf("%d", &n);
        
        if (n <= 0 || n > 100) printf("Number must be between 1-100!\n");
        
    } while (n <= 0 || n > 100);
     
    int i = 0;
    
    printf("\nCounting...\n");
    
    
    do {
        
        int j = 0;
        
        do {
        
        printf("%d\t", count);
        
        if (count % 10 == 0) printf("\n");
        
        count++;
        j++;
        
            
        } while (j < n);
        
    i++;
    
    } while (count <= n);
    
    
}
