#include<stdio.h> 
#include<stdlib.h> 
struct stack{
    int data;
    struct stack *next;
 } *newn,*top=NULL,*temp;
void push();
void pop();
void display();
void main(){
    int x;
    printf("stack implementation using linked list\n");
    while(1){
        printf("(1)-push  (2)-pop  (3)-display  (4)-exit\n");
        scanf("%d",&x);
        switch(x){
            case 1: push();break;
            case 2: pop();break;
            case 3: display();break;
            default: exit(0); break;
        }
    }
}
void push(){
    int x;
    printf("enter the element: ");
    scanf("%d",&x);
    if(top==NULL){
        top=(struct stack*)malloc(sizeof(struct stack));
        top->next=NULL;
        top->data=x;
    }
    else{
        newn=(struct stack*)malloc(sizeof(struct stack));
        newn->next=top;
        newn->data=x;
        top=newn;
    }
}
void pop(){
    if(top==NULL){
        printf("Stack overflow\n");
    }
    else{
        printf("the deleted element is: %d\n",top->data);
        temp=top;
        top=top->next;
    }
    free(temp);
}
void display(){
    if(top==NULL){
        printf("Stack overflow\n");
    }
    else{
        printf("the elements in the stack are: \n");
        temp=top;
        while(temp!=NULL){
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}