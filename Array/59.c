// ind the maximum difference between any two elements such that the larger element appears after the smaller number.

#include <stdio.h>

int soln(int arr[], int n)
{
    int min = arr[0];
    int diff = arr[1] - arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - min > diff)
        {
            diff = arr[i] - min;
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return diff;
}

int main()
{
    int arr[] = {7, 9, 5, 6, 13, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = soln(arr, n);
    printf("Ans: %d", ans);
    return 0;
}