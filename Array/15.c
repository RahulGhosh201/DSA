// second largest element and second smallest element
#include <stdio.h>

int soln1(int *arr, int n)
{
    int max1 = arr[0], max2 = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max1)
        {
            max1 = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max2 && max1 != arr[i])
        {
            max2 = arr[i];
        }
    }
    return max2;
}

int soln2(int arr[], int n)
{
    int min1 = arr[0], min2 = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min1)
        {
            min1 = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min2 && min1 != arr[i])
        {
            min2 = arr[i];
        }
    }
    return min2;
}

int main()
{
    int arr[] = {5, 1, 2, 10, 15, 13, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Second largest element: %d\n", soln1(arr, n));
    printf("Second smallest element: %d\n", soln2(arr, n));
    return 0;
}