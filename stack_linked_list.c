// #include<stdio.h>
// #include<stdlib.h>

// struct Node{
//     int data;
//     struct Node *next;
// };

// struct Node *top=NULL;

// int isEmpty(struct Node *top){
//     if(top==NULL){//no node exists in the stackthat's why the top of the stack is equal to NULL
//         return 1;
//     }
//     return 0;
// }

// int isFull(struct Node *top){
//     struct Node *p=(struct Node *)malloc(sizeof(struct Node));
//     if(p==NULL){//means the heap memory is full, so we can't make a new node
//         return 1;
//     }
//     return 0;
// }

// void LinkedListTraversal(struct Node *ptr){
//     while(ptr!=NULL){
//         printf("Element:%d\n",ptr->data);
//         ptr=ptr->next;
//     }
// }

// struct Node *push(struct Node *top,int x){
//     if(isFull(top)){
//         printf("Stack Overflow\n");
//     }
//     else{
//         struct Node *n=(struct Node *)malloc(sizeof(struct Node));//create a new node that is to be inserted
//         n->data=x;//enter the given data in new node 
//         n->next=top;//as the new node is generated before top node so new node & top is connecting
//         top=n;//now the new top is the new generated node 
//         return top;//stack's first node's pointer is returned
//     }
// }

// int pop(struct Node **top){
//     if(isEmpty(*top)){
//         printf("Stack Underflow\n");
//     }
//     else{
//         struct Node *n= *top;//copying the top node in n
//         *top=(*top)->next;//as we have to delete the first node or top node of the stack ,now the new top is the second first node of the stack
//         int x=n->data;//pop means getting the topmost node's data
//         free(n);//as we are working with dynamic  memory it's a good habit to free the allocated memory after using it
//         return x;//x is the top node's data
//     }
// }
// int main(){
//     struct Node *top;
//     push(top,10);//stack's element is 10
//     push(top,20);//stack's next element is 20
//     push(top,30);//stack's next element is 30
//     LinkedListTraversal(top);
//     int element=pop(&top);
//     printf("Popped element of the stack is:%d\n",element);
//     LinkedListTraversal(top);

//     return 0;
// }
#include<stdio.h>
#include<stdlib.h>
 
struct Node{
    int data;
    struct Node * next;
};
 
struct Node* top = NULL;
 
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next; 
    }
}
 
int isEmpty(struct Node* top){
    if (top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
 
int isFull(struct Node* top){
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    if(p==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
 
struct Node* push(struct Node* top, int x){
    if(isFull(top)){
        printf("Stack Overflow\n");
    }
    else{
        struct Node* n = (struct Node*) malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}
 
int pop(struct Node* tp){
    if(isEmpty(tp)){
        printf("Stack Underflow\n");
    }
    else{
        struct Node* n = tp;
        top = (tp)->next;
        int x = n->data;
        free(n);
        return x; 
    }
}

int peek(int pos){
    struct Node *ptr=top;
    for(int i=0;(i<pos-1 && ptr!=NULL);i++){
        ptr=ptr->next;
    }
    if(ptr!=NULL){
        return ptr->data;
    }
    else{
        return -1;
    }
}
int main(){
    top = push(top, 78);
    top = push(top, 7);
    top = push(top, 8);
    
    // linkedListTraversal(top);
 
    int element = pop(top); 
    printf("Popped element is %d\n", element);
    linkedListTraversal(top);
    for(int i=1;i<=3;i++){
        printf("Value at %d position is :%d\n",i,peek(i));
    }
    return 0;
}
