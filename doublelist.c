#include <stdio.h>
#include<stdlib.h>
#define null 0
struct node{
    int data;
    struct node*next;
    struct node*prev;
    
};
void push(struct node *x,struct node *z){
    struct node *p=x;
    printf(" stringht string\n");
    while(p!=0){
        
        printf("%d\n",p->data);
        
        p=p->next;
    }
    printf("reverse number\n");
    struct node *l=z;
    while(l!=null){
        printf("%d\n",l->data);
        l=l->prev;
    }
    
}
int main() {
    int c;
    struct node *x=(struct node*)malloc(sizeof(struct node));
      struct node *y=(struct node*)malloc(sizeof(struct node));
          struct node *z=(struct node*)malloc(sizeof(struct node));
          x->prev=null;
          x->data=90;
          x->next=y;
          y->prev=x;
          y->data=876;
          y->next=z;
          z->prev=y;
          z->data=98;
          z->next=null;
          push(x,z);
         
    return 0;
}
