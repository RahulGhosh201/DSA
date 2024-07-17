// max and min
#include <stdio.h>

void soln(int arr[], int n, int *max, int *min)
{
    *max = arr[0];
    *min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > *max)
        {
            *max = arr[i];
        }
        if (arr[i] < *min)
        {
            *min = arr[i];
        }
    }
}

int main()
{
    int arr[] = {45, 30, 65, 90, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max, min;
    soln(arr, n, &max, &min);
    printf("Max: %d, Min: %d", max, min);
    return 0;
}