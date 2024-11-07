/*

Array Rotation by CodeChum Admin
--------------------------------

Write a program that takes an array of integers and a number k as input and 
    uses nested loops to rotate the array k times to the right. 
        The program should print the rotated array.

A version using modulo.

*/


#include <stdio.h>

void printArray(int[], int);

int main(){
    
    int arraySize, k;
    
    printf("Enter size of array: ");
    scanf("%d", &arraySize);
    
    int numsArray[arraySize], rotatedArray[arraySize];
    
    printf("Enter elements of array: \n");
    
    for (int i = 0; i < arraySize; i++){
        
   
        scanf("%d", &numsArray[i]);
    }
    

    printf("Enter number of rotations: ");
    scanf("%d", &k);

    for (int i = 0; i < arraySize; i++){

        int newPosition = (i + k) % arraySize;
        rotatedArray[newPosition] = numsArray[i];            
    }
    
    printf("Rotated array: ");
    printArray(rotatedArray, arraySize);
    

}

void printArray(int array[], int size){
    
    
    for (int i = 0; i < size; i++){
        
        printf("%d ", array[i]);
    }
}



