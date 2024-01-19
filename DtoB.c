#include<stdio.h>

void DtoB(int n){
    int i;
    int rem;
    int a[10];//we are creating an array to store each remaining value 
    while(n){//while n!=0
        rem=n%2;//we know the binary value is the reminder when the decimal value is divided by 2
        n=n/2;//after division for the next loop n is the divisior by 2
        a[i]=rem;//storing the result in the array
        i++;//for continuing the loop
    }
    for(int j=i-1;j>=0;j--){//loop is going backwards because we know the answer in case of binary is backwarded
        printf("%d",a[j]);//printing the answer
    }
}

int main(){
    int n;
    printf("Enter a decimal Number:\n");
    scanf("%d",&n);
    printf("Binary number of %d decimal number is:",n);
    DtoB(n);
    return 0;
}