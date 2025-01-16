/*

Reversed Right Triangle by CodeChum Admin
----------------------------------------

Write a program that takes an integer size.

Create and print a right triangle where the opposite side is faced at the right side.

Starting from the top, the number of characters to be printed should start from 1 then increments one down 
    to the next row until the inputted number.

 Every row of the triangle should print the character literal of the dedicated number of elements for that row.

*/


#include <stdio.h>

int main(){

    int size;

    printf("Enter a size: ");
    scanf("%d", &size);

    for (int i = 1; i <= size; i++){
        for(int j = 0; j < size - i; j++){
            printf(" ");
        }
        for(int k = 0; k < i; k++){
            printf("%d", i);
        }
    printf("\n");
    }

    return 0;
}