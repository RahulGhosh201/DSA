#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

void printUniqueElements(int arr[], int n)
{
    qsort(arr, n, sizeof(int), compare);

    printf("Unique elements in the array are: ");
    for (int i = 0; i < n; i++)
    {
        if ((i == 0 || arr[i] != arr[i - 1]) && (i == n - 1 || arr[i] != arr[i + 1]))
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 2, 3, 2, 4, 5, 6, 5, 7, 8, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    printUniqueElements(arr, n);

    return 0;
}
