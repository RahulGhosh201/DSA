// majority element
#include <stdio.h>

#define MAX 100
int soln(int *arr, int n)
{
    int freq[MAX] = {0};
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
        for (int i = 0; i < n; i++)
        {
            if (freq[arr[i]] > n / 2)
            {
                return arr[i];
            }
        }
    }
}

int main()
{
    int arr[] = {1, 3, 3, 5, 4, 3, 2, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Mjority element: %d", soln(arr, n));
}