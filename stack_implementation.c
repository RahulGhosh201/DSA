#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int top;
    int *arr;
    int size;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }else{
    return 0;
    }
}
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else{
    return 0;
    }
}

void Push(struct stack *ptr,int value){
    if(isFull(ptr)){
        printf("Stack Overflow\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=value;
        printf("Element in stack %d\n",ptr->arr[ptr->top]);
    }
}

int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("stack Underflow\n");
    }
    else{
        printf("The popped element is %d\n",ptr->arr[ptr->top]);
        ptr->top--;
    }
}

int peek(struct stack *sp,int i){
    if(sp->top-i+1){
        printf("Invalid position \n");
        return -1;
    }
    else
    return sp->arr[sp->top-i+1];
}
int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 5;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(struct stack));

    if(isEmpty(sp)){
        printf("Stack Underflow\n");   
    }
    else{
        printf("Stack is not Empty\n");
    }
    if(isFull(sp)){
        printf("Stack Overflow\n");
    }
    else{
        printf("Satck is not full yet\n");
    }
    Push(sp,15);
    Push(sp,10);
    Push(sp,20);
    Push(sp,40);
    Push(sp,30);
    Push(sp,204);
    pop(sp);
    pop(sp);
    pop(sp);
    pop(sp);
    pop(sp);
    pop(sp);
    int j=2;
    printf("Element at position %d is %d\n",j,peek(sp,j));
    return 0;
}