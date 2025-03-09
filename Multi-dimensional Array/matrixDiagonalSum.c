#include <stdio.h>
#define MAX 100


int diagonalSum(int arr[MAX][MAX], int size){
    
    int diagSum = 0;
    
    for (int i = 0; i < size; i++){
        
        for (int j = 0; j < size; j++){
            
            if(i == j) diagSum += arr[i][j];
        }
        
    }
    
    return diagSum;
    
}


int main(){
    
    int arrMatrix[MAX][MAX];
    int sizeOfMatrix;
    
    printf("Enter the size of the matrix: ");
    scanf("%d", &sizeOfMatrix);
    
 
    
    printf("Enter the elements of the matrix: \n");
    
    for (int i = 0; i < sizeOfMatrix; i++){
        
        for (int j = 0; j < sizeOfMatrix; j++){
        
            scanf("%d", &arrMatrix[i][j]);
            
        }
        
    }
    
    printf("The diagonal sum of the matrix is: %d", diagonalSum(arrMatrix, sizeOfMatrix));
    
    return 0;    
}
