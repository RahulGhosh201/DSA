#include<stdio.h>
//create a queue with fronindex,backindex,size of the queue,an array whre the all element will bw stored
struct queue{
    int f;//frontind
    int b;//backind
    int size;
    int *arr;

};

void isFull(struct queue *q){
    if(q->r=q->size-1){
        return 1;
    }
    return 0;
}

void isEmpty(struct queue *q){
    if(q->f=q->r){
        return 1;
    }
    return 0;
}

void Enqueue(struct queue *q,int x){
    if (isFull(q))
    {
        printf("The queue is Full\n");
    }
    else{
        q->r++;
        q->arr[q->r]=x;
        printf("Enqueued element is %d\n",x);
    }
}

int Dequeue(struct queue *q){
    int a=-1;
    if(isEmpty(q)){
        printf("The queue is Empty\n");
    }
    else{
        q->f++;
        q->arr[q->f]=a;
    }
    return a;
}
int main(){
    struct queue q;
    q.size=4;
    q.f=q.r=0;//in case of queue both the forntind,backind should start fron 0 index
    q.arr=(int *)malloc(q.size*sizeof(int));

    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 1); 
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q)); 
    enqueue(&q, 45);
    enqueue(&q, 45);
    enqueue(&q, 45);
 
    if(isEmpty(&q)){
        printf("Queue is empty\n");
    }
    if(isFull(&q)){
        printf("Queue is full\n");
    }
    return 0;
}