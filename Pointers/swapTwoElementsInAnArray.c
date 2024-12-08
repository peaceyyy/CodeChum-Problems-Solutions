/*

Swap Two Elements in an Integer Array by CodeChum Admin
-------------------------------------------------------

Write a function that takes an integer array and two indices 
    and swaps the elements at those indices using pointers.

*/

#include <stdio.h>

void swapTwoElements (int*, int, int, int);


int main()

{
    
    int n, indexOne, indexTwo;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements of the array: ");
    
    for (int i = 0; i < n; i++) scanf("%d ", &arr[i]);
    
    printf("Enter the indices of the elements to swap: ");
    scanf("%d", &indexOne);
    scanf("%d", &indexTwo);
    
    swapTwoElements(arr, n,indexOne, indexTwo);
        
    printf("The array after swapping: ");
    
    for (int i = 0; i < n; i++) printf("%d", arr[i]);
    
    
    return 0;
}

void swapTwoElements (int* arr, int size, int indexOne, int indexTwo)
{
    
    int temp = *(arr + indexOne);
    *(arr + indexOne) = *(arr + indexTwo);
    *(arr + indexTwo) = temp;
}