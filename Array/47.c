// subset or not
#include <stdio.h>

int soln(int a[], int b[], int m, int n)
{
    int maxA = a[0];
    for (int i = 0; i < m; i++)
    {
        if (a[i] > maxA)
        {
            maxA = a[i];
        }
    }
    int freqA[maxA + 1];
    for (int i = 0; i <= maxA; i++)
    {
        freqA[i] = 0;
    }
    for (int i = 0; i < m; i++)
    {
        freqA[a[i]]++;
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (freqA[b[i]] > 0)
        {
            cnt++;
        }
    }
    if (cnt == n)
        return 1;
    else
        return 0;
}

int main()
{
    int a[] = {4, 8, 7, 11, 6, 9, 5, 0, 2};
    int b[] = {5, 4, 2, 0, 6};
    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);
    if (soln(a, b, m, n))
    {
        printf("Second array is the subset of the first array.");
    }
    else
    {
        printf("Second array is not the subset of the first array.");
    }
    return 0;
}