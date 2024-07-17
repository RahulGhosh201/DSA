// even and odd
#include <stdio.h>

int isEven(int x)
{
    if (x % 2 == 0)
    {
        return 1;
    }
    return 0;
}

int isOdd(int x)
{
    if (x % 2 != 0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("The even elements are: ");
    for (int i = 0; i < n; i++)
    {
        if (isEven(arr[i]))
        {
            printf("%d ", arr[i]);
        }
    }
    printf("The odd elements are: ");
    for (int i = 0; i < n; i++)
    {
        if (isOdd(arr[i]))
        {
            printf("%d ", arr[i]);
        }
    }
}