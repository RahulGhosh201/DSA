// qsort() in ascending and descending order
#include <stdio.h>
#include <stdlib.h>

int compareAsc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int compareDesc(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {5, 1, 2, 10, 15, 13, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Before sorting: ");
    printArr(arr, n);
    qsort(arr, n, sizeof(int), compareAsc);
    printf("After sorting in ascending order: ");
    printArr(arr, n);
    printf("After sorting in descending order: ");
    qsort(arr, n, sizeof(int), compareDesc);
    printArr(arr, n);
    return 0;
}