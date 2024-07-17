// product of an array such that product is equal to the product of all the elements of arr[] except arr[i].
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
    int mul = 1;
    for (int i = 0; i < n; i++)
    {
        mul *= arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = mul / arr[i];
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Before operation: ");
    printArr(arr, n);
    soln(arr, n);
    printf("After operation: ");
    printArr(arr, n);
    return 0;
}