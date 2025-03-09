/*

Maximum Element in Each Row by CodeChum Admin

Write a program that accepts a 2D array and prints an array containing the maximum element in each row of the input array.

*/

#include <stdio.h>

int main()
{
    int rows, cols, k = 0;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];
    int maxValuesArr[rows];

    printf("Enter the array elements: \n");

    for (int i = 0; i < rows; i++)

    {
        int maxValue = 0;
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] >= maxValue)
            {
                maxValue = maxValuesArr[k] = arr[i][j];
            }
        }

        k++;
    }

    printf("The maximum elements per row are: ");
    for (int l = 0; l < rows; l++)
        printf("%d ", maxValuesArr[l]);
}
