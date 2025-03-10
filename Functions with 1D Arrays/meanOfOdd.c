/*

Mean of Odd Numbers
by CodeChum Admin

Write a program that includes a function that accepts an
integer array and its size and returns the average of all odd numbers in the array. 
If there are no odd numbers, return 0. For example, for the array [1, 2, 3, 4],
the average of odd numbers is (1 + 3) / 2 = 2.0. 

In the main function, ask for the size of the array and its elements. 
Call the created function by passing the inputs, get the returned average, 
and print it rounded to two decimal places.

*/

#include <stdio.h>
#include <math.h>

float meanOfOddNums(int arr[], int size)
{
    float mean, oddCount = 0, oddSum = 0;
    
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            oddCount++;
            oddSum += arr[i];
        }
    }
    
    mean = oddSum/oddCount;
    
    if (isnan(mean)) return 0;
    
    return mean;
    
}

int main()
{
    int size;
    
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter array values: \n");
    for (int i = 0; i < size; i++) scanf("%d", &arr[i]);
    
    printf("%.2f", meanOfOddNums(arr, size));
}