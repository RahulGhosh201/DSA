// iterate an array
#include <stdio.h>

void print(int arr[])
{
    printf("Elements in the array are: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[10];
    printf("Enter 10 elements: ");
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("element-%d: ", i);
        scanf("%d", &arr[i]);
    }
    print(arr);
    return 0;
}