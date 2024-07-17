// count all distinct pairs for a specific difference.
#include <stdio.h>

int soln(int arr[], int n, int x)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (arr[j] - arr[i] == x)
            {
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{
    int arr[] = {5, 2, 3, 7, 6, 4, 9, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;
    int ans = soln(arr, n, x);
    printf("Ans: %d", ans);
    return 0;
}