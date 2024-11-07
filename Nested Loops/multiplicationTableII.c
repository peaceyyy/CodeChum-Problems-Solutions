/*

Multiplication Table II by CodeChum Admin
------------------------------------------
Create a program that takes two numbers m and n as input 
and prints out a multiplication table from 1 x 1 up to m x n.

*/

#include <stdio.h>

int main (){
    
    int m, n;
    
    printf("Enter the value of m: ");
    scanf("%d", &m);
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= m; i++){
        
        for (int j = 1; j <= n; j++)
        
            printf("%d\t", i * j);
            
    printf("\n");
    
    }
    
}