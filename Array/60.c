// unique elements of an unsorted array
#include <stdio.h>

void soln(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
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
        if (freq[arr[i]] >= 1)
        {
            printf("%d ", arr[i]);
            freq[arr[i]] = 0;
        }
    }
}

int main()
{
    int arr[] = {1, 5, 8, 5, 7, 3, 2, 4, 1, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    soln(arr, n);
    return 0;
}