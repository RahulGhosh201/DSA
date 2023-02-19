#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *previous;
    struct Node *next;
};

void traversalFrontward(struct Node *head){
    struct Node *ptr=head;
    while(ptr!=NULL){
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    }
}

void traversalBackward(struct Node *fifth){
    struct Node *ptr=fifth;
    int i=5;
    while(i!=NULL){
       printf("Element:%d\n",ptr->data);
       ptr=ptr->previous;  
       i--;
    }
}
int main(){
    struct Node *head=(struct Node *)malloc(sizeof(struct Node));
    struct Node *second=(struct Node *)malloc(sizeof(struct Node));
    struct Node *third=(struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth=(struct Node *)malloc(sizeof(struct Node));
    struct Node *fifth=(struct Node *)malloc(sizeof(struct Node));
    
    head->data=10;
    head->previous=NULL;
    head->next=second;

    second->data=20;
    second->previous=head;
    second->next=third;  

    third->data=30;
    third->previous=second;
    third->next=fourth;   

    fourth->data=40;
    fourth->previous=third;
    fourth->next=fifth;

    fifth->data=50;
    fifth->previous=fourth;
    fifth->next=NULL;

    printf("Elements in frontward:\n");
    traversalFrontward(head);

    printf("Elements in Backward:\n");
    traversalBackward(fifth);

    return 0;
}