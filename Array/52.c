// count the number of inversions
#include <stdio.h>

int soln(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                ans++;
            }
        }
    }
    return ans;
}

int main()
{
    int arr[] = {1, 9, 6, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = soln(arr, n);
    printf("Ans: %d", ans);
    return 0;
}