/*

Perfect Square Checker by CodeChum Admin
----------------------------------------
Write a program that asks the user for a number, n, and then checks 
    if the number is a perfect square using a for loop.

*/

#include <stdio.h>

int main(){
    
    int num, isPerfectSquare = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for(int i = 0; i <= num/2; i++){
        if(i * i == num){
            isPerfectSquare = 1;
        }
    }
    
    if (isPerfectSquare) printf("%d is a perfect square", num);
    else printf("%d is not a perfect square", num);
    
    return 0;
}