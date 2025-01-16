#include <stdio.h>
#include <string.h>

int isDuckNumber(char*);

int main(){
    char n[100];

    printf("Enter a number: ");
    scanf("%s", &n);

    int isDuck = isDuckNumber(n);

    if(isDuck) printf("%s is a Duck Number.", n);
    else printf("%s is not a Duck Number.", n + 1);


    return 0;
}

int isDuckNumber(char* n) {

    int i = 0 ;

    if (n[0] == '0') return 0;

    else 
    {
        while (n[i] != '\0'){
            if(n[i] == '0'){
                return 1;
            }

            i++;
        }
    
    }
    

  
}