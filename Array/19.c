// sum of left and right diagonals
#include <stdio.h>

int soln1(int arr[][3])
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
            }
        }
    }
    return sum;
}

int soln2(int arr[][3])
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i + j == 2)
            {
                sum += arr[i][j];
            }
        }
    }
    return sum;
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
    printf("Sum of right diagonals: %d\n", soln1(arr));
    printf("Sum of left diagonals: %d\n", soln2(arr));
    return 0;
}

// 00 01 02
// 10 11 12
// 20 21 22
