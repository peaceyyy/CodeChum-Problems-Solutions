//I don't have all the time in the world 

/* Given problem:

    Create a program that asks the user for an input until the user inputs 0 and display the greatest number inputted,
    If the greatest number has changed 3 times throughout the course of the program, 
    stop asking for other inputs and instead display the greatest number up to that point.
    
*/

#include <stdio.h>

int main(){

    int num = 1;
    int greatestNumber = 0;
    int count = 0;

    while(num != 0 && count < 3){

        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > greatestNumber){
            greatestNumber = num;
            count += 1;
        }
    }

    if(num == 0){
        printf("\nProgram Ended due to an input of 0");   
        printf("\nThe greatest number is %d", greatestNumber);
        
    }

    else{
        printf("\nProgram Ended due to 3 changes in the Greatest Number");
        printf("\nThe greatest number is %d\n", greatestNumber);
    }

    return 0;
}