/*

Double It and Give It to the Next Person by CodeChum Admin

Write a program that has a function doubleAndGive which takes an array of integers and its size as parameters.
 The function should process the array such that each element is doubled and added to the next element in the array. 
 After processing each element, set its value to zero. Continue this process for the entire array.
  The last element will hold the accumulated value, while all other elements become zero. 
  In the main, ask for the size and elements of an integer array. 
  Print the array values before and after applying the doubleAndGive function.

*/


#include <stdio.h>

void printArray(int* arr, int size){
    
    for (int i = 0; i < size; i++){
        
        printf("%d ", arr[i]);
    }
}

void doubleAndGive(int* arr, int size){
    

    for (int i = 0; i < size - 1; i++){
        
        *(arr + i + 1) +=   *(arr + i) * 2;
        
        *(arr + i) = 0;
    }
}


int main(){
    
    int n;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter elements of the array: \n");
    
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    
    printf("Before processing: ");
    
    printArray(arr, n);
    doubleAndGive(arr, n);
    
    printf("\nAfter processing: ");
    printArray(arr, n);
    
    return 0;
}   