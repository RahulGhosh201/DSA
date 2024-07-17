// missing smallest element
#include <stdio.h>

int max(int *arr, int n)
{
    int ans = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > ans)
        {
            ans = arr[i];
        }
    }
    return ans;
}

int min(int *arr, int n)
{
    int ans = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < ans)
        {
            ans = arr[i];
        }
    }
    return ans;
}

int idx(int *arr, int n, int x)
{
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            ans = i;
        }
    }
    return ans;
}

int soln(int *arr, int n)
{
    int maxi = max(arr, n);
    int mini = min(arr, n);

    for (int i = mini; i < maxi; i++)
    {
        if (idx(arr, n, i) == -1)
        {
            return i;
        }
    }
}

int main()
{
    int arr[] = {0, 1, 3, 4, 5, 6, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Missing smallest element: %d", soln(arr, n));
    return 0;
}