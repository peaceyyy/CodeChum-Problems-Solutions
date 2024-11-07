/*

Create a program that takes an integer n and prints the multiplication table of n up to n x n.
    
*/


#include <stdio.h>

int main(){
    
    int num;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    for (int i = 1; i <= num; i++){
        
        for (int j = 1; j <= num; j++)
            printf("%d x %d = %d\n", i, j, i * j);
            
    }
    
    return 0;
}