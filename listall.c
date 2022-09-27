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
int max(struct node *p){
    int x=0;
        if(p==0){
            return 0;
           
        }
        else
        {
            x=max(p->next);
            if(x>p->data){
               return 0;
            }
            else{
                return p->data;
            }
            
        }
}

 int serch(struct node *ptr){
    int key=5;
    while(ptr!=0){
        if(key==ptr->data){
            return ptr->data;
        }
        ptr=ptr->next;
    
        }
    
}
int main() {
    add();
    display(ptr);
    
    printf("the num sum is\n=",sum(ptr));
    
    printf("%d\n",count(ptr));
    printf("%d\n",max(ptr));
   
  printf("%d\n", serch(ptr));
    return 0;
}
