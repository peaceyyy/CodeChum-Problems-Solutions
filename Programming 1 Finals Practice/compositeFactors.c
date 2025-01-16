/*

Composite Factors by Charles Montero (A University of San Carlos senior)
Create a program that finds all the numbers, given a number and highlights the composite factors.
  
Test Case 1
Enter a number: 10
1 2 5 {10}

Test Case 2
Enter a number: 
1

Test Case 3
Enter a number: 20
1 2 {4} 5 {10} {20}

Test Case 4
Enter a number: 100
1 2 {4} 5 {10} {20} {25} {50} {100}

Test Case 5
Enter a number: 69
1 3 23 {69}

Test Case 6
Enter a number: 45
1 3 5 {9} {15} {45}


*/


#include <stdio.h>

int main(){

    int n, isComposite = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){

        int isFactor = 0;
        isComposite = 0;
            
        if (n % i == 0) isFactor = 1;
        
        if (isFactor) {

            for (int j = 2; j < i; j++){
                
                if (i % j == 0) isComposite = 1;
                
            }

        if (isComposite) printf("{%d} ", i);
        else printf("%d ", i);

        }
    }

    return 0;
}