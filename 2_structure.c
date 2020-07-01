#include<stdio.h>
#include<string.h>
struct class{
    int roll;
    char name[20];
};
int main(){
    struct class s;
    s.roll=77;
    printf("Enter the name");
    scanf("%S",s.name);
    printf("%d\t%S",s.roll,s.name);
    return 0;

}