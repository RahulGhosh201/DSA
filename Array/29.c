// missing number
#include <stdio.h>

int maxi(int *arr, int n)
{
    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int soln(int *arr, int n)
{
    int max = maxi(arr, n);
    int temp = (max * (max + 1)) / 2;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return temp - sum;
}

int main()
{
    int arr[] = {1, 3, 4, 2, 7, 6, 9, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Ans: %d", soln(arr, n));
    return 0;
}