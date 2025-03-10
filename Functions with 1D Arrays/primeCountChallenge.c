/*
Prime Count Challenge
by CodeChum Admin

Write a program that includes a function that accepts an integer array and its size,
then returns the count of prime numbers in the array.

In the main function, ask for the size and elements of the array,
then call the created function by passing the inputs,
get the returned value, and print it.

*/

#include <stdio.h>

int checkIfPrime(int n)
{
    if (n <= 1)
        return 0;
    if (n <= 3)
        return 1;

    if (n % 2 == 0)
        return 0;

    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int primeCount(int arr[], int size)
{
    int primeCount = 0;

    for (int i = 0; i < size; i++)
        if (checkIfPrime(arr[i]))
            primeCount++;

    return primeCount;
}

int main()
{

    int size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter array values:\n");
    int arr[size];

    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("Number of prime numbers: %d", primeCount(arr, size));

    return 0;
}