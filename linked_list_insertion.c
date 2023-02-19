#include<stdio.h>
#include<stdlib.h>

struct Node{//creating a custom data type structure
    int data;//in the custom data type there is a integer value
    struct Node *next;//in the custom data type there is a pointer which hold the address of the node's last position 
};

void traversal(struct Node *ptr){//taking the address of head using ptr pointer
    while(ptr!=NULL){//continuing the loop upto NULL i.e. the and of the list   
        printf("ELement:%d\n",ptr->data);//ptr->data shows the data stored in the every node 
        ptr=ptr->next;//after showing head node it goes to second and after that it goes to second as such
    }
}

struct Node *insertAtFirst(struct Node *head,int data){//taking the address of head using head pointer, taking the element as data variable
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));//creating a node named ptr
    ptr->data=data;//storing the data in the ptr node
    ptr->next=head;//connecting the ptr's next pointer with the head pointer
    return ptr;//returning ptr cause now it's the first node of our list//we always have to return the present first node of the list after completing the function
}

struct Node *insertInBetweenTwoNodes(struct Node *head,int data,int index){//insert the given element between two nodes or at the given index
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node *p=head;//head ta k alada kore tule rekhe p ekta pointer nie nilam ja head r representive hisabe kaj korbe
    int i=0;//loop chalanor jnno nilam 
    while(i!=index-1){//j index e store korbo sekhan r age gie thambe
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}

struct Node *insertAtEnd(struct Node *head, int data){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node *p=head;//head ta k alada kore tule rekhe p ekta pointer nie nilam ja head r representive hisabe kaj korbe
    while(p->next!=NULL){//NULL porjonto ja66i cause kono list last r node r next=NULL hy
        p=p->next;//sob noda visit h66e
    }
    p->next=ptr;//ami ptr node ta input korte chai6i tai p ta sob node e visit korar por last e ese tham6i
    ptr->next=NULL;//ptr present e last node tai
    return head;
    
}

struct Node *insertAfterNode(struct Node *head,int data,struct Node *prevNode){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=prevNode->next;
    prevNode->next=ptr;
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
    fifth->next=NULL;

    printf("List before insertion:\n");
    traversal(head);
    printf("\nList after insertion:\n");
   // head=insertAtFirst(head,5);//'head='cause we are going to send the head address to our traversal function at the next line
   // head=insertInBetweenTwoNodes(head,55,3);
    //head=insertAtEnd(head,45);
    head=insertAfterNode(head,35,second);
    traversal(head);

    return 0;
}