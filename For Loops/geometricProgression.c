/*

Geometric Progression by CodeChum Admin
---------------------------------------
Write a program that asks the user for a starting number, r, and a common ratio, d, 
and then prints out the first 10 terms of the geometric progression using a for loop.

*/


#include <stdio.h>

int main(){
    
    int r, d, finalProduct;
    printf("Enter starting number: ");
    scanf("%d",&r);
    printf("Enter common ratio: ");
    scanf("%d", &d);
    
    for (int i = 0; i < 10; i++){
        printf("%d ", r);
        r *= d;
        
    }
    
}