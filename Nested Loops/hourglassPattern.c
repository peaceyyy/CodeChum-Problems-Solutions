/*

Hourglass Pattern by CodeChum Admin
-----------------------------------

Create a program that takes a number n as input and prints out an hourglass pattern with n rows.

Sample Output 1

Enter number of rows: 5
*********
 *******
  *****
   ***
    *
   ***
  *****
 *******
*********


Terribly inefficient solution. I was fixated on using the same idea used in the diamond pattern when I could have
    just used two separate for loops.
*/


#include <stdio.h>

int main (){
    
    int rows, i, j, tempRows, flag = 1, numOfSpaces;
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    
    j = rows;
    tempRows = rows;
    
    rows = (rows * 2) - 1;
    i = rows;
    

    while (j <= rows){
        
        if (i == 1) 
        
        {
            flag = 0;
            rows = rows/2 + 1;
            
        }
        
        
        numOfSpaces = tempRows - j;
        
        for (int k = 1; k <= numOfSpaces; k++) printf(" ");
        for (int k = 1; k <= i; k++) printf("*");
        
        printf("\n");
        
        if (flag){
            
            i-=2;
            j--;
            
        }
        
        else {
            
            i+=2;
            j++;
            
            
        }
        
        
    }
    
    return 0;
}   