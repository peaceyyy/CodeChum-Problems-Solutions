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

int main(){
    
    char character;
    int i = 0;
    
    while (1){
        
        printf("Enter the 1st character of the alphabet: ");
        scanf(" %c", &character);
        
        if (character != 'A' && character != 'a') continue;;
        else break;
    }
    
    printf("\nAlphabet: \n");
    

        while (i < 5){
            
            int j = 0;
            
            while (j < 5){
                
                printf("%c ", character);
                character++;
                j++;
            }
            
            printf("\n");
            
            i++;
        }
        
        printf("    %c", character++);
}
