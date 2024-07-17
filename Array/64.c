// rearrange the given array so that arr[i] becomes arr[arr[i]].
#include <stdio.h>

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void soln(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] += (arr[arr[i]] % n) * n;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] /= n;
    }
}

int main()
{
    int arr[] = {2, 1, 4, 3, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Before operation: ");
    printArr(arr, n);
    soln(arr, n);
    printf("After operation: ");
    printArr(arr, n);
    return 0;
}