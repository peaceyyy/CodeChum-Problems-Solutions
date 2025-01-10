/*

Reverse Subarray Using Pointers by CodeChum Admin

Write a program that includes a function reverseSubarray which accepts a pointer to an integer array, the size of the array, the start index, and the end index of the subarray to reverse. 
The function should reverse the elements of the subarray within the given range.
In the main function, prompt the user to enter the size of the array and the elements of the array. 
Then, ask for the start and end indices of the subarray to reverse. Print the array before and after reversing the subarray.

*/

#include <stdio.h>

void swapValue(int* x, int* y){
    
    int temp = *x;
    *x = *y;
    *y = temp;

}

void printArray(int arr[], int size){
    
    for (int i = 0; i < size; i++){
        
        printf("%d ", arr[i]);
    }
}

void reverseSubArray(int arr[], int size, int start, int end){
    
    for (; start < end; start++){
        
        swapValue(&arr[start], &arr[end]);
        end--;
        
    }    
    
}



int main(){
    
    int n, start, end;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements of the array: \n");
    
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    
    printf("Enter the start index of the subarray: ");
    scanf("%d", &start);
    
    printf("Enter the end index of the subarray: ");
    scanf("%d", &end);
    
    printf("Before reversal: ");
    printArray(arr, n);
    
    reverseSubArray(arr, n, start, end);
    printf("\nAfter reversal: ");
    printArray(arr, n);
    
    return 0;
}