/*
Beyond Average: Finding the Outliers
by CodeChum Admin

Write a program that includes a function that accepts an integer array and its size, 
then prints all the elements that are greater than the average of the array in one line 
separated by spaces. 

In the main function, ask for the size and elements of the array, 
then call the created function by passing the inputs.

*/

#include <stdio.h>


void printOutliers(int arr[], int size)
{
    int arrSum = 0, avg;
    for (int i = 0; i < size; i++) arrSum += arr[i];
    
    avg = arrSum / size;

    printf("Elements greater than average: ");
        
    for (int i = 0; i < size; i++) if (arr[i] > avg) 
    {
        printf("%d ", arr[i]);
    }
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
        
    printOutliers(arr, size);
    
    return 0;

}