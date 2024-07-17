// duplicate elements
#include <stdio.h>

#define MAX 100
int soln(int arr[], int n)
{
    int cnt = 0;
    int freq[MAX] = {0};
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (freq[arr[i]] >= 2)
        {
            cnt++;
            freq[arr[i]] = 0;
        }
    }
    return cnt;
}

int main()
{
    int arr[] = {1, 2, 5, 2, 3, 1, 10, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("No of duplicate elements: %d", soln(arr, n));
    return 0;
}