
/*
Leap Year Printer by CodeChum Admin
-----------------------------------
Write a program that asks the user to input a year. 
The output will be all the leap years between the input and 2020. The input is inclusive. T
he input may be before or after 2020.


Modified to have target year to be also determined by user
*/

#include <stdio.h>

int main(){
    
    int startingYear, endingYear;
    printf("I will provide the leap years between a starting year and an ending year\n");
    printf("Enter starting year: ");
    scanf("%d", &startingYear);
     printf("Enter ending year: ");
    scanf("%d", &endingYear);
    
    
    printf("Leap years between %d and %d:\n", startingYear, endingYear);
    
    if (startingYear > endingYear){
    
    for (; endingYear <= startingYear; endingYear++){
        
        if ((endingYear % 4 == 0 && endingYear % 100 != 0) || endingYear % 400 == 0) {
            printf("%d\n", endingYear);
        }
        
    }
    }
    
    else if (startingYear < endingYear){
        for (; startingYear <= endingYear; startingYear++){
        
        if ((startingYear % 4 == 0 && startingYear % 100 != 0) || startingYear % 400 == 0){
            printf("%d\n", startingYear);
        }
    }
    }
    
    else printf("%d", startingYear);
    
    return 0;
}
