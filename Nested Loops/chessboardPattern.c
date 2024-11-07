/*

Chessboard Pattern by CodeChum Admin
------------------------------------
Create a program that takes a number n as input and prints out an n x n grid 
    with alternating black and white squares, like a chessboard.

*/

#include <stdio.h>

int main(){
    
    int n;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        
        if (i % 2 != 0){
        
            for (int j = 1; j <= n; j++){
                
                if (j % 2 != 0) printf("W ");
                else printf("B ");
                
            }
        
        printf("\n");
        
        }
        
        else{
        
            for(int j = 1; j <= n; j++){  
                
                if (j % 2 != 0) printf("B ");
                else printf("W ");
                
            }
        
        printf("\n");
        
        }
     
    }
    
    return 0;
}