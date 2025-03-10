/*

Array Element Doubling
by CodeChum Admin

Write a program that includes a function to double the value of each element 
in an integer array. The function should accept an integer array and 
its size as inputs and return a new array where each element is twice the original value. 


In the main function, ask the user for the size and elements of the array, 
call the function to get the doubled array, and print the result.

*/

#include <stdio.h>

void doubleTheArray (int arr[], int* doubledArray, int size)
{
    int count = 0;
    
    for (int i = 0; i < size; i++)
    {
        *(doubledArray + count++) = arr[i] * 2;

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
    
    int doubledArr[size];
    
    doubleTheArray(arr, doubledArr, size);
    
    printf("Doubled array: \n");
    for (int i = 0; i < size; i++) printf("%d ", doubledArr[i]);
    
}