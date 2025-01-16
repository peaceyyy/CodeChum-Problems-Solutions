#include <stdio.h>

void listCleaning(int*, int*, int, int*);
void display(int*, int);


int main(){

    int n, m = 0;
    int* cleanedArrSizePtr = &m;

    printf("Input how many items in the array: ");
    scanf("%d", &n);

    int arr[n], cleanedArr[m];

    printf("Input Array Values: ");

    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    // int testArr[] = {-1, 5, 3, 7, 2, -1};
    // listCleaning(testArr, cleanedArr, 6, cleanedArrSizePtr);
    
    listCleaning(arr, cleanedArr, n, cleanedArrSizePtr);
    
    display(cleanedArr, m);
    
    return 0;
}

void listCleaning(int* arr, int* newArr, int size, int* newArrSize){

    int indexTag = 0, negativeIndex = -1;

    for (int i = 0; i < size; i++){

        if (arr[i] < 0 && negativeIndex == -1){

            indexTag = 1;
            negativeIndex = i;
       
        }

        else if (arr[i] < 0){
            
            indexTag = 0;
            negativeIndex = -1;

        }

        else if (arr[i] >= 0 && !indexTag) newArr[(*newArrSize)++] = arr[i];

      
    }


}

void display(int* arr, int size){

    if(size == 0) printf("Oh no Data is fully corrupted and cannot be recovered!");

    else{

         printf("Data has been recovered!\n");
         printf("Cleaned Data: ");
        for (int i = 0; i < size; i++) printf("%d ", *(arr + i));
    
    }   

}