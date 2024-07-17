// add and substract two matrices
#include <stdio.h>

void add(int a[][3], int b[][3])
{
    int c[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printMatrix(c);
}

void sub(int a[][3], int b[][3])
{
    int c[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
    printMatrix(c);
}

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
    int a[3][3];
    printf("Enter elements in the first 2d array:");
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Element[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int b[3][3];
    printf("Enter elements in the second 2d array:");
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Element[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("First matrix:\n");
    printMatrix(a);

    printf("Second matrix:\n");
    printMatrix(b);

    printf("Addition of the matrices:\n");
    add(a, b);

    printf("Substraction of the matrices:\n");
    sub(a, b);

    return 0;
}