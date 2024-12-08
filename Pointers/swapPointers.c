/*

Swap Pointers by CodeChum Admin
--------------------------------

Write a function that takes two pointers to integers as arguments and swaps the values they point to. 
    The function should have the following signature: void swapPointers(int* p1, int* p2);

*/
#include <stdio.h>

void swapPointers(int* p1, int* p2);

int main()
{
    
    int x, y;
    
    int *p1 = &x, *p2 = &y; 
    
    printf("Enter x: ");
    scanf("%d", &x);
    
    printf("Enter y: ");
    scanf("%d", &y);
    
    printf("Before swap: %d %d", x, y);
    
    swapPointers(p1, p2);
    
    printf("\nAfter swap: %d %d", x, y);
    
    return 0;
    
}

void swapPointers(int* p1, int* p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    
}