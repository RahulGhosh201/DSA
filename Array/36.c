// next bigger element in the array
#include <stdio.h>

int soln(int *arr, int n, int x)
{
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x)
        {
            return arr[i];
        }
    }
    return ans;
}

int main()
{
    int arr[] = {5, 3, 10, 9, 6, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Next bigger elements array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", soln(arr, n, arr[i]));
    }
}