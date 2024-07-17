// subarray with given sum
#include <stdio.h>

void print(int *arr, int i, int j)
{
    printf("[%d..%d] -- { ", i, j);
    for (int k = i; k <= j; k++)
    {
        printf("%d ", arr[k]);
    }
    printf("}\n");
}

void soln(int *arr, int n, int sum)
{
    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        for (int j = i; j < n; j++)
        {
            temp += arr[j];
            if (temp == sum)
            {
                print(arr, i, j);
            }
        }
    }
}

int main()
{
    int arr[] = {3, 4, -7, 1, 3, 3, 1, -4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 7;
    soln(arr, n, sum);
    return 0;
}