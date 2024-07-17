// number occuring odd number of times
#include <stdio.h>

int soln(int *arr, int n)
{
    int freq[n];
    for (int i = 0; i < n; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (freq[arr[i]] % 2 != 0 && arr[i] % 2 != 0)
        {
            return arr[i];
        }
    }
}

int main()
{
    int arr[] = {8, 3, 8, 5, 4, 3, 4, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Ans: %d", soln(arr, n));
    return 0;
}