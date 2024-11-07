#include <stdio.h>

long long getFactorial(int);

int main(){
    
    int rows;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    for (int i = 0; i < rows; i++){
        
        for (int j = 0; j <= i; j++){
            
            printf("%lld ", getFactorial(i)/(getFactorial(j) * getFactorial(i - j)));
        }
    
    printf("\n");
    
    }
    
    return 0;
    
}
    

long long getFactorial(int num){
    
    if(num == 0) return 1;
    
    else return(num * getFactorial(num - 1));
}