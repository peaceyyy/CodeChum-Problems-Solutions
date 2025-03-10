/*

Positive Sum
by CodeChum Admin

Write a program that includes a function that accepts an integer array 
and its size. This function should return the sum of
all the positive elements in the array.

In the main function,
ask for the size and elements of the array,
then call the created function by passing the inputs,
get the returned value, and print the said value..

*/

#include <stdio.h>

int positiveSum (int* arr, int size)
{
    int positiveSum = 0;
    
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) > 0) positiveSum += *(arr + i);

    }
    
    return positiveSum;

}


int main()
{
    int size;
    
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter array values: \n");
    for (int i = 0; i < size; i++) scanf("%d", &arr[i]);
    
    printf("Sum of positive elements: %d", positiveSum(arr, size));
    
}