/*

4. Reverse Trap
You are tasked with creating a program that reverses the elements in an array. Your program should ask the user to enter the size of the array and its elements (all positive). Once the array is inputted, your program will display the Original array that was imputed by the user, and the reverse of that.

Requirement: Implement functions to display both the original and the reversed array.

*/

#include <stdio.h>

void displayOrigArr(int*, int);
void displayReversedArr(int*, int);

int main(){

    int n;

    printf("Enter the size of array:  ");
    scanf("%d", &n);

    int arr[n];
    int* arrPtr = arr;

    for (int i = 0; i < n; i++){

        printf("Enter element %d: ", i + 1);
        scanf("%d", (arrPtr + i));
    }

    displayOrigArr(arr, n);
    printf("\n");
    displayReversedArr(arr, n);

    return 0;
}

void displayOrigArr (int* arr, int size){

    printf("[");

    for (int i = 0; i < size; i++){

        if (i != size - 1) printf("%d, ", *(arr + i));
        else printf("%d", *(arr + i));

    } 
    printf("]");
}

void displayReversedArr (int* arr, int size){

    for (int i = 0; i < size/2; i++){

        int temp = *(arr + i);
        *(arr + i) = *(arr + size - i - 1);
        *(arr + size - i - 1) = temp;
    }

    displayOrigArr(arr, size);
}