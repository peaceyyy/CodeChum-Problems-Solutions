/*

Remove Duplicate Elements from an Integer Array by CodeChum Admin

Write a function that takes an integer array and its size and removes the duplicate elements from the array using pointers.

*/
#include <stdio.h>
#define MAX_VALUE 100

void removeDuplicatesInAnArray(int*, int*);
void printArray (int* arr, int size);

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("The unique elements in the array are: ");

    removeDuplicatesInAnArray(arr, &size);
    printArray(arr, size);
    
    return 0;
}


void removeDuplicatesInAnArray(int* arr, int* size){
    
    
    int duplicateCount = 0;
    int hashMap[MAX_VALUE] = {0};
    
    for (int i = 0; i < *size; ){
        
        
        if (hashMap[arr[i]] > 0 ){
            
            duplicateCount++;
            
            for (int j = i; j < *size - 1; j++){
                *(arr + j) = *(arr + j + 1);
            }
            
        (*size)--;
        
            
        } else{
            
          hashMap[arr[i]]++;
          i++;
            
        } 
        
    }
    
    
}

void printArray (int* arr, int size){
    
 
    for (int i = 0; i < size; i++){
        
        printf("%d ", *(arr + i));
        
    }
}