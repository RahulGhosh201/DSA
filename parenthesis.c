#include<stdio.h>

struct stack{
    int size;//size of the array
    int top;//top holo array r index
    int *arr;//array r modhye ek ekta character store hbe
};

int isEmpty(struct stack *ptr){
    if(ptr->top==-1){//as the top starts from -1
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct stack *ptr){
    if(ptr->top=ptr->size-1){//top means traversing index jokhn array r last available position e thakbe then full 
        return 1;
    }
    return 0;
}

void push(struct stack *ptr, char val){
    if(isFull(ptr)){
        printf(" stack Overflow,%c can't be pushed into stack\n",val);
    }
    else{
        ptr->top++;//push koray element bar6e so we have to increment the top to
        ptr->arr[ptr->top]=val;//new top index e given value store korbo
    }
}

int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow,so there is no element to be popped\n");
    }
    else{
        char val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int ParenthisisMatch(char *exp){
    struct stack *sp;//creating a stack named as sp
    sp->size=100;
    sp->top=-1;
    sp->arr=(char *)malloc(sp->size*sizeof(char));
    
}
int main(){
    
    return 0;
}