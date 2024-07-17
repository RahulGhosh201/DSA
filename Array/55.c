// find two numbers that occur an odd number of times in an array.
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
        if ((freq[arr[i]] % 2) != 0)
        {
            printf("%d ", arr[i]);
            freq[arr[i]] = 0;
        }
    }
}

int main()
{
    int arr[] = {6, 7, 3, 6, 8, 7, 6, 8, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    soln(arr, n);
    return 0;
}