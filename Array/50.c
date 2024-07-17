// replace every element with the greatest element on its right side
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
    int max = arr[n - 1];
    arr[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        int temp = arr[i];
        arr[i] = max;
        if (max < temp)
        {
            max = temp;
        }
    }
}

int main()
{
    int arr[] = {7, 5, 8, 9, 6, 8, 5, 7, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Before operation: ");
    printArr(arr, n);
    soln(arr, n);
    printf("After operation: ");
    printArr(arr, n);
    return 0;
}