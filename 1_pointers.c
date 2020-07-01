#include<stdio.h>
void swap(int *, int *);     // initialising
int main(){
    int a=10;
    int b=20;
    swap(&a,&b);               // passing the address as arguments
    printf("%d\t%d\n",a,b);
    return 0;
}
void swap(int *x, int *y){       // initialsing 
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("%d\t%d\n",*x,*y);     // *y means value of the adress in the pointer variable, y means adress
}