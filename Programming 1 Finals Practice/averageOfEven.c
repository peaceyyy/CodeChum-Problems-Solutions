/*

3. Average of Even
Write a function that calculates the average of even numbers in a collection and also a display function. The program should prompt the user to enter the number of elements and the values of each element. The program should then display all the elements and the total of the even numbers and the average. 

Note: average and sum variables should be passed a pointer and NOT returned from the function. Instead, the average and sum variables should be changed in the functions via pointer and address. Doing so will give you the full credit for this.



*/


#include <stdio.h>

void averageOfEven (int*, float*, int);
void display(int*);
int main(){

    int n; 
    float result = 0;
    float* resultPtr = &result;

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

    averageOfEven(arr, resultPtr, n);

    printf("\nThe average of even is %.2f.", result);
    return 0;
}   

void averageOfEven (int* arr, float* result, int size){

    float sum = 0, evenCount = 0;

    for (int i = 0; i < size; i++){

        if (*(arr + i) % 2 == 0){
            sum += *(arr + i);
            evenCount++; 
        } 
    }

    *result = sum/evenCount;

}