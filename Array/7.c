// merge two array
#include <stdio.h>

void reversal(int arr[], int n)
{
    int l = 0, r = n - 1;
    while (l < r)
    {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }
}

void soln(int a[], int b[], int c[], int n1, int n2, int m)
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
    reversal(c, m);
}

void printArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int a[] = {1, 2, 3};
    int n1 = sizeof(a) / sizeof(a[0]);
    int b[] = {1, 2, 3};
    int n2 = sizeof(b) / sizeof(b[0]);
    int c[n1 + n2];
    printf("Elements in the first array: ");
    printArr(a, n1);
    printf("Elements in the second array: ");
    printArr(b, n2);
    soln(a, b, c, n1, n2, n1 + n2);
    printf("Elements in the combined array: ");
    printArr(c, n1 + n2);
    return 0;
}