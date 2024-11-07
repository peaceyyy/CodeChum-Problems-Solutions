/*

Display Greeting Function by Christine Bandalan
-----------------------------------------------

Write a program that has a function that is named in the minimum requirements that prints the message "Merry Christmas!" 
    to the console 5 times. In the main function, call the created function and insert space/s after each line.

Sample Output 1

Merry Christmas!
 Merry Christmas!
  Merry Christmas!
   Merry Christmas!
    Merry Christmas!


*/

#include <stdio.h>

int main(){
    
    display();
    printf("\n ");
    display();
    printf("\n  ");
    display();
    printf("\n   ");
    display();
    printf("\n    ");
    display();
    printf("\n     ");
    
    return 0;
}

void display(){
    printf("Merry Christmas!");
}