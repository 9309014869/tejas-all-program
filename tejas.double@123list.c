#include <stdio.h>
#include<stdlib.h>
#define null 0
struct node{
    int data;
    struct node *next,*prev;
}*x,*y;
struct node *y=null;
struct node  *insert(struct node *x){
    int val;
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    x->next=ptr;
    printf("enter the value");
    scanf("%d\n",&ptr->data);
    ptr->prev=x;
    ptr->next=y;
    y=ptr;
}
void display(struct node *x){
      struct node *p =x;
   while(p!=0){
       printf("%d\n",p->data);
       p=p->next;
}
}
int main() {
    int val;
    int choise;
    printf("enter the val\n");
    scanf("%d",&val);
    struct node *x=(struct node*)malloc(sizeof(struct node));
    x->data=val;
    x->next=null;
    x->prev=null;
 while(1){
     printf("1 for insert\t 2for display\n");
     scanf("%d",&choise);
     switch(choise){
         case 1:
         insert(x);
         break;
         case 2:
       display(x);
       break;
         
     }
 }
 return 0;
}

