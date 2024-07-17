// two elements whoose sum id closest to zero
#include <stdio.h>
#include <stdlib.h>

void soln(int *arr, int n)
{
    int a = arr[0];
    int b = arr[1];
    int temp = a + b;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = arr[i] + arr[j];
            if (abs(sum) < abs(temp))
            {
                temp = sum;
                a = arr[i];
                b = arr[j];
            }
        }
    }
    printf("And: %d,%d", a, b);
}

int main()
{
    int arr[] = {38, 44, 63, -51, -35, 19, 84, -69, 4, -46};
    int n = sizeof(arr) / sizeof(arr[0]);
    soln(arr, n);
    return 0;
}