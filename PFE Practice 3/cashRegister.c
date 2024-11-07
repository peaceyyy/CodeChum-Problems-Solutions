/*

Cash Register by Christine Bandalan
------------------------------------
Create a program that displays the receipt of purchased items in a grocery store.
 The cashier must input the quantity and unit price of the products (milk, flour, and eggs) 
    and the amount given by the customer. Take note that the quantity of products must be integers.

 
Use width specifiers to for proper alignment of displayed values.

Sample Output 1

Milk quantity:        2
Milk unit cost:       123.456
Flour quantity:       12
Flour unit cost:      56.789
Egg quantity:         125
Egg unit cost:        8.95
Amount given:         2500

Description     Qty     Unit Cost       Subtotal
Milk              2        123.46         246.91
Flour            12         56.79         681.47
Eggs            125          8.95        1118.75
                                        --------
		Total Cost               2047.13
		Amount Given             2500.00
		Change                    452.

*/

#include <stdio.h>

int main(){
    
    int milkQty, flourQty, eggQty;
    float milkUnitCost, flourUnitCost, eggUnitCost, amountGiven; 
    
    printf("Milk quantity:        ");
    scanf("%d", &milkQty);
    printf("Milk unit cost:       ");
    scanf("%f", &milkUnitCost);
    
    printf("Flour quantity:       ");
    scanf("%d", &flourQty);
    printf("Flour unit cost:      ");
    scanf("%f", &flourUnitCost);
    
    printf("Egg quantity:         ");
    scanf("%d", &eggQty);
    printf("Egg unit cost:        ");
    scanf("%f", &eggUnitCost);
    
    printf("Amount given:         ");
    scanf("%f", &amountGiven);
    
    double milkSubtotal = (float) milkQty * milkUnitCost;
    double flourSubTotal = (float) flourQty * flourUnitCost;
    double eggSubTotal = (float) eggQty * eggUnitCost;
    double totalCost = milkSubtotal + flourSubTotal  + eggSubTotal;
    
    printf("\n%10s  %6s %13s %14s", "Description", "Qty", "Unit Cost", "Subtotal");
    printf("\n%4s  %13d %13.2f %14.2f", "Milk", milkQty, milkUnitCost, milkSubtotal);
    printf("\n%4s  %12d %13.2f %14.2f", "Flour", flourQty, flourUnitCost, flourSubTotal);
    printf("\n%4s  %13d %13.2f %14.2f\n", "Eggs", eggQty, eggUnitCost, eggSubTotal);
    printf("                                        --------\n");
    printf("		Total Cost%22.2f\n", totalCost);
    printf("\t\tAmount Given%20.2f\n", amountGiven);
    printf("		Change%26.2f", amountGiven - totalCost);
    
}