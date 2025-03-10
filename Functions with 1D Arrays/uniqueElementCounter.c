#include <stdio.h>
#define OFFSET 100
#define TABLE_SIZE (200 + OFFSET)

int uniqueElementCount(int arr[], int size)
{
    int uniqueElementCount = 0;
    int hashSet[TABLE_SIZE] = {0};

    for (int j = 0; j < size; j++)
    {
        int index = arr[j] + OFFSET;
        if (index >= 0 && index < TABLE_SIZE)
        {
            hashSet[index]++;
        }
    }

    for (int k = 0; k < TABLE_SIZE; k++)
    {
        if (hashSet[k] == 1)
            uniqueElementCount++;
    }

    return uniqueElementCount;
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

    printf("Number of unique elements: %d", uniqueElementCount(arr, size));
}