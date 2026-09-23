#include<stdio.h>
#define MAX 10
int queue[MAX];
int front = -1, rear = -1;
void enqueue(int value){
    if(rear==MAX-1){
        printf("Queue overflow\n");
    }
    else{
        if(front==-1){
            front=0;
        }
        rear++;
        queue[rear]=value;
        printf("Enqueued %d to queue\n",value);
    }
}
void dequeue(){
    if(front==-1 || front>rear){
        printf("Queue underflow\n");
    }   
    else{
        printf("Dequeued %d from queue\n",queue[front]);
        front++;
    }
}
void display(){
    if(front==-1 || front>rear){
        printf("Queue is empty\n");
    }
    else{
        printf("Queue elements are:\n");
        for(int i=front;i<=rear;i++){
            printf("%d\n",queue[i]);
        }
    }
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);    
    display();
    dequeue();
    dequeue();
    display();
    return 0;
}