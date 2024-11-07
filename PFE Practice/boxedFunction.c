/*

Boxed Function by Christine Bandalan
------------------------------------

Draw the boxed "X" depending on the size inputted by the user. The size of the box must be within 4 to 12, inclusive.

Use if-else statement to validate the size of the box. Call the function and use nested while loops to draw the box.


Sample Output 1

Size of the box: 3

Invalid box size!
Sample Output 2

Size of the box: 12

O - - - - - - - - - - O
- O - - - - - - - - O -
- - O - - - - - - O - -
- - - O - - - - O - - -
- - - - O - - O - - - -
- - - - - O O - - - - -
- - - - - O O - - - - -
- - - - O - - O - - - -
- - - O - - - - O - - -
- - O - - - - - - O - -
- O - - - - - - - - O -
O - - - - - - - - - - O

*/

#include <stdio.h>

void boxDisplay(int);
int main(){
    
    int n;
    
    printf("Size of the box: ");
    scanf("%d", &n);
    
    if (n >= 4 && n <= 12) boxDisplay(n);
    
    else printf("\nInvalid box size!");
    
    return 0;   
}

void boxDisplay(int size){

    
    int start = 0, end = size - 1, i , j;
    
    printf("\n");
    
    while (i < size){
        
        j = 0;
        
        while (j < size){
            
            if (start == j || end == j) printf("O ");
            else printf("- ");
            j++;
            
        }
        
        printf("\n");
        
        start++;
        end--;
        i++;
    }

}
