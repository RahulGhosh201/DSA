// identity matrix or not
#include <stdio.h>

int soln(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if ((i == j && arr[i][j] != 1) || (i != j && arr[i][j] != 0))
            {
                return 0;
            }
        }
    }
    return 1;
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
    int arr[3][3] = {{1, 0, 0},
                     {0, 1, 0},
                     {0, 0, 1}};
    printf("Original matrix:\n");
    printMatrix(arr, 3, 3);
    if (soln(arr))
    {
        printf("It's an identity matrix");
    }
    else
    {
        printf("It's not an identity matrix");
    }
    return 0;
}