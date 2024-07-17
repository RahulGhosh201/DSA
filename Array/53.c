// search an element in a row wise and column wise sorted matrix
#include <stdio.h>

void soln(int arr[][4], int n, int v)
{
    int i = 0, j = n - 1;
    while (i < n && j >= 0)
    {
        if (arr[i][j] == v)
        {
            printf("%d, %d", i, j);
            return;
        }
        if (arr[i][j] < v)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    printf("Not found");
}

int main()
{
    int arr[4][4] = {
        {15, 23, 31, 39},
        {18, 26, 36, 43},
        {25, 28, 37, 48},
        {30, 34, 39, 50}};
    int v = 37;
    soln(arr, 4, v);
    return 0;
}