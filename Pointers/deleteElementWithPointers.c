/*

Delete Element with Pointers by CodeChum Admin
----------------------------------------------

Write a function deleteElement that takes an integer array pointer, its size pointer, and an integer pointer 
    with the value of the element to be deleted. 
    
The function should remove the element from the original array and adjust the size accordingly. 
    In the main, ask for the size and elements of an integer array, and the value to be removed. 
    
Use the created function and print the elements of the modified array afterwards.

*/

#include <stdio.h>

void deleteElement(int*, int*, int*);

int main() {
    int size, valueToBeDeleted;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array: \n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of the element to be deleted: ");
    scanf("%d", &valueToBeDeleted);

    deleteElement(arr, &size, &valueToBeDeleted);

    printf("The updated array is: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

void deleteElement(int* arr, int* size, int* deleteVal) {
    
    int index;


    for (int i = 0; i < *size; i++) {
        if (arr[i] == *deleteVal) {
            index = i;
            break;
        }
    }

        for (int j = index; j < *size - 1; j++) {
            arr[j] = arr[j + 1];
    }
    
    (*size)--;
}
