// merge two sorted arrays
#include <stdio.h>

void printArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void mix(int *a, int *b, int *c, int n1, int n2)
{
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        c[k] = a[i];
        k++;
        i++;
    }

    while (j < n2)
    {
        c[k] = b[j];
        k++;
        j++;
    }
}

int main()
{
    int a[] = {10, 12, 14, 16, 18, 20, 22};
    int b[] = {11, 13, 15, 17, 19, 21};
    int n1 = sizeof(a) / sizeof(a[0]);
    int n2 = sizeof(b) / sizeof(b[0]);
    int c[n1 + n2];
    mix(a, b, c, n1, n2);
    printf("First array: \n");
    printArr(a, n1);
    printf("Second array: \n");
    printArr(b, n2);
    printf("Mixed array: \n");
    printArr(c, n1 + n2);
    return 0;
}