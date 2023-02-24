#include<stdio.h>

int ternarySearch(int arr[],int low,int high,int key){
    int mid1,mid2;
    if(high>=low){
        mid1=low+(high-low)/3;
        mid2=high-(high-low)/3;
    }
    if(arr[mid1]==key)
        return mid1;
    if(arr[mid2]==key)
        return mid2;
    if(key<arr[mid1])
        return ternarySearch(arr,low,mid1-1,key);
    else if(key>arr[mid2])
        return ternarySearch(arr,mid2+1,high,key);
    else
        return ternarySearch(arr,mid1+1,mid2-1,key);

    return -1;
}

int main(){
    int arr[]={10,20,30,40,50,60};
    int key=50;
    int size=sizeof(arr)/sizeof(int);
    int low=0;
    int high=size-1;
    int search=ternarySearch(arr,low,high,key);
    if(search<0){
        printf("%d element not found in the Given array\n",key);
    }
    else{
        printf("%d element found in the %d index of the given array\n",key,search);
    }
    return 0;
}