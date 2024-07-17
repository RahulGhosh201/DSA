// lower and upper triangualr matrix
#include <stdio.h>

void soln1(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j >= i)
            {
                printf("%d ", arr[i][j]);
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

void soln2(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i >= j)
            {
                printf("%d ", arr[i][j]);
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
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
    printf("Upper triangular matrix: \n");
    soln1(arr);
    printf("Lower triangular matrix: \n");
    soln2(arr);
    return 0;
}