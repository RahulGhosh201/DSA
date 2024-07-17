// sum of rows and columns
#include <stdio.h>

void soln(int arr[][3], int *rowSum, int *colSum)
{
    for (int i = 0; i < 3; i++)
    {
        rowSum[i] = 0;
        for (int j = 0; j < 3; j++)
        {
            rowSum[i] += arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        colSum[i] = 0;
        for (int j = 0; j < 3; j++)
        {
            colSum[i] += arr[j][i];
        }
    }
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
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
    printf("Original matrix:\n");
    printMatrix(arr, 3, 3);
    int rowSum[3], colSum[3];
    soln(arr, rowSum, colSum);
    printf("Sum of rows are: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", rowSum[i]);
    }
    printf("\n");
    printf("Sum of columns are: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", colSum[i]);
    }
    printf("\n");
}

// 00 01 02
// 10 11 12
// 20 21 22