#include <stdio.h>
#include<stdlib.h>
#define null 0
struct node{
    struct node *next;
    int data;
}*t,*first*s;

void insert(){
    first=(struct node*)malloc(sizeof(struct node));
    first->data=90;
    first->next=null;
    int val;
     t=(struct node*)malloc(sizeof(struct node));
     printf("enter the val");
     scanf("%d\n",&val);
    t->data=val;
    t->next=first;
    first=t;
}
void insertend(){
    s=(struct node *)malloc (sizeof(struct node));
    s->data=98;
    s->next=null;
    first->next=s;
}
void pogition(int po){
    int i, val;
    struct node *p=first;
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&val);
    ptr->data=val;
    for(i=0;i<po-1;i++){
        p=p->next;
    }
    ptr->next=p->next;
    p->next=ptr;
}
void display(){
    struct node *p=first;
    while(p!=0){
        printf("%d",p->data);
    p=p->next;
    }
}
int main() {
    
    insert();
    display();
    pogition(2);
    return 0;
}
