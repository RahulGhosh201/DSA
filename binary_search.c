#include<stdio.h>

int binarySearch(int arr[],int element,int size){
    int low=0,mid,high=size-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==element){
            return mid;
        }
        if(arr[mid]<element){
            low=(mid+1);
        }
        else{
            high=(mid-1);
        }
    }
    return-1;
}

int main(){
    int arr[]={10,20,30,40,50};
    int n;
    int size=sizeof(arr)/sizeof(int);
    printf("Enter the element to be searched:\n");
    scanf("%d",&n);
    int flag=binarySearch(arr,n,size);
    if(flag==-1){
        printf("Element %d was not found in the array\n",n);
    }
    else{
        printf("Element %d was found at position: %d\n",n,flag);
    }
    return 0;
}