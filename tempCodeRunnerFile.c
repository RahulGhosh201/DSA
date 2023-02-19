int readGraph(){
    File *fp;
    fp=fopen("abc.txt","r");
    if(fp==NULL){
        printf("File Does not Exist\n");
        return 0;
    }
    int n;
    printf("Enter the number of vertices in the graph:\n");
    fscanf(fp,"%d",&n);
    int i,j,arr[10][10];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            fscanf(fp,"%d",&arr[i][j]);
        }
    }
    int i,j,arr[10][10];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%3d\t",arr[i][j]);
        }printf("\n");
    }
    return 0;
}

int main(){
    readGraph();
    return 0;
}