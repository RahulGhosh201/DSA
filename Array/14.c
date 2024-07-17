// deletion of element in an array given position
#include <stdio.h>

void soln(int *arr, int n, int pos)
{
    for (int i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
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
    int pos = 0;
    printf("Enter pos: ");
    scanf("%d", &pos);
    printf("Before deletion: ");
    printArr(arr, n);
    soln(arr, n, pos);
    printf("After deletion: ");
    printArr(arr, n - 1);
    return 0;
}