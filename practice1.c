#include<stdio.h>

void array_traversal(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
}

int array_insertion(int arr[],int size,int data,int index){
    if(index>=size){
        return -1;
    }
    for(int i=(size-1);i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=data;
    return 1;
}

int array_deletion(int arr[],int size,int index){
    if(index>=size){
        return -1;
    }
    for(int i=index;i<(size-1);i++){
        arr[i]=arr[i+1];
    }
    return 1;
}

int linear_search(int arr[],int key,int size){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int binary_search(int arr[],int size,int data){
    int mid,low=0,high=(size-1);
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==data){
            return mid;
        }
        if(arr[mid]<data){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[]={10,20,30,40,50,60};
    int a,b,c,d;
    int size=sizeof(arr)/sizeof(int);
    // printf("Enter the element to be inserted:\n");
    // scanf("%d",&a);
    // printf("Enter the index at which the element to be inserted:\n");
    // scanf("%d",&b);
    printf("Elements of the array are:\n");
    array_traversal(arr,size);
    // printf("Elements of the array after insertion are:\n");
    // int flag=array_insertion(arr,size,a,b);
    // size+=1;
    // if(flag==1){
    //      array_traversal(arr,size);
    // }
    // else{
    //     printf("\nError in inserting element in array\n");
    // }
    // printf("Enter the index of the element to be deleted:\n");
    // scanf("%d",&c);
    // printf("Elements of the array after deletion are:\n");
    // int flag1=array_deletion(arr,size,c);
    // size-=1;
    // if(flag==1){
    //      array_traversal(arr,size);
    // }
    // else{
    //     printf("\nError in deleting element in array\n");
    // }
    printf("Enter the element to search:\n");
    scanf("%d",&d);
    // int flag2=linear_search(arr,d,size);
    int flag2=binary_search(arr,size,d);
    if(flag2==-1){
        printf("Element %d not found in the array\n",d);
    }
    else{
        printf("Element: %d found in the array at index: %d\n",d,flag2);
    }
    return 0;
}