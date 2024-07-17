// determinant of a matrix
#include <stdio.h>

int soln(int arr[][3])
{
    int sum = 0;
    sum += (arr[0][0] * ((arr[1][1] * arr[2][2]) - (arr[1][2] * arr[2][1]))) + (arr[0][1] * ((arr[1][0] * arr[2][2]) - (arr[1][2] * arr[0][2]))) + (arr[0][2] * ((arr[1][0] * arr[1][2]) - (arr[1][1] * arr[0][2])));
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
    int arr[3][3] = {{1, 0, -1},
                     {0, 0, 1},
                     {-1, -1, 0}};
    printf("Original matrix:\n");
    printMatrix(arr, 3, 3);
    printf("Determinant of the matrix:%d", soln(arr));
    return 0;
}