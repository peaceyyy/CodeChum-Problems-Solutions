/*

1. The breaker
You are tasked with creating a program that helps find the missing number in an array of consecutive integers. Your program should take an array of integers as input and determine the missing number within the consecutive sequence.


*/


#include <stdio.h>

int searchMissingValue(int*, int);

int main(){

    int size;

    printf("Enter the size of  array: ");
    scanf("%d", &size);

    int arr[size];
    int *arrPtr = arr;

    for (int i = 0; i < size; i++){
        
        printf("Enter element: ");
        scanf("%d", (arrPtr + i));
        
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nThe missing number is: %d", searchMissingValue(arr, size));


    
    return 0;
}
int searchMissingValue(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        
        if (*(arr + i) != i + 1) {
            return i + 1; 
    }
    return 0;
}