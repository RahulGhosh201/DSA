// update every array element with multiplication of previous and next numbers in array.
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
    int temp[n];
    int temp1 = arr[1];
    int temp2 = arr[n - 2];
    for (int i = 1; i < n - 1; i++)
    {
        temp[i] = arr[i - 1] * arr[i + 1];
    }
    temp[0] = arr[0] * arr[1];
    temp[n - 1] = arr[n - 1] * arr[n - 2];
    printArr(temp, n);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Before operation: ");
    printArr(arr, n);
    printf("After operation: ");
    soln(arr, n);
    return 0;
}