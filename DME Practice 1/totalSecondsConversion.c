/*

Time to Total Seconds Conversion by CodeChum Admin
--------------------------------------------------

Write a program that includes a function, as specified in the minimum requirements, 
    which does not return anything and takes three arguments - hours (integer), minutes (integer), and seconds (integer). 

It calculates the total number of seconds equivalent to the provided time and displays the total seconds. 
An hour consists of 60 minutes, and a minute is made up of 60 seconds. 

In the main function, ask for the hours, minutes, and seconds then call the created function by passing the inputs.

*/

#include <stdio.h>

void convertToTotalSeconds(int, int, int);

int main(){
    
    int hours, minutes, seconds;
    
    printf("Enter hours: ");
    scanf("%d", &hours);
    
    printf("Enter minutes: ");
    scanf("%d", &minutes);
    
    printf("Enter seconds: ");
    scanf("%d", &seconds);
    
    convertToTotalSeconds(hours, minutes, seconds);
    
    return 0;
}

void convertToTotalSeconds(int hours, int minutes, int seconds){
    
    int convertedToSeconds = (hours * 60 * 60) + (minutes  * 60) + seconds; 
    
    printf("Total seconds: %d", convertedToSeconds);
}