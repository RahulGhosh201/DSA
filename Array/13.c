// insert values in the arrar(sorted list)
#include <stdio.h>

void soln(int *arr, int n, int key)
{
    int pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (key <= arr[i])
        {
            pos = i;
            break;
        }
    }

    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = key;
}

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {2, 5, 7, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 0;
    printf("Enter key: ");
    scanf("%d", &x);
    printf("Before insertion: ");
    printArr(arr, n);
    soln(arr, n, x);
    printf("After insertion: ");
    printArr(arr, n + 1);
    return 0;
}