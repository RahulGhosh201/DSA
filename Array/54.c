// maximum sum such that no two elements are adjacent.
#include <stdio.h>

int soln(int arr[], int n)
{
    int sumO = 0, sumE = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sumE += arr[i];
        }
        else
        {
            sumO += arr[i];
        }
    }
    if (sumO > sumE)
    {
        return sumO;
    }
    else
    {
        return sumE;
    }
}

int main()
{
    int arr[] = {1, 3, 5, 9, 7, 10, 1, 10, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = soln(arr, n);
    printf("Ans: %d", ans);
    return 0;
}