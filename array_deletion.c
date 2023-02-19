#include<stdio.h>

void display(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
}

int deletion(int arr[],int position,int size,int capacity){
    if(position>capacity){
        return -1;
    }
    for(int i=position;i<size-1;i++){
      arr[i]=arr[i+1];
    }
    return 1;
}

int main(){
    int arr[100],n,pos;
    printf("Enter no of elements:");
    scanf("%d",&n);
    printf("Enter elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Elements of the array before deletion:\n");
    display(arr,n);
    printf("Enter the position to be deleted of the array:\n");
    scanf("%d",&pos);
    printf("Elements of the array after deletion:\n");
    int flag=deletion(arr,pos,n,5);
    n-=1;
    if(flag==1){
        display(arr,n);
    }
    else{
        printf("Deletion failed");
    }
    return 0;
}