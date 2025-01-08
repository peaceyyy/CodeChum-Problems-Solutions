/*

Sort Integer Array Using Pointers by CodeChum Admin

Write a function that takes an integer array and its size and sorts the array in ascending order using pointers.

*/

#include <stdio.h>

int* bubbleSortAscending(int arr[], int size);
void printArray (int* arr, int size);

int main(){
    
    int n;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];

    printf("Enter elements of array: ");
    
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    
    printf("Sorted array in ascending order: ");
        
    bubbleSortAscending(arr, n);
    printArray(arr, n);
    
    return 0;
}


int* bubbleSortAscending(int arr[], int size){
    
    for (int i = 1; i < size; i++){
        
        for (int j = 0; j < size - 1; j++){
            
            if (*(arr + i) < *(arr + j)){
                
                int temp =  *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
                
            }
        }
        
    }
    
}

void printArray (int* arr, int size){
    
 
    for (int i = 0; i < size; i++){
        
        printf("%d ", *(arr + i));
        
    }
}
    
    
    
