// maximum repeating number in a given array
#include <stdio.h>

int soln(int arr[], int n)
{
    int ans = 0, result = 0;
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    int freq[max + 1];
    for (int i = 0; i <= max; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    for (int i = 0; i <= max; i++)
    {
        if (freq[i] > ans)
        {
            ans = freq[i];
            result = i;
        }
    }
    return result;
}

int main()
{
    int arr[] = {2, 3, 3, 5, 3, 4, 1, 7, 7, 7, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = soln(arr, n);
    printf("Ans: %d", ans);
    return 0;
}