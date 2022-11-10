#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*prev,*next;
}*head;
void  create(){
    int val;
    int i;
    struct node*p,*t;
    head=(struct node*)malloc(sizeof(struct node));
    printf("enter the value ");
    scanf("%d",&val);
    head->data=val;
    head->next=head->prev=NULL;
    p=head;
    for(i=0;i<=3;i++){
        struct node*t=(struct node*)malloc(sizeof(struct node));
        printf("enter the val");
        scanf("%d",&val);
        t->data=val;
        p->next=t;
        t->prev=p;
        t->next=NULL;
        p=t;
    }
}
void delet(){
   int i,pos;
   printf("enter the value");
   scanf("%d",&pos);
    if(pos==NULL){
         struct node*p=head;
        int val;
       val=p->data;
        head=head->next;
        free(p);
    }
        else{
        struct node*p=head;
        struct node*q=NULL;
        for(i=0;i<pos-1;i++){
            q=p;
            p=p->next;
        }
        q->next=p->next;
        p->prev=q;
        free(p);
    
}
}
void display(){
    struct node*p=head;
    while(p!=NULL){
        printf("the value");
        printf("%d\n",p->data);
        p=p->next;
}
}
void d(){
    struct node*p=head;
    while(p!=NULL){
        printf("the value");
        printf("%d\n",p->data);
        p=p->prev;
}
}
int main() {
        create();
        display();
        delet();
        display();
        d();
        display();
        
    return 0;
}
