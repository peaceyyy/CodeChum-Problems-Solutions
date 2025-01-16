#include <stdio.h>

void incrementAndDouble(int* a, int* b ){
    
    (*a)++;
    *b *= 2;
    
}

int main(){
    
    int a, b;
        
    printf("Enter the first integer (a): ");
    scanf("%d", &a);
    
    printf("Enter the second integer (b): ");
    scanf("%d", &b);
    
    printf("Before operation: a = %d, b = %d", a, b);
    incrementAndDouble(&a, &b);
    printf("\nAfter operation: a = %d, b = %d", a, b);

    return 0;
}