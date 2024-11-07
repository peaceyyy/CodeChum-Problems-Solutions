/*

Pascal's Triangle by CodeChum Admin
-----------------------------------
Write a program that asks the user for a positive integer, n, and then prints the first n rows of Pascal's triangle.
In Pascal's triangle, the first and last numbers in each row are always 1, and each of the other numbers is the sum of the two numbers immediately above it in the previous row.


Note: For transparency, I wasn't able to solve this only until I searched up what a binomial coefficient is :P
*/

#include <stdio.h>

long long getFactorial (int);


int main(){
    
    int rows;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);


    for (int i = 0; i < rows; i++){
        
        for (int j = 0; j <= i; j++){

            printf("%lld ", getFactorial(i)/(getFactorial(j) * getFactorial(i - j)));

        }
                
        printf("\n");
}
}

long long getFactorial (int num){
    
    if (num == 0){
        return 1;
    }

   return num * getFactorial(num - 1);
}