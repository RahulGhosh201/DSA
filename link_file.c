#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    fp=fopen("abc.txt","r");
    if(fp=NULL){
        printf("File does not exist\n");
        return 0;
    }
    int a,b;
    fscanf(fp,"%d",&a);
    fscanf(fp,"%d",&b);
    printf("%d\n",a+b);
    fclose(fp);
    return 0;
}