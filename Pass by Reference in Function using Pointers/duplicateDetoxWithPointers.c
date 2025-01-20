/*

Duplicate Detox with Pointers by CodeChum Admin

Write a program that includes a function removeDuplicates which accepts a pointer to an integer array and the size of the array.
 The function should remove duplicate elements from the array and return the new size of the array.

In the main function, prompt the user to enter the size of the array and the elements of the array. 
Then, print the array before and after calling the removeDuplicates function.


*/



#include <stdio.h>
#define MAX_ARR_SIZE 100

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {

        printf("%d ", arr[i]);
    }
}

void removeDuplicates(int *arr, int *size)
{
   
    int hashMap[MAX_ARR_SIZE] = {0};
    int newIndex = 0; 

   
    for (int i = 0; i < *size; i++)
    {
        hashMap[arr[i]]++;
    }

    for (int i = 0; i < *size; i++)
    {
        if (hashMap[arr[i]] >= 1)
        {                        
            arr[newIndex] = arr[I];
            hashMap[arr[i]] = 0;    
            newIndex++;            
        }
    }

    *size = newIndex;
}
int main()
{

    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: \n");

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Array elements before removing duplicates: ");
    printArray(arr, n);

    removeDuplicates(arr, &n);

    printf("\nArray elements after removing duplicates: ");
    printArray(arr, n);

    return 0;
}
