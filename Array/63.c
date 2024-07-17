// maximum element in an array that is first increasing and then decreasing.
#include <stdio.h>

int soln(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if ((mid == 0 || arr[mid] > arr[mid - 1]) && ((mid == n - 1 || arr[mid] > arr[mid + 1])))
        {
            return arr[mid];
        }
        if (mid > 0 && arr[mid] > arr[mid - 1])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
}

int main()
{
    int arr[] = {2, 7, 12, 25, 4, 57, 27, 44};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = soln(arr, n);
    printf("Ans: %d", ans);
    return 0;
}