#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void traversal(struct Node *ptr){
    while(ptr!=NULL){
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct Node *deleteAtFirst(struct Node *head){
    struct Node *p=head;
    p->next=head->next;
    head=head->next;
    free(p);
    return head;
}

struct Node *deleteInBetween(struct Node *head,int index){
    struct Node *p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    struct Node *q=p->next;
    p->next=q->next;
    free(q);
    return head;
}

struct Node *deleteAtEnd(struct Node *head){
    struct Node *p=head;
    struct Node *q=head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}

struct Node *deleteGivenValue(struct Node *head,int data){
    struct Node *p=head;
    struct Node *q=head->next;
    while(q->data!=data && q->next!=NULL){
        p=p->next;
        q=q->next;
    } 
    if(q->data==data)
    {
        p->next=q->next;
        free(q);
        return head;
    }

}
int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;

    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));
    fifth=(struct Node *)malloc(sizeof(struct Node));

    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=fourth;

    fourth->data=40;
    fourth->next=fifth;

    fifth->data=50;
    fifth->next=NULL;

    printf("Elements in the list before deletion:\n");
    traversal(head);
    printf("Elements in the list after deletion:\n");
    // head=deleteAtFirst(head);
    // head=deleteInBetween(head,3);
    // head=deleteAtEnd(head);
    head=deleteGivenValue(head,10);
    traversal(head);
    return 0;
}