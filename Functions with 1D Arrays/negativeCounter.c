/*
Negative Counter
by CodeChum Admin

Write a program that includes a function and
accepts an integer array and its size, 
then returns the count of negative numbers in the array. 
In the main function, ask for the size and elements of the array, 
then call the created function by passing the inputs, get the returned value, 
and print the said value.

*/

#include <stdio.h>

int countNegativeNums(int arr[], int size)
{
    int negativeCount = 0;
    for (int i = 0; i < size; i++) if (arr[i] < 0) negativeCount++;
    
    return negativeCount;
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

    printf("Number of negative values: %d", countNegativeNums(arr, size));
}2