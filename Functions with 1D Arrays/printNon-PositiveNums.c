/*
Print Non-Positive Numbers
by CodeChum Admin

Write a program that includes a function that accepts an integer array and 
its size and prints all non-positive numbers (i.e., zero and negative numbers).

For example, for the array [1, -2, 3, 0, -5], the output should be -2 0 -5. 

In the main function, ask for the size of the array and its elements.
Call the created function by passing the inputs.

*/

#include <stdio.h>

void nonPositives (int* arr, int size)
{
    
    
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) <= 0) printf("%d ", *(arr + i));

    }
    
}


int main()
{
    int size;
    
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter array values: \n");
    for (int i = 0; i < size; i++) scanf("%d", &arr[i]);
    
    nonPositives(arr, size);
    
}