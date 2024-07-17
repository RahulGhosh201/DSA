#include <stdio.h>
#include <stdlib.h>

void printArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void combineTwoSortedArray(int *a, int *b, int *c, int n, int m)
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (a[i] <= b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }

    while (i < n)
    {
        c[k++] = a[i++];
    }

    while (j < m)
    {
        c[k++] = b[j++];
    }
}

int median(int *arr, int n)
{
    if (n % 2 == 0)
    {
        return (arr[n / 2] + arr[n / 2 - 1]) / 2;
    }
    else
    {
        return arr[n / 2];
    }
}

int main()
{
    int n, m;
    printf("Enter n: ");
    scanf("%d", &n);
    int *a = (int *)malloc(n * sizeof(int));
    int *b = (int *)malloc(n * sizeof(int));

    if (a == NULL || b == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter elements in the first array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter elements in the second array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    m = n;
    int *c = (int *)malloc((n + m) * sizeof(int));

    if (c == NULL)
    {
        printf("Memory allocation failed\n");
        free(a);
        free(b);
        return 1;
    }

    combineTwoSortedArray(a, b, c, n, m);
    printf("Combined array: ");
    printArr(c, n + m);

    int ans = median(c, n + m);
    printf("Median: %d\n", ans);

    // Free the allocated memory
    free(a);
    free(b);
    free(c);

    return 0;
}
