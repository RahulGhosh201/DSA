// sum of arr
#include <stdio.h>

int sum(int arr[], int n)
{
    int add = 0;
    for (int i = 0; i < n; i++)
    {
        add += arr[i];
    }
    return add;
}

int main()
{
    int arr[] = {2, 5, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Sum of all the array elements: %d", sum(arr, n));
    return 0;
}