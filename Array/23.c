// sparse or not
#include <stdio.h>

int soln(int arr[][3])
{
    int cnt0 = 0;
    int cntNon0 = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == 0)
            {
                cnt0++;
            }
            else
            {
                cntNon0++;
            }
        }
    }
    if (cnt0 > cntNon0)
        return 1;
    else
        return 0;
}

void printMatrix(int arr[][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int arr[3][3] = {{1, 0, -1},
                     {0, 0, 1},
                     {-1, 0, 0}};
    printf("Original matrix:\n");
    printMatrix(arr, 3, 3);
    if (soln(arr))
    {
        printf("It's a sparse matrix");
    }
    else
    {
        printf("It's not a sparse matrix");
    }
    return 0;
}