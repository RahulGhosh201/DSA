// smallest positive number missiing from an unsorted array
#include <stdio.h>
#include <stdlib.h>

// int mini(int *arr, int n)
// {
//     int ans = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < ans)
//         {
//             ans = arr[i];
//         }
//     }
//     return ans;
// }

int maxi(int *arr, int n)
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

int compare(void const *a, void const *b)
{
    return *(int *)a - *(int *)b;
}

#define MAX 100

int soln(int *arr, int n)
{
    int max = maxi(arr, n);
    int temp[n];
    int freq[MAX] = {0};
    qsort(arr, n, sizeof(int), compare);
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            temp[k] = arr[i];
            k++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    int ans = 0;
    for (int i = 1; i <= max; i++)
    {
        if (freq[arr[i]] == 0)
        {
            return i;
        }
    }
}

int main()
{
    int arr[] = {3, 1, 4, 10, -5, 15, 2, -10, -20};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Ans: %d", soln(arr, n));
    return 0;
}