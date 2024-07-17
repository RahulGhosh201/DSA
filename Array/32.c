// rotate an array by n positions
#include <stdio.h>

void reverse(int *arr, int l, int r)
{
    while (l < r)
    {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }
}

void soln(int *arr, int n, int k)
{
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    reverse(arr, 0, n - 1);
}

void printArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// void soln(int *arr, int n, int key, int *ans)
// {
//     int k = 0;
//     for (int i = key; i < n; i++)
//     {
//         ans[k] = arr[i];
//         k++;
//     }
//     for (int i = 0; i < key; i++)
//     {
//         ans[k] = arr[i];
//         k++;
//     }
// }

int main()
{
    int arr[] = {0, 3, 6, 9, 12, 14, 18, 20, 22, 25, 27};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 4;
    int ans[n];
    printf("Original array: \n");
    printArr(arr, n);
    // soln(arr, n, key, ans);
    soln(arr, n, key);
    printf("Rotated array: \n");
    printArr(arr, n);
    // printArr(ans, n);
    return 0;
}