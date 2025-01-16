#include <stdio.h>

int main(){

    int num, isNotPrime = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    for (int i = 2; i <= num; i++){
        if (num % i == 0 && num != i){
            isNotPrime = 1;
            break;
        }
    }

    if (isNotPrime){
        printf("%d is not a prime number", num);

    }

    else{
        printf("%d is a prime number", num);
        
        }
    
    return 0;
}