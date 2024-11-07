/*

Teach the children to learn the alphabet by printing the characters either 
    in upper/lowercase as shown below depending on the inputted 1st character, either A or a:

Enter the 1st character of the alphabet: a

    Alphabet:

        a b c d e
        f g h i j
        k l m n o
        p q r s t
        u v w x y
            z

Enter the 1st character of the alphabet: @
Enter the 1st character of the alphabet: A

    Alphabet:
        A B C D E
        F G H I J
        K L M N O
        P Q R S T
        U V W X Y
            Z

Use nested while loops and if statements. (Hint: Use continue and break statements.)

*/

#include <stdio.h>
#include <ctype.h>

int main(){
    
    char character, smallLetter = 'a', capitalLetter = 'A';
    int count = 0;
   
    while (1){
        
        printf("Enter the 1st character of the alphabet: ");
        scanf(" %c", &character);
        
        if (character != 'a' && character != 'A') continue;
        else break;
    }
        
    printf("\nAlphabet:\n");
    
    int rows = 1;
    
    while(rows <= 5){
            
        int columns = 0;
    
        while (columns < 5){
            
            if(count > 24) break;
        
            printf("%c ", character);
            character++;
            columns++;
            count++;
            
            }
            
        printf("\n");
        
        rows++;
    
    }
    
    printf("    %c", character);

}