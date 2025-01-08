/*

Calculate Average of an Integer Array by CodeChum Admin

Write a program that takes an integer array and its size as input, and calculates the average of the elements in the array using pointers.

*/

#include <stdio.h>

int sumOfArray (int*, int);


int main()

{
    
    int n;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements of the array: ");
    
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        
    printf("The average of the elements in the array is: %.2f", (float) sumOfArray(arr, n)/n);
 
    
    
    return 0;
}

int sumOfArray (int* arr, int size)
{
    int sum = 0;
    
    for (int i = 0; i < size; i++){
        
        sum += *(arr + i);
        
    }
    
    return sum;

}