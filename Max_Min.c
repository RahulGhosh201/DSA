#include<stdio.h>

void Max_Min(int arr[],int i, int j,int max,int min){
    int mid,max1,min1;
    if(i==j){
        max=arr[i];
        min=arr[i];
    }
    else if(i==j-1){
        if(arr[i]>arr[j]){
        max=arr[i];
        min=arr[j];
        }
        else{
        max=arr[j];
        min=arr[i];
        }
    }
    else{
        mid=(i+j)/2;
        Max_Min(arr,i,mid,max,min);
        Max_Min(arr,mid+1,j,max1,min1);
        if(max<max1)
            max=max1;
        if(min<min1)
            min=min1;
    }
}

int main(){
    int arr[10];
    int size;
    int i=0;
    int max=0,min=0;
    printf("Enter the no of elements present in the array:\n");
    scanf("%d",&size);
    int j=size-1;
    printf("Enter the elements of the array:\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    //int max =arr[0] ;
    //int min = arr[0];
    Max_Min(arr,i,j,max,min);
    printf ("Maximum element in an array : %d\n", max);
    printf ("Minimum element in an array : %d\n", min);
    return 0;
}