/*

Addition Table Function by Christine Bandalan
---------------------------------------------

Ask the user to input an integer n and print the addition table. Limit the values of n to positive numbers 1 to 8 only. 

Use do-while loop to validate the input. 
If the input is valid,  call the function to display the addition table using nested for loops.

Example:

Enter n: 5

Addition Table
        0       1       2       3       4       5
0       0       1       2       3       4       5
1       1       2       3       4       5       6
2       2       3       4       5       6       7
3       3       4       5       6       7       8
4       4       5       6       7       8       9
5       5       6       7       8       9   

*/
#include <stdio.h>

void additionTable(int);


int main(){
    
    int n;
    
    do {
            
        printf("Enter n: ");
        scanf("%d", &n);
    
    } while (n < 1 || n > 8);
    
    additionTable(n);
}

void additionTable (int n){
    
    printf("\nAddition Table\n");
    printf("\t");
    
    for (int i = 0; i <= n; i++) printf("%d\t", i);
    
    printf("\n");
    
    for (int j = 0; j <= n; j++){
        
        printf("%d\t", j);
        
        for (int k = 0; k <= n; k++){
            
            printf("%d\t", j + k);    
        }
        
        printf("\n");
    }
}
