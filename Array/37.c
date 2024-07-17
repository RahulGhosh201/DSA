// repeating elements
#include <stdio.h>

#define MAX 100

void soln(int *arr, int n)
{
    int freq[MAX] = {0};
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (freq[arr[i]] > 1)
        {
            printf("%d ", arr[i]);
            freq[arr[i]] = 1;
        }
    }
}

int main()
{
    int arr[] = {2, 7, 4, 7, 8, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("The repeating elements are: ");
    soln(arr, n);
    return 0;
}