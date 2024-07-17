// unique elements
#include <stdio.h>

#define MAX 100
void soln(int arr[], int n)
{
    int freq[MAX] = {0};
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (freq[arr[i]] == 1)
        {
            printf("%d ", arr[i]);
        }
    }
}

int main()
{
    int arr[] = {1, 2, 5, 2, 3, 1, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    soln(arr, n);
    return 0;
}