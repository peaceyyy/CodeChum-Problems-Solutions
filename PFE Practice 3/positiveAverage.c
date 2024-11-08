/*

Positive Average! by Christine Bandalan
---------------------------------------

Write a program that will ask the user the size of the array and the elements (double) of the array. 
    Show the elements of the array and calculate the average of the positive elements only.

Requirements:

The function, getNumber, does not have parameters but has a return type.
The function contains only a scanf() that gets the elements of the array.
The do-while loop statements to call the function and to show the elements of the array must be within the main().

*/

#include <stdio.h>

double getNumber();


int main(){
    
    int arraySize, i = 0, j = 0, positiveCount = 0;
    
    printf("How many numbers? ");
    scanf("%d", &arraySize);
    
    printf("Input the array elements\n");
    
    double arr[arraySize], sum = 0;
    
    do {
        
        printf("[%d] = ", i);
        arr[i] = getNumber();
        
        if (arr[i] > 0){
            
            positiveCount++;
            sum += arr[i];
    
    }
    
    i++;

    } while (i < arraySize);
    
        printf("\nArray elements: \n");
    
    do {
        
        printf("[%d] = %.2lf\n", j, arr[j]);
        j++;
    
    } while (j < arraySize);
    
    printf("\nAverage of %d positive numbers is %.2lf", positiveCount,  sum / (double) positiveCount);
    
}

double getNumber(){
    
    double doubleNum;
    scanf("%lf", &doubleNum);
    return doubleNum;
    
}
