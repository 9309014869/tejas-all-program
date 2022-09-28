#include<stdio.h>
#include<stdlib.h>
#define null 0
struct node{
    int data;
    struct node *next;
}*x,*y;
void insertatbegining(){
    x=(struct node*)malloc(sizeof(struct node));
    int val;
    printf("enter the val");
    scanf("%d",&val);
    x->data=val;
    x->next=null;
    y=(struct node*)malloc(sizeof(struct node));
    int n;
    printf("enter the val");
    scanf("%d",&n);
    y->data=n;
    y->next=x;
    x=y;
}
void insertend(){
    struct node *p=x;
    int val;
    struct node *ptr=(struct node*)malloc(sizeof)(struct node);
    scanf("%d",&val);
    ptr->data=val;
    p->next=ptr;
    ptr->next=null;
    ptr=p;
}
void insertatposion(int pogition){
    int val;
    struct node *p=x;
    if(pogition==null){
        printf("null");
    }
    else {
        struct node *m=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&val);
        m->data=val;
    for(int i=1;i<=pogition-1;i++){
        p=p->next;
    }
    m->next=p->next;
    p->next=m;
}
void display(struct node*p){
    if(p==0){

    }
    else{
        printf("%d\n",p->data);
        display(p->next);
    }
}
void search(int n)
{
    struct node *p=x;
    while(p!=0)
    if(n==p->data);{
        printf("%d",p->data)
    }
    p=p->next;
}
int sum(){
    struct node *p=x;
    if(p==0){
    return 0;
    }
    else{
        return (p->data)+sum(p->next);
    }
}
void max(){
    struct node *p=x;
    m=-778;
    while(p!=0){
        
    if(p->data>m){
        m=p->data;
        
    }
    max(p->next);
}
printf("%d",m);
}
int main(){
    int choice;
    while(1){
        printf("enter the 1 insertatbegining \t enter 2 display\n");
    scanf("%d",&choice);
    switch(choice){
    case 1:{
    insertatbegining();
    }
    break;
    
    case 2:{
    display(x);
}
case 3:
{
    insertend();
}
break;

case 4:
{
    int n;
    printf("SIR CAN YOU TELL THE POGION TO INSERT\n");
    scanf("%d",&n);
    insertatposion(n);
}
break;

case 5:{
    printf("USER ENTER THE YOU WANT TO FIND\n");
    int number;
    scanf("%d",&number);
    search(number);
}
break;
 case 6:{
   printf("the sum of element %d\n",sum());
 }
 break;
 case 7:
 {
    max();
 }
 break;
default{
    printf("enter the correct number");
}
}
}
return 0;
}
