#include <stdio.h>
#include<stdlib.h>
#define null 0
struct node {
    int data;
    struct node* next;
};
 struct node *top=null;
 void push(int val){
     struct node *ptr=(struct node*)malloc(sizeof(struct node));
      ptr->data=val;
     if(top==null){
        ptr->next=null;
     }
     else {
       ptr->next=top;
     }
     top=ptr;
     }

 int pop(){
     if(top==null){
         printf("empty");
     }
     else{
         struct node *p=top;
         int val=top->data;
         printf("enter element is poped%d\n",val);
         top=top->next;
         free(p);
          
         return val;
        
     }
 }
   void display(){
       if(top==null){
           printf("stack is underflow");
       }
       else{
           struct node *m=top;
           while(m!=0){
               printf("you have entered element\n");
               printf("%d\n",m->data);
               m=m->next;
           }
           
       }
       
   }
   
   
 
int main() {
    int choise ;
    int n;
    while(1){
    printf("enter 1 forpush\t2for pop\t 3 to display\t 4 to exit\n");
    scanf("%d",&choise);
    switch(choise){
    case 1:
    printf("enter the value in stack\n");
    scanf("%d",&n);
  push(n);
  break;

   case 2:
  pop();{
   break;

    }
    case 3:
    display();
    break;
    case 4:
    exit(0);
    break;
    default:
    printf("you have enterd no is mismatch our data so try again until");
}
}
return 0;
}
