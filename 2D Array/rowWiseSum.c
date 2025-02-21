#include <stdio.h>

int main(){
    
    int rows, cols;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    
    int arr[rows][cols];
    
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    int rowWiseSumArr[rows];
    for (int i = 0; i < rows; i++) {
        rowWiseSumArr[i] = 0;
    }

    int count = 0;
    
    
    for (int i = 0; i < rows; i++){
 
        for (int j = 0; j < cols; j++)
        {
            rowWiseSumArr[count] += arr[i][j];
         
        }
        
        count++;

    }
    
    printf("Row-wise sums: ");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", rowWiseSumArr[i]);
    }
    
    
    return 0;
    
    
}