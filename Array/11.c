// bubble sort
#include <stdio.h>

// void sorting(int *arr, int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

void merge(int *arr, int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + i + 1];
    }
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            arr[k] = a[i];
            i++;
        }
        else
        {
            arr[k] = b[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
}

void sorting(int *arr, int l, int r)
{
    if (l < r)
    {
        int mid = l + (r - l) / 2;
        sorting(arr, l, mid);
        sorting(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = {2, 8, 5, 6, 7, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Before sorting: ");
    printArr(arr, n);
    sorting(arr, 0, n - 1);
    printf("After sorting: ");
    printArr(arr, n);
    return 0;
}