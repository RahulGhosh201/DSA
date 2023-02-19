#include <stdio.h>

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int insertion(int arr[], int element, int pos, int size)
{
    if (pos >= size)
    {
        return -1;
    }
    for (int i = (size - 1); i >= pos; i--)//array r last index theke given index obdhi
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = element;//given index e given data store kor6i
    return 1;
}

int deletion(int arr[], int pos, int size)//pos means at which index we want the element to be deleted
{
    if (pos >= size)//index ta array r size r theke boro hoa somvob noy
    {
        return -1;
    }
    for (int i = pos; i < (size - 1); i++)//given index theke array r last index obdhi ja66i
    {
        arr[i] = arr[i + 1];//given index theke start kore baki index r protyek ta r value next index r value r same h66e
    }
    return 1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int element, pos, pos1;
    int size = sizeof(arr) / sizeof(int);
    printf("Elements of the array are:\n");
    display(arr, size);
    printf("Enter the element to insert:\n");
    scanf("%d", &element);
    printf("Enter th position to insert element:\n");
    scanf("%d", &pos);
    printf("Elements of the array before insertion:\n");
    display(arr, size);
    printf("Elements of the array after insertion:\n");
    int flag = insertion(arr, element, pos, size);
    size += 1;
    if (flag == 1)
    {
        display(arr, size);
    }
    else
    {
        printf("Insertion Failed\n");
    }
    printf("Enter the pos of the element to be deleted:\n");
    scanf("%d", &pos1);
    printf("Elements of the array after deletion:\n");
    int flag1 = deletion(arr, pos1, size);
    size -= 1;
    if (flag1 == 1)
    {
        display(arr, size);
    }
    else
    {
        printf("Deletion Failed\n");
    }
    return 0;
}