/*
Worksheet from: https://www2.mvcc.edu/users/faculty/jfiore/Micro/work/CWorkStructures.pdf
*/

#include <stdio.h>
#include <string.h>

typedef struct Wombat Wombat;

struct Wombat {
    
    float f;
    long L; 
    Wombat *Next;
    char Name[20];

};


// void printLinkedList 


int main(){

    Wombat Ralph;

    Wombat Munroe[10];

    Ralph.f = 13.7;
    strcpy(Ralph.Name, "The Doctor");

    
   Wombat* WombatPtr = &Munroe[0];

   WombatPtr ->f = 17.1;
   strcpy(WombatPtr->Name, "Burgermeister");

    
    printf("%f\n", Ralph.f);
    printf("%s\n\n", Ralph.Name);

    printf("%f\n", WombatPtr -> f);
    printf("%s", WombatPtr -> Name);
    

    return 0;
}