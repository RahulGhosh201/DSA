#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int vertex;
    struct Node *next;
}; // building a custom node who can store a vertex and the address of the next node

struct Node *head[10] = {NULL}; // an array containg head of each node initialied as Null value

int n; // globally declared n

void insertList(int i, int j)
{
    struct Node *curr = (struct Node *)malloc(sizeof(struct Node));
    curr->next = NULL;
    curr->vertex = j;
    if (head[i] == NULL)
    {
        head[i] = curr;
        return;
    }
    else
    {
        struct Node *temp = head[i];
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = curr;
        
    }
    return;
}

void makeList()
{
    FILE *fp;
    fp = fopen("abcd.txt","r");
    if (fp == NULL)
    {
        printf("Open Failed\n");
        return;
    }
    fscanf(fp, "%d", &n);
    int i, j, num;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            fscanf(fp, "%d", &num);
            if (num == 1)
                insertList(i,j);
        }
    }
    fclose(fp);
    return;
}

void DisplayList()
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (head[i] != NULL)
        {
            printf("Adjacent of %c::", i + 'A');
            struct Node *temp = head[i];
            while (temp != NULL)
            {
                printf("%4c", temp->vertex + 'A');
                temp = temp->next;
            }
            printf("\n");
        }
    }
}

int main()
{
makeList();
DisplayList();

    return 0;
}