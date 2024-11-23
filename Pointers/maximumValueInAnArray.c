/*

Find Maximum Value in Array using Pointers by CodeChum Admin
------------------------------------------------------------

Write a function findMax that asks for an integer array pointer and 
    its size as parameters and returns the maximum value in the array. 
In the main, ask for the size and elements of the array, call the created function, 
    and print the returned value from the function.

*/

#include <stdio.h>

int findMax (int*, int);

int main()
{
    
    int n; 
   
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array: \n");
    int arr[n];
    
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        

    printf("The maximum value in the array is %d", findMax(arr, n)); 

 
    return 0;
}

int findMax (int* arr, int size)
{
    
    int maxValue = 0;
    
    for (int i = 0; i < size; i++){
        
        if (arr[i] > maxValue) maxValue = arr[i];
    }
    
    return maxValue;
    
}