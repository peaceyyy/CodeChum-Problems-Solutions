/*

Coffee Order Simulator Function by Christine Bandalan
-----------------------------------------------------

Write a program that models a coffee order. 
It accepts a string input ('Espresso', 'Latte', 'Cappuccino', 'Mocha') 
    representing the coffee type. Use a switch statement to print the corresponding description and ingredients.

 
Print the Coffee Description and Ingredients:

Espresso
Description: Espresso is a concentrated coffee beverage.
Ingredients: Finely ground coffee beans and hot water.
Latte
Description: Latte is a coffee drink made with espresso and steamed milk.
Ingredients: Espresso, steamed milk, and a small amount of milk foam.
Cappuccino
Description: Cappuccino is an espresso-based coffee drink topped with foamed milk.
Ingredients: Espresso, steamed milk, and milk foam.
Mocha
Description: Mocha is a chocolate-flavored coffee drink made with espresso and milk.
Ingredients: Espresso, chocolate syrup, steamed milk, and whipped cream (optional).
 
 */

#include <stdio.h>
#include <ctype.h>

void showCoffeeType(char);

int main(){
    
    char coffeeType[50];
    
    printf("Enter the coffee type: ");
    scanf("%s", coffeeType);
    
    char firstLetter = tolower(coffeeType[0]);
    showCoffeeType(firstLetter);
    
    
    
    return 0;
}
    

void showCoffeeType(char coffeeTypeFirstLetter){
    
    switch(coffeeTypeFirstLetter){
        case 'e':
        printf("Description: Espresso is a concentrated coffee beverage.\n");
        printf("Ingredients: Finely ground coffee beans and hot water.");
        break;
        
        case 'l':
        printf("Description: Latte is a coffee drink made with espresso and steamed milk.\n");
        printf("Ingredients: Espresso, steamed milk, and a small amount of milk foam.");
        break;
        
        case 'c':
        printf("Description: Cappuccino is an espresso-based coffee drink topped with foamed milk.\n");
        printf("Ingredients: Espresso, steamed milk, and milk foam.");
        break;
        
        case 'm':
        printf("Description: Mocha is a chocolate-flavored coffee drink made with espresso and milk.\n");
        printf("Ingredients: Espresso, chocolate syrup, steamed milk, and whipped cream (optional).");
        break;
        
        default:
        printf("Invalid coffee type.");
    }
}