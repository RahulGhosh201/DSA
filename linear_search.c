#include <stdio.h>

int linearSearch(int arr[], int element, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {10, 20, 3, 50, 3, 40};
    int size = sizeof(arr) / sizeof(int);
    int element;
    printf("Enter the element to be searched:");
    scanf("%d", &element);
    int flag = linearSearch(arr, element, size);
    if (flag == -1)
    {
        printf("Element %d not found in the array\n", element);
    }
    else
    {
        printf("Element %d found at %d position", element, flag);
    }
    return 0;
}