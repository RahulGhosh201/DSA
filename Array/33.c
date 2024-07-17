// find ceiling in a sorted array
#include <stdio.h>

int soln(int *arr, int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x)
        {
            return arr[i];
        }
    }
}

int main()
{
    int arr[] = {1, 3, 4, 7, 8, 9, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;
    printf("Ceiling of %d is %d", x, soln(arr, n, x));
    return 0;
}