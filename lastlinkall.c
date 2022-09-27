#include <stdio.h>
#include<stdlib.h>
#define null 0
struct node{
    int data;
    struct node*next; 
}*ptr=null;
void  add(){
    int val;
    int i;
    struct node *t,*last;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("entrer the number");
    scanf("%d",&val);
    ptr->data=val;
    ptr->next=null;
    last=ptr;
    for(i=1;i<6;i++){
        t=(struct node*)malloc(sizeof(struct node));
        printf("enter the number");
        scanf("%d",&val);
        t->data=val;
         t->next=null;
        last->next=t;
        last=t;
    }
}
int sum (struct node *p){
  
    if(p==0){
       return 0;
    }
    else{
        return sum(p->next)+p->data;
    }
}
void display(struct node *p){
   if(p==0){
       printf("null");
   }
   else{
       printf("%d\n",p->data);
   display(p->next);
  }
}
int count (struct node *p){
    
    if(p==0){
        return 0;
    }
    else{
      return  count(p->next)+1;
    }
}
void max(struct node *p){
    int max=0;
    while(p!=0){
        if(p->data>max){
            max=p->data;
           
        }
         p=p->next;
    }
    printf("the max=%d",max);
}
void min(struct node *p){
    int min=0;
    while(p!=0){
        if(min<p->data){
            min=p->data;
           
        }
         p=p->next;
    }
    printf("the min=%d\n",min);
}

int main() {
    add();
    display(ptr);
    
    printf("the num sum is\n=",sum(ptr));
    
    printf("%d\n",count(ptr));
    max(ptr);
    min(ptr);
    return 0;
}
