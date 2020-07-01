#include<stdio.h>
#include<stdlib.h>    //for using exit
# define size 5
void enqueue();
void dequeue();
void display();
int front=-1,rear=-1,i,item,q[size];
void main(){
    int x;
    printf("queue implementation using array\n");
    while(1){
        printf("(1)-Enqueue  (2)-Dequeue  (3)-Display  (4)-Exit\n");
        scanf("%d",&x);
        switch(x){
            case 1:enqueue();break;
            case 2:dequeue();break;
            case 3:display();break;
            default:exit(0);break;
        }
    }
}
void enqueue(){
    if(rear==size-1){
        printf("queue is full");
    }
    else{
        if(front==-1){
            front=0;
        }
        printf("enter the number: ");
        scanf("%d",&item);
        rear=rear+1;
        q[rear]=item;
    }
}
void dequeue(){
    if(front==-1||front>rear){
        printf("queue is empty\n");
    }
    else{
        printf("the deleted element is: %d\n",q[front]);
        front=front+1;
    }
}
void display(){
    if(front==-1||front>rear){
        printf("queue is empty\n");
    }
    else{
        printf("queue elements are: \n");
        for(i=front;i<=rear;i++){
            printf("%d\n",q[i]);
        }
    }
}