#include<stdio.h>
#include<stdlib.h>
#define size 5 
void push();
void pop();
void display();
int s[size],top=-1,i,item;
void main(){
    int x;
    printf("stack implementation using array\n");
    while(1){
        printf("(1)-push  (2)-pop  (3)-display (4)-exit\n");
        scanf("%d",&x);
        switch(x){
            case 1:push();break;
            case 2:pop();break;
            case 3:display();break;
            default:exit(0);
        }
    }
}
void push(){
    if(top==size-1){
        printf("stack overflow\n");
    }
    else{
        printf("enter the the number to be pushed: ");
        scanf("%d",&item);
        top++;
        s[top]=item;
    }
}
void pop(){
    if(top==-1){
        printf("stack underflow\n");
    }
    else{
        printf("the deleted element: %d\n",s[top]);
        top=top-1;
    }
}
void display(){
    if(top==-1){
        printf("stack is empty\n");
    }
    else{
        printf("elements in the stack: \n");
        for(i=top;i>=0;i--){
            printf("%d\n",s[i]);
        }
    }
}