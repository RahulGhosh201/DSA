// sum of the upper and lower triangular elements
#include <stdio.h>

int soln1(int arr[][3], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j > i)
            {
                sum += arr[i][j];
            }
        }
    }
    return sum;
}

int soln2(int arr[][3], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < i)
            {
                sum += arr[i][j];
            }
        }
    }
    return sum;
}

int main()
{
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
    int n = 3;
    int ans1 = soln1(arr, n);
    printf("Ans1: %d", ans1);
    int ans2 = soln2(arr, n);
    printf("Ans1: %d", ans2);
    return 0;
}