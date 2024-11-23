/*

Add Elements to an Array using Pointers by CodeChum Admin
---------------------------------------------------------

Write a function addElement that takes an integer array pointer, its size, and an integer value as parameters, 
    and then adds the integer value to the end of the array. 
    
Use pass-by-reference technique to modify the original array. 
    In the main, ask for the size and elements of an integer array as well as an integer value. 

Use the created function by passing the inputs and 
    print the elements of the array after using the function.

*/


#include <stdio.h>

void addElement (int*, int*, int);


int main()

{
    
    int n, valueToBeAdded;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements: \n", n);
    
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        
    printf("Enter the value to be added: ");
    scanf("%d", &valueToBeAdded);
    
    addElement(arr, &n, valueToBeAdded);
    
    printf("Updated array: \n");
    
    for (int i = 0; i < n + 1; i++) printf("%d ", arr[i]);
    
    
    
    return 0;
}

void addElement (int* arr, int* size, int num){
    
    arr[*size++] = num; 
    
}