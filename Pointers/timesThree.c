/*

Times Three! by CodeChum Admin
------------------------------

Write a program that has a function multiplyBy3 that takes an integer pointer 
    and multiplies the value of the integer pointer by three. 
In the main, ask for an integer input, 
    then pass the input's address to the function and print the input's value after.

*/

#include <stdio.h>

void multiplyBy3 (int*);

int main(){
    
    int n; 
   
    
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    multiplyBy3(&n);
    
    printf("Value after multiplying by 3: %d", n); 

 
    return 0;
}

void multiplyBy3 (int* num){
    
     *num *= 3;

}