// reverse an array
#include <stdio.h>

void reversal(int *arr, int n)
{
    int l = 0;
    int r = n - 1;
    while (l < r)
    {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }
}

void printArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[4] = {2, 5, 7, 8};
    printf("Before reversal: ");
    printArr(arr, 4);
    reversal(arr, 4);
    printf("After reversal: ");
    printArr(arr, 4);
    return 0;
}