#include<stdio.h>
#include<stdlib.h>
struct stru{
    int data;
    struct stru *next;
}*front,*rear,*temp,*item;
void push();
void pop();
void display();
int main(){
    printf("queue implementaion using linked list\n");
    int x;
    while(1){
        printf("(1)-push  (2)-pop  (3)-display  (4)-exit\n");
        scanf("%d",&x);
        switch(x){
            case 1:push();break;
            case 2:pop();break;
            case 3:display();break;
            default:exit(0);break;
        }
    }
}
void push(){
    item=(struct stru*)malloc(sizeof(struct stru));
    printf("enter the element: ");
    scanf("%d",&item->data);
    item->next=NULL;
    if(front==NULL){
        front=item;
        rear=item;
    }
    else{
        rear->next=item;
        rear=item;
    }
}
void pop(){
    if(front==NULL){
        printf("queue underflow\n");
    }
    else{
        temp=front;
        front=front->next;
        printf("the deleted element is: %d\n",temp->data);
    }
    free(temp);
}
void display(){
    if(front==NULL){
        printf("queue underflow\n");
    }
    else{
        temp=front;
        printf("the elements of queue are:\n");
        while(temp!=NULL){
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}