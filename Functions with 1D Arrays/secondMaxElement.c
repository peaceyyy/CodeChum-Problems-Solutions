/*
Second Maximum Element in Array
by CodeChum Admin

Write a program that includes a function which accepts an integer array and its size, 
then returns the second largest element in the array.
If the array size is less than 2, return -1.
In the main function, ask for the size and elements of the array,
then call the created function by passing the inputs, get the returned value,
and print the said value. If the returned value is -1, 
print "Array is too small to have a second largest element."

*/

#include <stdio.h>
#include <limits.h>

int getSecondMaxElement(int arr[], int size)
{
    if (size < 2) return -1;
    
    int maxElement = INT_MIN, secondMaxElement = INT_MIN;
    
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxElement)
        {
            secondMaxElement = maxElement;
            maxElement = arr[i];
        } else if (arr[i] > secondMaxElement && arr[i] != maxElement)
        {
            secondMaxElement = arr[i];
        }
    }
    
    return secondMaxElement;
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
        
    int secondMaxElement = getSecondMaxElement(arr, size);
    
    if (secondMaxElement == -1)
    {
        printf("Array is too small to have a second largest element.");
    } else {
        printf("The second largest element is: %d", secondMaxElement);
    }
    
    return 0;

    
}