// frequency
#include <stdio.h>

#define MAX 100
void soln(int arr[], int n)
{
    int freq[MAX] = {0};
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    printf("Frequency of elements in the array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d->%d\n", arr[i], freq[arr[i]]);
    }
}

int main()
{
    int arr[] = {1, 2, 1, 3, 5, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    soln(arr, n);
    return 0;
}