#include <stdio.h>
#include <stdlib.h>

int readGraph(){
    FILE *fp;
    fp=fopen("abc.txt","r");
    if(fp==NULL){
        printf("File Does not Exist\n");
        return 0;
    }
    int n;
    printf("Enter the number of vertices in the graph:\n");
    fscanf(fp,"%d",&n);
    int i,j;
    int arr[10][10];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            fscanf(fp,"%d",&arr[i][j]);
        }
    }
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

// struct graph
// {
//     int v;     // v=vertcies
//     int e;     // e=edges
//     int **adj; // this is the adjacency matrix ,double pointer or pointer to the pointer is using because one * holds the first address of the matrix and the second * holds it's ddreaa in the graph structure
// };

// struct graph *adjOfMatrix(struct graph *g )
// { // it's going to return the address of the adjacency matrix
//     int i,j,k;
//     g= (struct graph *)malloc(sizeof(struct graph)); // memory allocation for the structure of the graph & in g it returns the address of it's first address
//     if (g == NULL)
//     { // means the graph structure is empty
//         printf("Memory allocation failed\n");
//         return 0;
//     }
//     printf("Enter the node numbers for an edge:\n");

//     for (k = 0; k < g->e; k++)
//     {
//         scanf("%d%d", &i, &j);
//         g->adj[i][j] = 1;
//         g->adj[j][i] = 1;
//     }
//     return g;
// }

// int main(){
//     struct graph *g;
//     int i,j;
//      printf("Enter the no of vertices and no of edges\n");
// scanf("%d%d", &g->v, &g->e);
// g->adj = malloc(sizeof(int) * (g->v * g->v)); // memory alloaction for adjacency matrix
// // g->v*g->v cause we have to create a matrix of v*v elements here row & column of the matrix=no of vertices
// printf("........Enter the elements of the matrix........");
// for (i = 0; i < g->v; i++)
// {
//     for (j = 0; j < g->v; j++)
//         g->adj[i][j] = 0;
// } // it will initialize every position of the matrix as 0 element
// g=adjOfMatrix(g);
// printf("The matrix is:\n");
// for (i = 0; i < g->v; i++)
// {
//     for (j = 0; j < g->v; j++){
//         printf("%3d\t",g->adj[i][j]);
//     }printf("\n");
// }

//     return 0;
// }