/*

Swap Elements in Array Using Pointers by CodeChum Admin

Write a program that includes a function swapElements which accepts a pointer to an integer array, the size of the array, and two indices. 
The function should swap the elements at the given indices in the array.

In the main function, prompt the user to enter the size of the array and the elements of the array. 
Then, ask for the two indices whose elements should be swapped. Print the array before and after swapping the elements.

*/

#include <stdio.h>

void swapElements(int* arr, int a, int b){
    
    int temp =  *(arr + a);
    
    *(arr + a) = *(arr + b); 
    
    *(arr + b) = temp;
    
    
}

void printArray(int *arr, int size){
    
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }
}


int main(){
    
    int sizeOfArray, ind1, ind2;
    
    printf("Enter the size of the array: ");
    scanf("%d", &sizeOfArray);
    
    int arr[sizeOfArray];
    
    printf("Enter the elements of the array: \n");
    
    
    for (int i = 0; i < sizeOfArray; i++) scanf("%d", &arr[i]);
        
    printf("Enter the first index to swap: ");
    scanf("%d", &ind1);
    printf("Enter the second index to swap: ");
    scanf("%d", &ind2);
    
    printf("Before swapping: ");
    
    printArray(arr, sizeOfArray);
    swapElements(arr, ind1, ind2);    
    printf("\nAfter swapping: ");
    printArray(arr, sizeOfArray);
    
    return 0;
}