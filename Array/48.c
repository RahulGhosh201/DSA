// move all zeoes to the end
#include <stdio.h>

void printArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

void soln(int *arr, int n)
{
    int nonZeroIndex = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[nonZeroIndex++] = arr[i];
        }
    }
    while (nonZeroIndex < n)
    {
        arr[nonZeroIndex++] = 0;
    }
}

int main()
{
    int a[] = {2, 5, 7, 0, 4, 0, 7, -5, 8, 0};
    int n = sizeof(a) / sizeof(a[0]);
    printf("Before operation: ");
    printArr(a, n);
    soln(a, n);
    printf("After operation: ");
    printArr(a, n);
    return 0;
}