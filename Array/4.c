// copied into another arr
#include <stdio.h>

void soln(int arr[], int n, int copied[])
{
    for (int i = 0; i < n; i++)
    {
        copied[i] = arr[i];
    }
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int copied[n];
    soln(arr, n, copied);
    printf("Copied elements: ");
    printArr(copied, n);
    return 0;
}