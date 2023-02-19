#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void traversal(struct Node *head){
    struct Node *p=head;
    do{
        printf("Element: %d\n",p->data);
        p=p->next;
    }while(p!=head);
}

void ElementSearch(struct Node *head,int key){
    struct Node *p=head;
    while(p!=NULL){
        if(p->data==key){
           printf("Element found in the linked list\n");
           return;
        }
        p=p->next;
    }
    printf("Element not found in the linked list\n");
}

struct Node *insertAtFirst(struct Node *head,int data){
    struct Node *p=(struct Node *)malloc(sizeof(struct Node));
    p->data=data;
    struct Node *q=head->next;
    while(q->next!=head){
        q=q->next;
    }
    q->next=p;
    p->next=head;
    return p;
}

struct Node *InsertInBW(struct Node *head,int data,int index){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node *p=head; 
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;

}

struct Node *InsertAtEnd(struct Node *head,int data){
     struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node *p=head; 
    while(p->next!=head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    return head;
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
    fifth->next=head;//cause it's a circular linked list

    printf("Circular Linked List before insertion:\n");
    traversal(head);
    printf("Circular Linked List after insertion:\n");
    // head=insertAtFirst(head,5);
    // head=InsertInBW(head,5,3);
    head=InsertAtEnd(head,5);
    traversal(head);
    ElementSearch(head,20);
    return 0;
}