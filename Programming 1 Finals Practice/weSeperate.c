/*

5. We separate

Write a program that takes a collection of numbers 
    and displays a new collection that contains only 
        the numbers that have the same parity as the first element. 

Parity means whether a number is even or odd.
 For example, if the first element is 2, 
        then only the even numbers 
        from the original collection 
        should be displayed in the new collection. 


The program should prompt the user to enter the total number of elements, 
    then input each element one by one. 
    
After that, the program should display the original collection and 
    the new collection.

Requirement: Implement functions store the required values on the new array
     based on the specifications from the original array in void seperateArray() function 
        and to display both the original and the new separated array.

*/

#include <stdio.h>

void separateArray(int*, int);

int main(){

    int size;

    printf("Enter how many values: ");
    scanf("%d", &size);

    int arr[size];
    int *arrPtr = arr;

    for (int i = 0; i < size; i++){
        
        printf("Enter the element %d: ", i + 1);
        scanf("%d", (arrPtr + i));
        
    }

    separateArray(arr, size);

}

void separateArray(int* arr, int size){


    printf("Original {");

    for (int i = 0; i < size; i++){

        if (i != size - 1) printf("%d, ", *(arr + i));
        else printf("%d", *(arr + i));

    } 
    printf("}");

   
    int count = 0, newArr[size];
    
    if (*(arr) % 2 == 0){


        for (int i = 0; i < size; i++){

            if(*(arr + i) % 2 == 0) newArr[count++] = *(arr + i);
    
        }

    } 
    
    else {
        
        for (int i = 0; i < size; i++){

            if(*(arr + i) % 2 != 0) newArr[count++] = *(arr + i);
            
        }
    }

 
    printf("\nNew {");


     for (int i = 0; i < count; i++){

        if (i != count - 1) printf("%d, ", *(newArr + i));
        else printf("%d", *(newArr + i));

    } 

    printf("}");

}


