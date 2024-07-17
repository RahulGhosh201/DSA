// majority element
#include <stdio.h>

int findMax(int *arr, int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int soln(int *arr, int n)
{
    int max = findMax(arr, n);
    int freq[max];
    for (int i = 0; i < max; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (freq[arr[i]] > n / 2)
        {
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    int arr[] = {4, 8, 4, 4, 7, 4, 4, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (soln(arr, n) != -1)
    {
        printf("Majority element: %d", soln(arr, n));
    }
    else
    {
        printf("There is no majority element");
    }
}