/*

2. Sum of Odd
Write a function that calculates the total of odd numbers in a collection. The program should prompt the user to enter the number of elements and the values of each element. The program should then display all the elements and the total of the odd numbers.

Note: The result used in main should be changed via pointer when you pass it as an address in oddNum() function.


*/


#include <stdio.h>

void sumOfOdd (int*, int*, int);
int main(){

    int n, result = 0;
    int* resultPtr = &result;

    printf("Enter how many values: ");
    scanf("%d", &n);

    int arr[n];
    int* arrPtr = arr;

    for (int i = 0; i < n; i++){

        printf("Enter the element %d: ", i + 1);
        scanf("%d", (arrPtr + i));
    }

    printf("List {");

    for (int i = 0; i < n; i++){
     
    if (i != n - 1) printf("%d, ", *(arrPtr + i));
    else printf("%d", *(arrPtr + i));

    }
    printf("}");

    sumOfOdd(arr, resultPtr, n);

    printf("\nThe sum of odd is %d.", result);
    return 0;
}   

void sumOfOdd (int* arr, int* result, int size){

    int sum = 0;

    for (int i = 0; i < size; i++){

        if (*(arr + i) % 2 != 0) sum += *(arr + i); 
    }

    *result = sum;

}