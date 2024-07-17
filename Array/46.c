// sort012
#include <stdio.h>

void printArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void soln(int *arr, int n)
{
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cnt0++;
        }
        else if (arr[i] == 1)
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
    }
    int k = 0;
    for (int i = 0; i < cnt0; i++)
    {
        arr[k++] = 0;
    }
    for (int i = cnt0; i < cnt0 + cnt1; i++)
    {
        arr[k++] = 1;
    }
    for (int i = cnt0 + cnt1; i < cnt0 + cnt1 + cnt2; i++)
    {
        arr[k++] = 2;
    }
}

int main()
{
    int arr[] = {0, 1, 2, 2, 1, 0, 0, 2, 0, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Before sorting: ");
    printArr(arr, n);
    soln(arr, n);
    printf("After sorting: ");
    printArr(arr, n);
    return 0;
}