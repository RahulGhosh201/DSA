// floor and ceiling
#include <stdio.h>

int flor(int *arr, int n, int x)
{
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= x)
        {
            ans = arr[i];
        }
    }
    return ans;
}

int ceiling(int *arr, int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= x)
        {
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 5, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i <= 10; i++)
    {
        printf("Number: %d ceiling is: %d, floor is: %d\n", i, ceiling(arr, n, i), flor(arr, n, i));
    }
    return 0;
}