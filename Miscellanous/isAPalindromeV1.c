#include <stdio.h>

int isPalindrome();

int main(){
    
    if(isPalindrome()){
        printf("The number is a palindrome.");
    }

    return 0;
}


int isPalindrome(){
   
    int ones, tens, hundreds, thousands, num, reversed = 0;
 
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;

    // We weren't allowed to use loops for some reason
    
    if (temp / 1000 % 10 == 0 && temp % 10 == 0){
        if(temp / 100 % 10 == temp / 10 % 10){
            return 1;
        }
    }
    
    else if(num<9999){
    
    if (temp > 0){
        reversed =(reversed * 10) + temp % 10;
        temp/= 10;
    }
    
    if (temp > 0){
        reversed =(reversed * 10) + temp % 10;
        temp/= 10;
    }
    
    if (temp > 0){
        reversed =(reversed * 10) + temp % 10;
        temp/= 10;
    }
    
    if (temp > 0){
        reversed =(reversed * 10) + temp % 10;
        temp/= 10;
    }
    
      return num == reversed;
    
    }
     
}