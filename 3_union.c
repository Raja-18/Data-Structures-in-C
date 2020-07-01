#include<stdio.h>
#include<string.h>
union class{
    char name[20];
    int arr[20];
};
int main(){
    union class c1;
    union class c2;
    strcpy(c1.name,"Ram");
    strcpy(c2.name,"John");
    c1.arr[0]=1;
    c1.arr[1]=2;
    c1.arr[2]=3;
    c2.arr[0]=4;
    c2.arr[1]=5;
    c2.arr[2]=6;
    printf("%s\n",c1.name);
    printf("%s\n",c2.name);
    for(int i=0;i<3;i++)
        printf("%d\t%d\n",c1.arr[i],c2.arr[i]);
    return 0;
}