#include <stdio.h>

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n",arr[i]);
    }
}

int insertion(int arr[],int size,int pos,int element,int capacity){
    if(size>=capacity){
        return -1;
    }
    for(int i=(size-1);i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=element;
    return 1;
}

    int main()
{
    int arr[100], n, pos, element;
    printf("Enter no of elments in the array:\n");
    scanf("%d", &n);
    printf("Enter the elements in the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position of the element to be inserted:\n");
    scanf("%d", &pos);
    printf("Enter the element to be inserted:\n");
    scanf("%d", &element);
    printf("Elements in the array before insertion:\n");
    display(arr, n);
    printf("Elements in the array after insertion:\n");
    int flag=insertion(arr, n, pos, element,5);
    n+=1;
    if(flag==1){
        display(arr,n);
    }
    else{
        printf("Insertion failed");
    }
   
    return 0;
}