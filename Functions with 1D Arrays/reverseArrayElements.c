/*
Reverse Array Elements
by CodeChum Admin

Write a program that includes a function which accepts an integer array and its size,
then prints the elements of the array in reverse order, separated by a space in one line. In the main function, ask for the size and elements of the array, 
then call the created function by passing the inputs.
*/

#include <stdio.h>

void printReverse(int arr[], int size)
{
    for (int j = size - 1; j >= 0; j--) printf("%d ", arr[j]);
}

int main()
{

    int size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter array values:\n");
    int arr[size];

    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
        
    printReverse(arr, size);
    
    return 0;

    
}