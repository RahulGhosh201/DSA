// transpose of a matrix
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void soln(int arr[][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = i + 1; j < cols; j++)
        {
            swap(&arr[i][j], &arr[j][i]);
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
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);
    printf("Original matrix: ");
    printf("\n");
    printMatrix(arr, rows, cols);
    soln(arr, rows, cols);
    printf("Transposed matrix: ");
    printf("\n");
    printMatrix(arr, rows, cols);
}

// 12
// 34

// 13
// 24
