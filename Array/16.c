// 2d array
#include <stdio.h>

void printMatrix(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int arr[3][3];
    printf("Enter elements in the 2d array:");
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Element[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printMatrix(arr);
    return 0;
}